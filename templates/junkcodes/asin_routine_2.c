#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void asin_routine_2(void) {
    int randflag = -1;
    double *randvar;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (double*)malloc(sizeof(double) * randranges);
    
    do {
        randflag++;
        randvar[randflag] = (double)((2*(rand() / (double)(RAND_MAX))) - (double)1);
        randvar[randflag] = asin(randvar[randflag]);
    } while(randflag < randranges - 1);
    
    free(randvar);
}