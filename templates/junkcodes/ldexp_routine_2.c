#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void ldexp_routine_2(void) {
    printf("ldexp_routine_2\n");
    int randinteger;
    int randflag = -1;
    double randvar;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    int max_exp = (rand() % (32 - 16 + 1)) + 16;
    
    do {
        randflag++;
        randinteger = rand() % max_exp;
        randvar = ldexp((double)(rand() / (double)(RAND_MAX)), randinteger);
    } while(randflag < randranges - 1);
    
    if (randvar > 0.0) randvar = 0.0;
}