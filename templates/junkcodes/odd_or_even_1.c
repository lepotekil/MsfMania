#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void odd_or_even_1(void) {
    printf("odd_or_even_1\n");
    int randflag;
    int *randvar;
    int randodd = 0;
    int randeven = 0;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (int*)malloc(sizeof(int) * randranges);
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar[randflag] = rand() % 100000;
    }
    
    randflag = 0;
    
    for(randflag = 0; randflag < randranges; randflag++) {
        if(randvar[randflag] & 1) {
            randodd += 1;
        } else if(!(randvar[randflag] & 1)) {
            randeven += 1;
        }
    }
    
    free(randvar);
}