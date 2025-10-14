#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void exp_routine_1(void) {
    printf("exp_routine_1\n");
    int randflag;
    double randvar;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    int multiplier = (rand() % (10 - 2 + 1)) + 2;
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar = exp((double)(multiplier * rand() / (double)(RAND_MAX)));
    }
}