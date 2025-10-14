#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void average_variance_stanard_and_deviation_1(void) {
    printf("average_variance_stanard_and_deviation_1\n");
    int* randvar;
    int randflag;
    int randsum = 0;
    int randsum2 = 0;
    float randaverage, randvariance, randdevstd;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (int*)malloc(sizeof(int) * randranges);
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar[randflag] = rand() % 35;
    }
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randsum = randsum + randvar[randflag];
    }
    
    randaverage = randsum / ((float)randranges);
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randsum2 = randsum2 + pow((randvar[randflag] - randaverage), 2);
    }
    
    randvariance = randsum2 / ((float)randranges);
    randdevstd = sqrt(randvariance);
    
    free(randvar);
}