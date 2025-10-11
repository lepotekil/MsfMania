from os import makedirs
import os

def create_stub(encrypted_shellcode, payload_hash, salt, key_size):
    # Read stub template
    with open("templates/main.c", 'r') as f:
        content = f.read()
    
    # Replace placeholders
    content = content.replace("ENCRYPTED_SHELLCODE_PLACEHOLDER", encrypted_shellcode)
    content = content.replace("EXPECTED_HASH_PLACEHOLDER", payload_hash)
    content = content.replace("SALT_PLACEHOLDER", salt)
    content = content.replace("KEY_SIZE_PLACEHOLDER", str(key_size))
    
    makedirs("/tmp", exist_ok=True)
    stub_path = "/tmp/main.c"
    
    with open(stub_path, 'w') as f:
        f.write(content)