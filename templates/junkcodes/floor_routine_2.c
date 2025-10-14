#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void floor_routine_2(void) {
    printf("floor_routine_2\n");
    int randflag = -1;
    double *randvar;
    double *randvar2;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (double*)malloc(sizeof(double) * randranges);
    randvar2 = (double*)malloc(sizeof(double) * randranges);
    
    do {
        randflag++;
        randvar[randflag] = (double)(rand() % 1000) / (double)(rand() % 70);
        randvar2[randflag] = ceil(randvar[randflag]);
    } while(randflag < randranges - 1);
    
    free(randvar);
    free(randvar2);
}