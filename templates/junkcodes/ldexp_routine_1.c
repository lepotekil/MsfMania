#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void ldexp_routine_1(void) {
    printf("ldexp_routine_1\n");
    int randinteger;
    int randflag;
    double randvar;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    int max_exp = (rand() % (32 - 16 + 1)) + 16;
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randinteger = rand() % max_exp;
        randvar = ldexp((double)(rand() / (double)(RAND_MAX)), randinteger);
    }
    
    if (randvar > 0.0) randvar = 0.0;
}