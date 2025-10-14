#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geometric_5(void) {
    double randsum = 0;
    double randdiv = 1;
    double randosum = 0.11111111111111111111 + (rand() / (double)(RAND_MAX)) * (0.9999999999999999999 - 0.11111111111111111111);
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    for(int randflag = 0; randflag < randranges; randflag++) {
        randdiv *= 4;
        randsum = randsum + (1 / randdiv);
        if(randsum == randosum) break;
    }
}