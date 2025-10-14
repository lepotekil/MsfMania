#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void double_reverse_array_2(void) {
    printf("double_reverse_array_2\n");
    int randflag;
    int* randvar;
    int* randrevvar;
    int* randvar2;
    int* randrevvar2;
    int randLenght;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    randvar = (int*)malloc(sizeof(int) * randranges);
    randvar2 = (int*)malloc(sizeof(int) * randranges);
    randrevvar = (int*)malloc(sizeof(int) * randranges);
    randrevvar2 = (int*)malloc(sizeof(int) * randranges);
    
    randLenght = randranges - 1;
    
    for(randflag = 0; randflag < randranges; randflag++) {
        randvar[randflag] = rand() % 300;
        randvar2[randflag] = rand() % 300;
        randrevvar[randflag] = randvar[randLenght];
        randrevvar2[randflag] = randvar2[randLenght];
        randLenght = randLenght - 1;
    }
    
    free(randvar);
    free(randvar2);
    free(randrevvar);
    free(randrevvar2);
}