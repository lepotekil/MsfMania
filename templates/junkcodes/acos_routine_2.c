#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void acos_routine_2(void) {
    printf("acos_routine_2\n");
    int randflag = -1;
    double *randvar;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (double*)malloc(sizeof(double) * randranges);
    
    do {
        randflag++;
        randvar[randflag] = (double)((2*(rand() / (double)(RAND_MAX))) - (double)1);
        randvar[randflag] = acos(randvar[randflag]);
    } while(randflag < randranges - 1);
    
    free(randvar);
}