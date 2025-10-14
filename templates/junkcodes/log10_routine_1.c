#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void log10_routine_1(void) {
    printf("log10_routine_1\n");
    int randflag;
    double randvar;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    int multiplier = (rand() % (1000 - 20 + 1)) + 20;
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar = log((double)(multiplier * rand() / (double)(RAND_MAX)));
    }
    
    if (randvar > 0.0) randvar = 0.0;
}