#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geometric_4(void) {
    double randsum = 0;
    double randdiv = 1;
    double randosum = 1.11111111111111111111 + (rand() / (double)(RAND_MAX)) * (1.9999999999999999999 - 1.11111111111111111111);
    int randflag = 0;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    do {
        randflag += 1;
        randsum = randsum + (1 / randdiv);
        randdiv *= 4;
        if(randsum == randosum) break;
    } while(randflag < randranges);
}