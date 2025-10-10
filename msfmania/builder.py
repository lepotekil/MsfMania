from os import makedirs

def create_stub(encrypted_shellcode, payload_hash, salt):
    # Read stub template
    with open("templates/main.c", 'r') as f:
        content = f.read()
    
    # Replace placeholders
    content = content.replace("ENCRYPTED_SHELLCODE_PLACEHOLDER", encrypted_shellcode)
    content = content.replace("EXPECTED_HASH_PLACEHOLDER", payload_hash)
    content = content.replace("SALT_PLACEHOLDER", salt)
    
    # Create /tmp and write main.c
    makedirs("/tmp", exist_ok=True)
    with open("/tmp/main.c", 'w') as f:
        f.write(content)