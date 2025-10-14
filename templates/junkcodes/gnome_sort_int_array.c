#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gnome_sort_int_array(void) {   
    printf("gnome_sort_int_array\n");
    int *randvar;
    int randflag;
    int randtemp;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (int*)malloc(sizeof(int) * randranges);
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar[randflag] = rand() % 10000;
    }
    
    randflag = 0;
    
    while(randflag < randranges) {
        if(randflag == 0 || randvar[randflag - 1] <= randvar[randflag]) {
            randflag++;
        } else {
            randtemp = randvar[randflag - 1];
            randvar[randflag - 1] = randvar[randflag];
            randvar[randflag] = randtemp;
            randflag = randflag - 1;
        }
    }
    
    free(randvar);
}