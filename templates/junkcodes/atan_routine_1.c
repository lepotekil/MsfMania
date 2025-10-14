#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void atan_routine_1(void) {
    int randflag;
    double *randvar;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (double*)malloc(sizeof(double) * randranges);
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar[randflag] = ((double)rand() / (double)(RAND_MAX));
    }
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar[randflag] = atan(randvar[randflag]);
    }
    
    free(randvar);
}