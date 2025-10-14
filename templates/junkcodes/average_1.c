#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void average_1(void) {
    printf("average_1\n");
    int randflag;
    int* randvar;
    int randsum = 0;
    int randsum2 = 0;
    float randaverage;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (int*)malloc(sizeof(int) * randranges);
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar[randflag] = rand() % 30;
    }
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randsum = randsum + randvar[randflag];
    }
    
    randaverage = randsum / ((float)randranges);
    
    free(randvar);
}