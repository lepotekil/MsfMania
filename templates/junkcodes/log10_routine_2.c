#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void log10_routine_2(void) {
    printf("log10_routine_2\n");
    int randflag = -1;
    double randvar;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    int multiplier = (rand() % (1000 - 20 + 1)) + 20;
    
    do {
        randflag++;
        randvar = log((double)(multiplier * rand() / (double)(RAND_MAX)));
    } while(randflag < randranges - 1);
}