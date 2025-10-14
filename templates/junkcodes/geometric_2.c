#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geometric_2(void) {
    printf("geometric_2\n");
    double randsum = 0;
    double randdiv = 1;
    int randflag = 0;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    do {
        randflag += 1;
        randdiv = randdiv * 2;
        randsum = randsum + (1 / randdiv);
        if(randsum == 1.00) break;
    } while(randflag < randranges);
}