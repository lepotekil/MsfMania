#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shaker_snort(void) {
    printf("shaker_snort\n");
    int randflag;
    int *randvar;
    int randflag2;
    int randtemp;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (int*)malloc(sizeof(int) * randranges);
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar[randflag] = rand() % 10000;
    }
    
    for(randflag2 = 1; randflag2 <= randranges / 2; randflag2++) {
        for(randflag = randflag2 - 1; randflag < randranges - randflag2; randflag++) {
            if(randvar[randflag] > randvar[randflag + 1]) {
                randtemp = randvar[randflag];
                randvar[randflag] = randvar[randflag + 1];
                randvar[randflag + 1] = randtemp;
            }
        }
        for(randflag = randranges - randflag2 - 1; randflag >= randflag2; randflag--) {
            if(randvar[randflag] < randvar[randflag - 1]) {
                randtemp = randvar[randflag];
                randvar[randflag] = randvar[randflag - 1];
                randvar[randflag - 1] = randtemp;
            }
        }
    }
    
    free(randvar);
}