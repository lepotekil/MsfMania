#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void exp_routine_2(void) {
    int randflag = -1;
    double randvar;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    int multiplier = (rand() % (10 - 2 + 1)) + 2;
    
    do {
        randflag++;
        randvar = exp((double)(multiplier * rand() / (double)(RAND_MAX)));
    } while(randflag < randranges - 1);
}