from os import system, makedirs
import shutil

def compile(filename):
    system(
        f"x86_64-w64-mingw32-gcc "
        f"-Wall -Wextra "                
        f"-O2 -g "                       
        f"-fno-exceptions -fno-asynchronous-unwind-tables "  
        f"-static -static-libgcc -static-libstdc++ "
        f"-mwindows "
        f"-Wl,--nxcompat -Wl,--dynamicbase "
        f"/tmp/main.c -o {filename}.exe"
    )