#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void primes_number_sos(void) {
    int randflag, randflag2;
    int randprimevar = 0;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    int randarraysize = randranges;
    int randn = randranges / 2;
    int randsizevar;
    int* isprime;
    
    isprime = (int*)malloc(sizeof(int) * (randarraysize + 1));
    
    for(randflag = 0; randflag < randn; randflag++) {
        isprime[randflag] = randflag;
    }
    
    for(randflag = 1; randflag < randn; randflag++) {
        for(randflag2 = randflag; randflag2 <= (randn - randflag) / (2 * randflag + 1); randflag2++) {
            isprime[randflag + randflag2 + 2 * randflag * randflag2] = 0;
        }
    }
    
    if(randarraysize > 2) {
        isprime[randprimevar++] = 2;
    }
    
    for(randflag = 1; randflag < randn; randflag++) {
        if(isprime[randflag] != 0) {
            isprime[randprimevar++] = randflag * 2 + 1;
        }
    }
    
    randsizevar = sizeof(isprime) / sizeof(int);
    int randprimenumb = 0;
    
    for(randflag = 0; randflag < randsizevar; randflag++) {
        if(isprime[randflag] != 0) {
            randprimenumb++;
        }
    }
    
    free(isprime);
}