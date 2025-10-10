from msfmania import core
from os import urandom
from random import choice, randint
from binascii import hexlify


class RC4:
    def __init__(self, key):
        self.S = list(range(256))
        self.i = 0
        self.j = 0
        
        # KSA - Key-scheduling algorithm
        j = 0
        for i in range(256):
            j = (j + self.S[i] + key[i % len(key)]) % 256
            # Swap S[i] and S[j]
            self.S[i], self.S[j] = self.S[j], self.S[i]
        
        self.i = 0
        self.j = 0
    
    def crypt(self, data):
        """PRGA - Pseudo-random generation algorithm"""
        result = bytearray()
        for byte in data:
            self.i = (self.i + 1) % 256
            self.j = (self.j + self.S[self.i]) % 256
            # Swap S[i] and S[j]
            self.S[self.i], self.S[self.j] = self.S[self.j], self.S[self.i]
            # Generate keystream byte
            K = self.S[(self.S[self.i] + self.S[self.j]) % 256]
            result.append(byte ^ K)
        return bytes(result)


def shellcode_encryption(shellcode):
    key = keygen_rc4()  # Generate RC4 key (3 characters)
    
    shellcode_bytes = shellcode
    
    # Generate random salt for dynamic hash
    salt = urandom(8)  # 8 bytes random salt
    
    # Calculate djb2 hash of the payload + salt for dynamic result
    payload_hash = djb2_hash(shellcode_bytes + salt)
    
    # Encrypt with RC4
    rc4_cipher = RC4(key)
    encrypted_shellcode = rc4_cipher.crypt(shellcode_bytes)
    
    # Convert to readable format
    encrypted_shellcode_readable = readable(encrypted_shellcode)
    # Convert hash to 4 bytes (little-endian) then to readable format
    hash_bytes = payload_hash.to_bytes(4, byteorder='little')
    hash_readable = readable(hash_bytes)
    salt_readable = readable(salt)
    
    return encrypted_shellcode_readable, hash_readable, salt_readable


def keygen_rc4():
    """Generate RC4 key with 3 characters"""
    key_length = 3  # 3 characters in key for RC4 encryption
    key = bytes([randint(1, 255) for _ in range(key_length)])  # Avoid null bytes
    return key


def djb2_hash(data):
    """
    djb2 hash algorithm implementation
    hash(i) = hash(i - 1) * 33 + str[i]
    """
    hash_value = 5381  # djb2 initial value
    for byte in data:
        hash_value = ((hash_value * 33) + byte) & 0xFFFFFFFF  # Keep it 32-bit
    return hash_value


def readable(data):
    data = hexlify(data)
    pdata = ""
    data = data.decode('ascii')
    for i in range(0, len(data) - 1, 2):
        pdata += "\\x" + data[i] + data[i + 1]
    return pdata
