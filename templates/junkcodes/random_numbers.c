#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random_numbers(void) {
    printf("random_numbers\n");
    int randflag, randflag2 = 0;
    float* randvarr;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvarr = (float*)malloc(sizeof(float) * randranges);
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randflag2 = rand() % 400;
        if(randflag2 > 360) {
            randvarr[randflag] = 0;
        } else if(randflag2 < 0) {
            randvarr[randflag] = 0;
        } else {
            randvarr[randflag] = randflag2 * 0.1 / 360;
        }
    }
    
    free(randvarr);
}