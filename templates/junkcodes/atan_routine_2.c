#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void atan_routine_2(void) {
    int randflag = -1;
    double *randvar;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (double*)malloc(sizeof(double) * randranges);
    
    do {
        randflag++;
        randvar[randflag] = ((double)rand() / (double)(RAND_MAX));
        randvar[randflag] = atan(randvar[randflag]);
    } while(randflag < randranges - 1);
    
    free(randvar);
}