#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void reverse_array_1(void) {
    int randflag;
    int* randvar;
    int* randrevvar;
    int randlenght;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (int*)malloc(sizeof(int) * randranges);
    randrevvar = (int*)malloc(sizeof(int) * randranges);
    
    randlenght = randranges - 1;
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar[randflag] = rand() % 300;
    }
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randrevvar[randflag] = randvar[randlenght];
        randlenght = randlenght - 1;
    }
    
    free(randvar);
    free(randrevvar);
}