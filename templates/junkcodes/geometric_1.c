#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geometric_1(void) {
    double randsum = 0;
    double randdiv = 1;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    for(int randflag = 0; randflag < randranges; randflag++) {
        randdiv = randdiv * 2;
        randsum = randsum + (1 / randdiv);
        if(randsum == 1.00) break;
    }
}