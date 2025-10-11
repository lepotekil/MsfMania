import re
import random
import string
import os
import pefile

def generate_random_name(min_length=8, max_length=256):
    """Generate a random valid C identifier"""
    first_char = random.choice(string.ascii_letters + '_')
    remaining_chars = string.ascii_letters + string.digits + '_'
    length = random.randint(min_length - 1, max_length - 1)
    name = first_char + ''.join(random.choice(remaining_chars) for _ in range(length))
    return name

def obfuscate_c_file(file_path):
    """Obfuscate user-defined variable and function names in a C file"""
    
    with open(file_path, 'r') as f:
        content = f.read()
    
    name_mappings = {}
    
    # C keywords and protected identifiers
    c_keywords = {
        'auto', 'break', 'case', 'char', 'const', 'continue', 'default', 'do',
        'double', 'else', 'enum', 'extern', 'float', 'for', 'goto', 'if',
        'inline', 'int', 'long', 'register', 'restrict', 'return', 'short',
        'signed', 'sizeof', 'static', 'struct', 'switch', 'typedef', 'union',
        'unsigned', 'void', 'volatile', 'while', 'NULL', 'true', 'false',
        '_Bool', '_Complex', '_Imaginary', 'main', 'key', 'printf', 'memcpy',
        'memset', 'VirtualAlloc', 'uncompress', 'MEM_COMMIT', 'PAGE_EXECUTE_READWRITE'
    }
    
    # Remove comments and prepare content for analysis
    content_no_comments = re.sub(r'//.*?$', '', content, flags=re.MULTILINE)
    content_no_comments = re.sub(r'/\*.*?\*/', '', content_no_comments, flags=re.DOTALL)
    
    # Remove strings for analysis
    analysis_content = re.sub(r'"(?:[^"\\]|\\.)*"', '""', content_no_comments)
    
    # Find all potential identifiers
    all_identifiers = set(re.findall(r'\b[a-zA-Z_][a-zA-Z0-9_]*\b', analysis_content))
    
    # Remove C keywords
    all_identifiers = all_identifiers - c_keywords
    
    # Filter to keep only user-defined identifiers
    user_identifiers = set()
    
    for identifier in all_identifiers:
        # Skip system macros and library functions
        if identifier.startswith('_') and identifier[1:2].isupper():
            continue
        
        # Check for function definitions
        func_def_pattern = r'\b' + re.escape(identifier) + r'\s*\([^)]*\)\s*\{'
        if re.search(func_def_pattern, analysis_content):
            user_identifiers.add(identifier)
            continue
        
        # Check for variable declarations
        var_decl_pattern = r'\b(?:void|int|char|short|long|float|double|unsigned|signed|struct|enum|const|static|extern|volatile|size_t|uint8_t|uint16_t|uint32_t|uint64_t|int8_t|int16_t|int32_t|int64_t)\s+(?:\w+\s+)*\*?\s*\b' + re.escape(identifier) + r'\b'
        if re.search(var_decl_pattern, analysis_content):
            user_identifiers.add(identifier)
            continue
        
        # Check for typedef structs
        typedef_pattern = r'\btypedef\s+struct[^}]*\}\s*' + re.escape(identifier)
        if re.search(typedef_pattern, analysis_content):
            user_identifiers.add(identifier)
            continue
        
        # Check for function parameters
        param_pattern = r'\([^)]*\b(?:void|int|char|short|long|float|double|unsigned|signed|struct|const|size_t|uint\d+_t|int\d+_t)\s+(?:\*\s*)?' + re.escape(identifier) + r'\b'
        if re.search(param_pattern, analysis_content):
            user_identifiers.add(identifier)
            continue
    
    # Generate unique mappings for all user identifiers
    for identifier in user_identifiers:
        if identifier not in name_mappings:
            while True:
                new_name = generate_random_name()
                if new_name not in name_mappings.values() and new_name not in c_keywords and new_name not in all_identifiers:
                    name_mappings[identifier] = new_name
                    break
    
    # Sort by length (longest first) to avoid partial replacements
    sorted_mappings = sorted(name_mappings.items(), key=lambda x: len(x[0]), reverse=True)
    
    # Replace identifiers using word boundaries, but preserve strings
    modified_content = content_no_comments
    for original, obfuscated in sorted_mappings:
        # Split content into lines and process each line
        lines = modified_content.split('\n')
        new_lines = []
        
        for line in lines:
            # Check if line contains strings
            if '"' in line:
                # Split line into parts: code and strings
                parts = []
                current_part = ""
                in_string = False
                i = 0
                
                while i < len(line):
                    char = line[i]
                    if char == '"' and (i == 0 or line[i-1] != '\\'):
                        if in_string:
                            # End of string
                            parts.append((current_part + char, True))
                            current_part = ""
                            in_string = False
                        else:
                            # Start of string
                            if current_part:
                                parts.append((current_part, False))
                            current_part = char
                            in_string = True
                    else:
                        current_part += char
                    i += 1
                
                if current_part:
                    parts.append((current_part, in_string))
                
                # Replace only in non-string parts
                new_line = ""
                for part, is_string in parts:
                    if is_string:
                        new_line += part
                    else:
                        pattern = r'\b' + re.escape(original) + r'\b'
                        new_line += re.sub(pattern, obfuscated, part)
                
                new_lines.append(new_line)
            else:
                # No strings in line, safe to replace
                pattern = r'\b' + re.escape(original) + r'\b'
                new_lines.append(re.sub(pattern, obfuscated, line))
        
        modified_content = '\n'.join(new_lines)
    
    # Write to temporary file
    temp_path = file_path + '.tmp'
    with open(temp_path, 'w') as f:
        f.write(modified_content)
    
    # Replace original file
    os.remove(file_path)
    os.rename(temp_path, file_path)

def extract_binary_metadata(target_exe):
    """Extract metadata from target executable using pefile"""
    print(f"[~] Extracting metadata from: {target_exe}")
    
    if not os.path.exists(target_exe):
        print(f"[x] Target file not found: {target_exe}")
        return None
    
    metadata = {
        'file_description': 'Windows Application',
        'file_version': '1.0.0.0',
        'file_version_num': (1, 0, 0, 0),
        'product_name': 'Application',
        'product_version': '1.0.0.0',
        'product_version_num': (1, 0, 0, 0),
        'company_name': 'Microsoft Corporation',
        'copyright': 'Copyright (C) Microsoft Corporation. All rights reserved.',
        'original_filename': os.path.basename(target_exe),
        'internal_name': os.path.splitext(os.path.basename(target_exe))[0],
        'lang_codepage': '040904b0'
    }
    
    try:
        pe = pefile.PE(target_exe)
        
        # Extract numeric version from FixedFileInfo
        if hasattr(pe, 'VS_FIXEDFILEINFO'):
            fixed_info = pe.VS_FIXEDFILEINFO[0]
            file_ver_ms = fixed_info.FileVersionMS
            file_ver_ls = fixed_info.FileVersionLS
            prod_ver_ms = fixed_info.ProductVersionMS
            prod_ver_ls = fixed_info.ProductVersionLS
            
            metadata['file_version_num'] = (
                (file_ver_ms >> 16) & 0xFFFF,
                file_ver_ms & 0xFFFF,
                (file_ver_ls >> 16) & 0xFFFF,
                file_ver_ls & 0xFFFF
            )
            metadata['product_version_num'] = (
                (prod_ver_ms >> 16) & 0xFFFF,
                prod_ver_ms & 0xFFFF,
                (prod_ver_ls >> 16) & 0xFFFF,
                prod_ver_ls & 0xFFFF
            )
        
        # Extract version info using FileInfo
        if hasattr(pe, 'FileInfo'):
            for file_info in pe.FileInfo:
                for file_info_entry in file_info:
                    if hasattr(file_info_entry, 'StringTable'):
                        for string_table in file_info_entry.StringTable:
                            if hasattr(string_table, 'name'):
                                lang_str = string_table.name
                                if isinstance(lang_str, bytes):
                                    lang_str = lang_str.decode('utf-8', errors='ignore')
                                if lang_str:
                                    metadata['lang_codepage'] = lang_str
                            
                            for entry in string_table.entries.items():
                                key, value = entry
                                key = key.decode('utf-8', errors='ignore')
                                value = value.decode('utf-8', errors='ignore')
                                
                                if key == 'FileDescription' and value.strip():
                                    metadata['file_description'] = value.strip()
                                elif key == 'FileVersion' and value.strip():
                                    metadata['file_version'] = value.strip()
                                elif key == 'ProductName' and value.strip():
                                    metadata['product_name'] = value.strip()
                                elif key == 'ProductVersion' and value.strip():
                                    metadata['product_version'] = value.strip()
                                elif key == 'CompanyName' and value.strip():
                                    metadata['company_name'] = value.strip()
                                elif key == 'LegalCopyright' and value.strip():
                                    metadata['copyright'] = value.strip()
                                elif key == 'InternalName' and value.strip():
                                    metadata['internal_name'] = value.strip()
                                elif key == 'OriginalFilename' and value.strip():
                                    metadata['original_filename'] = value.strip()
        
        pe.close()
        
    except Exception as e:
        print(f"[x] Failed to parse PE file: {e}")
        return None
    
    print(f"[+] Extracted metadata:")
    print(f"    Description: {metadata['file_description']}")
    print(f"    Version: {metadata['file_version']}")
    print(f"    Company: {metadata['company_name']}")
    print(f"    Product: {metadata['product_name']}")
    
    return metadata
