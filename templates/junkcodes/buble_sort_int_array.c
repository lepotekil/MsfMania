#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void buble_sort_int_array(void) {
    int *randvar;
    int randflag;
    int randflag2;
    int randvar2;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (int*)malloc(sizeof(int) * randranges);
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar[randflag] = rand() % 10000;
    }
    
    for(randflag = 0; randflag < randranges; randflag++) {
        for(randflag2 = 0; randflag2 < (randranges - randflag - 1); randflag2++) {
            if(randvar[randflag] > randvar[randflag2 + 1]) {
                randvar2 = randvar[randflag2];
                randvar[randflag2] = randvar[randflag + 1];
                randvar[randflag2 + 1] = randvar2;
            }
        }
    }
    
    free(randvar);
}