#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void reverse_array_2(void) {
    int randflag;
    int* randvar;
    int* randrevvar;
    int randLenght;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (int*)malloc(sizeof(int) * randranges);
    randrevvar = (int*)malloc(sizeof(int) * randranges);
    
    randLenght = randranges - 1;
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar[randflag] = rand() % 300;
        randrevvar[randflag] = randvar[randLenght];
        randLenght = randLenght - 1;
    }
    
    free(randvar);
    free(randrevvar);
}