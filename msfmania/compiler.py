from msfmania import core
from os import system

def auto_compile(filename):
    compiler = "x86_64-w64-mingw32-gcc"
    system(f"{compiler} {filename} -o {filename}.exe")
   