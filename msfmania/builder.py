from os import makedirs
import os

def create_stub(stub_path, encrypted_shellcode, payload_hash, salt, key_size):
    # Read stub template
    with open("templates/main.c", 'r') as f:
        content = f.read()
    
    # Replace placeholders
    content = content.replace("ENCRYPTED_SHELLCODE_PLACEHOLDER", encrypted_shellcode)
    content = content.replace("EXPECTED_HASH_PLACEHOLDER", payload_hash)
    content = content.replace("SALT_PLACEHOLDER", salt)
    content = content.replace("KEY_SIZE_PLACEHOLDER", str(key_size))
    
    # Create directory if it doesn't exist
    stub_dir = os.path.dirname(stub_path)
    if stub_dir:
        makedirs(stub_dir, exist_ok=True)
    
    with open(stub_path, 'w') as f:
        f.write(content)
    
    return stub_path