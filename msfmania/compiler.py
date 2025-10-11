from os import system, makedirs
import os
import re

def compile(output_path, strip=False, resource_info=None, stub_path="/tmp/main.c"):
    output_dir = os.path.dirname(output_path)
    filename = os.path.basename(output_path)
    
    if not output_dir:
        # No directory specified, use Docker root
        full_output_path = f"/app/output/{filename}.exe"
        output_dir = "/app/output"
    else:
        # Directory specified, create it within /app/output
        docker_output_dir = f"/app/output/{output_dir.lstrip('/')}"
        makedirs(docker_output_dir, exist_ok=True)
        full_output_path = f"{docker_output_dir}/{filename}.exe"
        output_dir = docker_output_dir
    
    print(f"[~] Compiling to: {full_output_path}")
    
    resource_flags = ""
    if resource_info:
        rc_path = create_resource_file(resource_info, filename)
        if rc_path:
            res_path = rc_path.replace('.rc', '.res')
            rc_result = system(f"x86_64-w64-mingw32-windres {rc_path} -O coff -o {res_path} > /dev/null 2>&1")
            if rc_result == 0:
                resource_flags = f"{res_path}"
                print(f"[+] Resource file compiled")
            else:
                print(f"[x] Resource compilation failed")
    
    # Compile the C stub file
    result = system(
        f"x86_64-w64-mingw32-gcc "
        f"-Wall -Wextra "                
        f"-O2 -g "                       
        f"-fno-exceptions -fno-asynchronous-unwind-tables "  
        f"-static -static-libgcc -static-libstdc++ "
        # f"-mwindows "
        f"-Wl,--nxcompat -Wl,--dynamicbase "
        f"{stub_path} {resource_flags} -o {full_output_path} -lz"
    )
    
    if result == 0:
        print(f"[+] Compilation successful: {full_output_path}")
        
        old_size = os.path.getsize(full_output_path) // 1024
        
        if strip:
            strip_result = system(f"x86_64-w64-mingw32-strip {full_output_path}")
            if strip_result == 0:
                new_size = os.path.getsize(full_output_path) // 1024
                print(f"[+] Binary stripped: {old_size}ko -> {new_size}ko")
            else:
                print(f"[x] Strip failed")
        else:
            print(f"[+] Binary size: {old_size}ko")
        
        examples_dir = "/app/output/examples"
        makedirs(examples_dir, exist_ok=True)
        system(f"cat {stub_path} > {examples_dir}/main.c")
        print(f"[+] C source copied to: {examples_dir}/main.c")
        
        return True
    else:
        print(f"[x] Compilation failed")
        return False

def sanitize_version(version):
    """Sanitize version string for RC format"""
    clean_version = re.sub(r'[^0-9.]', '', version)
    # Ensure we have at least 4 parts (x.x.x.x)
    parts = clean_version.split('.')
    while len(parts) < 4:
        parts.append('0')
    # Take only first 4 parts and ensure they're numbers
    parts = parts[:4]
    for i, part in enumerate(parts):
        if not part or not part.isdigit():
            parts[i] = '0'
    return '.'.join(parts)

def sanitize_string(text):
    """Sanitize string for RC format"""
    if not text:
        return ""
    # Remove or replace problematic characters
    text = text.replace('"', '\\"')  # Escape quotes
    text = text.replace('\n', ' ')   # Remove newlines
    text = text.replace('\r', ' ')   # Remove carriage returns
    text = text.replace('\t', ' ')   # Replace tabs
    # Remove non-printable characters
    text = ''.join(char for char in text if ord(char) >= 32 and ord(char) < 127)
    return text.strip()

def create_resource_file(resource_info, filename):
    """Create RC resource file with metadata"""
    rc_path = f"/tmp/{filename}.rc"
    
    try:
        # Sanitize all strings
        file_version = sanitize_version(resource_info["file_version"])
        product_version = sanitize_version(resource_info["product_version"])
        company_name = sanitize_string(resource_info["company_name"])
        file_description = sanitize_string(resource_info["file_description"])
        copyright_text = sanitize_string(resource_info["copyright"])
        product_name = sanitize_string(resource_info["product_name"])
        internal_name = sanitize_string(resource_info["internal_name"])
        original_filename = sanitize_string(resource_info["original_filename"])
        
        # Get numeric versions
        file_ver_num = resource_info.get('file_version_num', (1, 0, 0, 0))
        prod_ver_num = resource_info.get('product_version_num', (1, 0, 0, 0))
        lang_codepage = resource_info.get('lang_codepage', '040904b0')
        
        with open(rc_path, 'w') as f:
            # Version info
            f.write('1 VERSIONINFO\n')
            f.write(f'FILEVERSION {file_ver_num[0]},{file_ver_num[1]},{file_ver_num[2]},{file_ver_num[3]}\n')
            f.write(f'PRODUCTVERSION {prod_ver_num[0]},{prod_ver_num[1]},{prod_ver_num[2]},{prod_ver_num[3]}\n')
            f.write('FILEFLAGSMASK 0x3fL\n')
            f.write('FILEFLAGS 0x0L\n')
            f.write('FILEOS 0x40004L\n')
            f.write('FILETYPE 0x1L\n')
            f.write('FILESUBTYPE 0x0L\n')
            f.write('BEGIN\n')
            f.write('    BLOCK "StringFileInfo"\n')
            f.write('    BEGIN\n')
            f.write(f'        BLOCK "{lang_codepage}"\n')
            f.write('        BEGIN\n')
            f.write(f'            VALUE "CompanyName", "{company_name}"\n')
            f.write(f'            VALUE "FileDescription", "{file_description}"\n')
            f.write(f'            VALUE "FileVersion", "{file_version}"\n')
            f.write(f'            VALUE "InternalName", "{internal_name}"\n')
            f.write(f'            VALUE "LegalCopyright", "{copyright_text}"\n')
            f.write(f'            VALUE "OriginalFilename", "{original_filename}"\n')
            f.write(f'            VALUE "ProductName", "{product_name}"\n')
            f.write(f'            VALUE "ProductVersion", "{product_version}"\n')
            f.write('        END\n')
            f.write('    END\n')
            f.write('    BLOCK "VarFileInfo"\n')
            f.write('    BEGIN\n')
            f.write('        VALUE "Translation", 0x409, 1200\n')
            f.write('    END\n')
            f.write('END\n')

        return rc_path
    except Exception:
        return None