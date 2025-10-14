#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void fabs_routine_1(void) {
    printf("fabs_routine_1\n");
    int randflag;
    double *randvar;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (double*)malloc(sizeof(double) * randranges);
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar[randflag] = (double)((2*(rand() / (double)(RAND_MAX))) - (double)1);
    }
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar[randflag] = fabs(randvar[randflag]);
    }
    
    free(randvar);
}