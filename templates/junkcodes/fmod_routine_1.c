#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void fmod_routine_1(void) {
    printf("fmod_routine_1\n");
    int randflag;
    double *randvar;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (double*)malloc(sizeof(double) * randranges);
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar[randflag] = ((double)rand() / (double)(RAND_MAX));
    }
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar[randflag] = fmod(randvar[randflag], (double)(rand() % 100));
    }
    
    free(randvar);
}