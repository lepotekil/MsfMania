from os import system, makedirs
import shutil
import os

def compile(output_path, stub_path="/tmp/main.c"):
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
    
    # Compile the C stub file
    result = system(
        f"x86_64-w64-mingw32-gcc "
        f"-Wall -Wextra "                
        f"-O2 -g "                       
        f"-fno-exceptions -fno-asynchronous-unwind-tables "  
        f"-static -static-libgcc -static-libstdc++ "
        # f"-mwindows "
        f"-Wl,--nxcompat -Wl,--dynamicbase "
        f"{stub_path} -o {full_output_path} -lz"
    )
    
    if result == 0:
        print(f"[+] Compilation successful: {full_output_path}")
        
        # Copy the C stub file to examples folder (always in mounted volume)
        examples_dir = "/app/output/examples"
        makedirs(examples_dir, exist_ok=True)
        system(f"cat {stub_path} > {examples_dir}/main.c")
        print(f"[+] C source copied to: {examples_dir}/main.c")
        
        return True
    else:
        print(f"[x] Compilation failed")
        return False