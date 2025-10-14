#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void average_2(void) {
    int randflag;
    int randsum = 0;
    int randsum2 = 0;
    int* randvar;
    float randaverage;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (int*)malloc(sizeof(int) * randranges);
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar[randflag] = rand() % 25;
        randsum = randsum + randvar[randflag];
    }
    
    randaverage = randsum / ((float)randranges);
    
    free(randvar);
}