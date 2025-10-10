from msfmania import core
from subprocess import PIPE, run
from os import urandom
from random import choice
from binascii import hexlify
from cryptography.hazmat.primitives.ciphers.aead import ChaCha20Poly1305


def shellcode_encryption(shellcode):
    key = keygen_binary(32)  # 32 bytes key with only 0s and 1s
    nonce = urandom(12)  # 12 bytes nonce for ChaCha20-Poly1305
    
    shellcode_bytes = shellcode
    
    # Encrypt with ChaCha20-Poly1305
    cipher = ChaCha20Poly1305(key)
    encrypted_shellcode = cipher.encrypt(nonce, shellcode_bytes, None)
    
    # Convert to readable format
    encrypted_shellcode_readable = readable(encrypted_shellcode)
    key_readable = readable(key)
    nonce_readable = readable(nonce)
    
    return encrypted_shellcode_readable, key_readable, nonce_readable


def keygen_binary(keylen):
    """Generate a key of specified length using only 0s and 1s"""
    return bytes([choice([0, 1]) for _ in range(keylen)])


def readable(data):
    data = hexlify(data)
    pdata = ""
    data = data.decode('ascii')
    for i in range(0, len(data) - 1, 2):
        pdata += "\\x" + data[i] + data[i + 1]
    return pdata
