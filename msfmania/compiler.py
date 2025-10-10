from os import system, makedirs
import shutil

def compile(filename):
    import os
    output_dir = "/app/output" if os.path.exists("/app/output") else "."
    output_path = f"{output_dir}/{filename}.exe"
    
    system(
        f"x86_64-w64-mingw32-gcc "
        f"-Wall -Wextra "                
        f"-O2 -g "                       
        f"-fno-exceptions -fno-asynchronous-unwind-tables "  
        f"-static -static-libgcc -static-libstdc++ "
        # f"-mwindows "
        f"-Wl,--nxcompat -Wl,--dynamicbase "
        f"/tmp/main.c -o {output_path} -lz"
    )