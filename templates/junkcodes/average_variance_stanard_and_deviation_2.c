#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void average_variance_stanard_and_deviation_2(void) {
    printf("average_variance_stanard_and_deviation_2\n");
    int randsum = 0;
    int randsum2 = 0;
    int *randvar;
    float randaverage, randvariance, randdevstd;
    int randflag;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (int*)malloc(sizeof(int) * randranges);
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar[randflag] = rand() % 35;
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