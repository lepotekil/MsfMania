from os import system, makedirs
import shutil

def compile(filename):
    compiler = "x86_64-w64-mingw32-gcc"
    system(f"{compiler} /tmp/main.c -o {filename}.exe")
           