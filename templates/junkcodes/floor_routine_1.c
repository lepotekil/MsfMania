#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void floor_routine_1(void) {
    int randflag;
    double *randvar;
    double *randvar2;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (double*)malloc(sizeof(double) * randranges);
    randvar2 = (double*)malloc(sizeof(double) * randranges);
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar[randflag] = (double)(rand() % 1000) / (double)(rand() % 70);
    }
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar2[randflag] = floor(randvar[randflag]);
    }
    
    free(randvar);
    free(randvar2);
}