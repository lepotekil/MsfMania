#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void primes_number_soe(void) {
    printf("primes_number_soe\n");
    unsigned long long int randflag, randflag2;
    int *randprimevar;
    int randvar = 1;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randprimevar = (int*)malloc(sizeof(int) * randranges);
    
    for(randflag = 2; randflag < randranges; randflag++) {
        randprimevar[randflag] = 1;
    }
    
    for(randflag = 2; randflag < randranges; randflag++) {
        if(randprimevar[randflag]) {
            for(randflag2 = randflag; randflag * randflag2 < randranges; randflag2++) {
                randprimevar[randflag * randflag2] = 0;
            }
        }
    }
    
    free(randprimevar);
}