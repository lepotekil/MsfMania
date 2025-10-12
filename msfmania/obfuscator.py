import re
import os
from . import utils

# Exhaustive C keywords (C89, C99, C11, C17, C23)
C_KEYWORDS = {
    # C89/C90 keywords
    'auto', 'break', 'case', 'char', 'const', 'continue', 'default', 'do',
    'double', 'else', 'enum', 'extern', 'float', 'for', 'goto', 'if',
    'int', 'long', 'register', 'return', 'short', 'signed', 'sizeof',
    'static', 'struct', 'switch', 'typedef', 'union', 'unsigned', 'void',
    'volatile', 'while',
    # C99 keywords
    'inline', 'restrict', '_Bool', '_Complex', '_Imaginary',
    # C11 keywords
    '_Alignas', '_Alignof', '_Atomic', '_Static_assert', '_Noreturn',
    '_Thread_local', '_Generic',
    # C23 keywords
    '_BitInt', 'typeof', 'typeof_unqual', '_BitInt', '_Decimal128',
    '_Decimal32', '_Decimal64', '_Bool',
    # Common macros and constants (standard library)
    'NULL', 'true', 'false', 'bool',
    # Reserved entry points
    'main', 'WinMain', 'DllMain', 'wWinMain',
    # Common type names that should not be renamed
    'size_t', 'ssize_t', 'ptrdiff_t', 'wchar_t', 'wint_t',
    'int8_t', 'int16_t', 'int32_t', 'int64_t',
    'uint8_t', 'uint16_t', 'uint32_t', 'uint64_t',
    'intptr_t', 'uintptr_t', 'intmax_t', 'uintmax_t',
    # Windows specific types (common)
    'BOOL', 'BYTE', 'WORD', 'DWORD', 'QWORD', 'LONG', 'ULONG',
    'HANDLE', 'HWND', 'HINSTANCE', 'LPVOID', 'LPCVOID', 'LPSTR',
    'LPCSTR', 'LPWSTR', 'LPCWSTR', 'TCHAR', 'HMODULE', 'FARPROC',
    # zlib types
    'uLong', 'uLongf', 'Bytef', 'z_stream',
    # Preprocessor directives (not technically keywords but reserved)
    'defined', '__FILE__', '__LINE__', '__DATE__', '__TIME__',
    '__STDC__', '__STDC_VERSION__', '__func__'
}

def remove_comments_from_file(file_path):
    """Remove C-style comments from a file."""
    with open(file_path, 'r') as f:
        content = f.read()
    content = re.sub(r'//.*?$', '', content, flags=re.MULTILINE)
    content = re.sub(r'/\*.*?\*/', '', content, flags=re.DOTALL)
    temp_path = file_path + '.tmp'
    with open(temp_path, 'w') as f:
        f.write(content)
    os.remove(file_path)
    os.rename(temp_path, file_path)

def remove_console_outputs_from_file(file_path):
    """Remove printf statements from a file."""
    with open(file_path, 'r') as f:
        content = f.read()
    content = re.sub(r'^.*?\bprintf\s*\(.*?\)\s*;.*?$', '', content, flags=re.MULTILINE)
    content = re.sub(r'^.*?\s*//\s*printf\s*\(.*?\)\s*;.*?$', '', content, flags=re.MULTILINE)
    temp_path = file_path + '.tmp'
    with open(temp_path, 'w') as f:
        f.write(content)
    os.remove(file_path)
    os.rename(temp_path, file_path)

def find_user_defined_functions(content):
    """Find user-defined function names (functions with implementations in this file)."""
    user_functions = set()
    
    # Pattern: return_type function_name(params) {
    # This matches DEFINITIONS (with body), not declarations or calls
    func_def_pattern = r'\b(?:void|int|char|short|long|float|double|unsigned|signed|static|inline|const|struct|enum|size_t|uint\d+_t|int\d+_t)\s+(?:\*\s*)?(\w+)\s*\([^)]*\)\s*\{'
    matches = re.finditer(func_def_pattern, content)
    
    for match in matches:
        func_name = match.group(1)
        # Only exclude C language keywords, not library functions
        # If it's defined here with a body, it's user-defined
        if func_name not in C_KEYWORDS:
            user_functions.add(func_name)
    
    return user_functions

def find_user_defined_variables(content):
    """Find user-defined variable names (variables, parameters, typedefs declared in this file)."""
    user_variables = set()
    
    # Remove strings and comments for cleaner analysis
    clean_content = re.sub(r'"(?:[^"\\]|\\.)*"', '""', content)
    clean_content = re.sub(r'//.*?$', '', clean_content, flags=re.MULTILINE)
    clean_content = re.sub(r'/\*.*?\*/', '', clean_content, flags=re.DOTALL)
    
    # Pattern 1: Global/local variable declarations
    # type var_name; or type var_name = value; or type *var_name;
    # Matches any type (including user typedefs), followed by identifier
    var_decl_pattern = r'\b(?:void|int|char|short|long|float|double|unsigned|signed|const|static|extern|volatile|struct|enum|size_t|u?int\d+_t|uLongf|uLong|\w+_t)\s+(?:\*\s*)?(\w+)\s*(?:[=;,\[])'
    matches = re.finditer(var_decl_pattern, clean_content)
    for match in matches:
        var_name = match.group(1)
        # Only exclude C keywords (not library names like MEM_COMMIT)
        if var_name not in C_KEYWORDS:
            user_variables.add(var_name)
    
    # Pattern 2: Function parameters (from user-defined functions)
    # Extract parameters from function definitions (with body)
    func_def_pattern = r'\b\w+\s+\w+\s*\(([^)]+)\)\s*\{'
    func_matches = re.finditer(func_def_pattern, clean_content)
    for func_match in func_matches:
        params = func_match.group(1)
        if params.strip() and params.strip() != 'void':
            # Extract parameter names from "type name" pairs
            param_pattern = r'\b(?:const\s+)?(?:unsigned\s+)?(?:struct\s+)?(?:\w+)\s+(?:\*\s*)*(\w+)\s*(?:,|$)'
            param_matches = re.finditer(param_pattern, params)
            for param_match in param_matches:
                param_name = param_match.group(1)
                if param_name not in C_KEYWORDS and param_name != 'void':
                    user_variables.add(param_name)
    
    # Pattern 3: Typedef structs
    typedef_pattern = r'\btypedef\s+struct[^}]*\}\s*(\w+)'
    matches = re.finditer(typedef_pattern, clean_content)
    for match in matches:
        typedef_name = match.group(1)
        if typedef_name not in C_KEYWORDS:
            user_variables.add(typedef_name)
    
    return user_variables

def rename_identifiers_in_file(file_path, identifier_mappings):
    """Rename identifiers in a file based on provided mappings."""
    with open(file_path, 'r') as f:
        content = f.read()
    
    # Sort by length (longest first) to avoid partial replacements
    sorted_mappings = sorted(identifier_mappings.items(), key=lambda x: len(x[0]), reverse=True)
    
    for original, new_name in sorted_mappings:
        # Split into lines to handle strings properly
        lines = content.split('\n')
        new_lines = []
        
        for line in lines:
            if '"' in line:
                # Parse strings to avoid replacing inside them
                parts = []
                current = ""
                in_string = False
                i = 0
                
                while i < len(line):
                    char = line[i]
                    if char == '"' and (i == 0 or line[i-1] != '\\'):
                        if in_string:
                            parts.append((current + char, True))
                            current = ""
                            in_string = False
                        else:
                            if current:
                                parts.append((current, False))
                            current = char
                            in_string = True
                    else:
                        current += char
                    i += 1
                
                if current:
                    parts.append((current, in_string))
                
                # Replace only in non-string parts
                new_line = ""
                for part, is_string in parts:
                    if is_string:
                        new_line += part
                    else:
                        # Use word boundaries to avoid partial matches
                        pattern = r'\b' + re.escape(original) + r'\b'
                        new_line += re.sub(pattern, new_name, part)
                
                new_lines.append(new_line)
            else:
                # No strings, safe to replace
                pattern = r'\b' + re.escape(original) + r'\b'
                new_lines.append(re.sub(pattern, new_name, line))
        
        content = '\n'.join(new_lines)
    
    # Write result
    temp_path = file_path + '.tmp'
    with open(temp_path, 'w') as f:
        f.write(content)
    os.remove(file_path)
    os.rename(temp_path, file_path)

def generate_random_mappings(identifiers):
    """Generate random name mappings for a set of identifiers."""
    mappings = {}
    used_names = set()
    
    for identifier in identifiers:
        while True:
            new_name = utils.generate_random_name()
            # Only avoid C keywords and already used names
            if new_name not in used_names and new_name not in C_KEYWORDS:
                mappings[identifier] = new_name
                used_names.add(new_name)
                break
    
    return mappings
