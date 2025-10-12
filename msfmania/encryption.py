from os import urandom
from random import choice, randint
from binascii import hexlify
import zlib
import base64


class RC4:
    def __init__(self, interm_key):
        # Split S-box into 4 tables of 64 entries (0-255 overall)
        self.S_tables = []
        for t in range(4):
            table = [(t * 64 + j) for j in range(64)]
            self.S_tables.append(table)
        self.i = 0
        self.j = 0
        
        # KSA adapted for split tables
        j = 0
        for idx in range(256):
            table_idx = idx // 64
            pos = idx % 64
            s_val = self.S_tables[table_idx][pos]
            j = (j + s_val + interm_key[idx % len(interm_key)]) % 256
            j_table = j // 64
            j_pos = j % 64
            # Swap
            tmp = self.S_tables[table_idx][pos]
            self.S_tables[table_idx][pos] = self.S_tables[j_table][j_pos]
            self.S_tables[j_table][j_pos] = tmp
        
        self.i = 0
        self.j = 0
    
    def crypt(self, data, salt):
        """PRGA - Pseudo-random generation algorithm with feedback"""
        result = bytearray()
        for k in range(len(data)):
            self.i = (self.i + 1) % 256
            self.j = (self.j + self.S_tables[self.i // 64][self.i % 64]) % 256
            # Swap
            i_table = self.i // 64
            i_pos = self.i % 64
            j_table = self.j // 64
            j_pos = self.j % 64
            tmp = self.S_tables[i_table][i_pos]
            self.S_tables[i_table][i_pos] = self.S_tables[j_table][j_pos]
            self.S_tables[j_table][j_pos] = tmp
            # Keystream
            K = self.S_tables[(self.S_tables[i_table][i_pos] + self.S_tables[j_table][j_pos]) % 256 // 64][(self.S_tables[i_table][i_pos] + self.S_tables[j_table][j_pos]) % 256 % 64]
            result.append(data[k] ^ K)
            # Feedback: modify j with LSB of salt
            salt_bit = salt[k % len(salt)] & 1
            self.j = (self.j + salt_bit) % 256
        return bytes(result)


def shellcode_encryption(shellcode, key_size=1):
    print(f"[~] Starting shellcode encryption (key size: {key_size})")
    key = keygen_rc4(key_size)
    
    shellcode_bytes = shellcode
    
    # Generate random salt for dynamic hash
    salt = urandom(8)
    
    # Calculate djb2 hash of the payload + salt
    payload_hash = djb2_hash(shellcode_bytes + salt)
    hash_bytes = payload_hash.to_bytes(4, byteorder='little')
    
    # Derive intermediate key: XOR key with first bytes of hash
    interm_key = bytes(k ^ h for k, h in zip(key, hash_bytes[:len(key)]))
    
    # Compress with zlib (level 9 = maximum compression)
    print(f"[~] Compressing shellcode ({len(shellcode_bytes)} bytes)")
    compressed_shellcode = zlib.compress(shellcode_bytes, 9)
    print(f"[+] Shellcode compressed to {len(compressed_shellcode)} bytes")
    
    # Encrypt with modified RC4
    print("[~] Encrypting with modified RC4")
    rc4_cipher = RC4(interm_key)
    encrypted_shellcode = rc4_cipher.crypt(compressed_shellcode, salt)
    
    # Encode to base64
    b64_shellcode = base64.b64encode(encrypted_shellcode)
    
    # Convert to readable format
    encrypted_shellcode_readable = readable(b64_shellcode)
    hash_readable = readable(hash_bytes)
    salt_readable = readable(salt)
    
    print(f"[+] Encryption completed: {len(encrypted_shellcode)} bytes (b64: {len(b64_shellcode)} bytes)")
    return encrypted_shellcode_readable, hash_readable, salt_readable


def keygen_rc4(key_size=1):
    """Generate RC4 key with specified size (1-3 characters)"""
    key = bytes([randint(1, 255) for _ in range(key_size)])
    return key


def djb2_hash(data):
    """djb2 hash algorithm implementation"""
    hash_value = 5381
    for byte in data:
        hash_value = ((hash_value * 33) + byte) & 0xFFFFFFFF
    return hash_value


def readable(data):
    data = hexlify(data)
    pdata = ""
    data = data.decode('ascii')
    for i in range(0, len(data) - 1, 2):
        pdata += "\\x" + data[i] + data[i + 1]
    return pdata
