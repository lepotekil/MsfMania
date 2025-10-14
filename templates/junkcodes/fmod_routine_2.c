#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void fmod_routine_2(void) {
    printf("fmod_routine_2\n");
    int randflag = -1;
    double *randvar;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (double*)malloc(sizeof(double) * randranges);
    
    do {
        randflag++;
        randvar[randflag] = ((double)rand() / (double)(RAND_MAX));
        randvar[randflag] = fmod(randvar[randflag], (double)(rand() % 100));
    } while(randflag < randranges - 1);
    
    free(randvar);
}