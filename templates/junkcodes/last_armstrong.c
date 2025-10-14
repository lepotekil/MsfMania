#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void last_armstrong(void) {
    int randLastArmN;
    int randvar, randflag, randvar2, randflag2;
    int randranges = (rand() % (120 - 8 + 1)) + 8;
    
    for(randflag = 1; randflag <= randranges; randflag++) {
        randvar = 0;
        randvar2 = randflag;
        
        while(randvar2 != 0) {
            randflag2 = randvar2 % 10;
            randvar += randflag2 * randflag2 * randflag2;
            randvar2 = randvar2 / 10;
        }
        
        if(randvar == randflag) {
            randLastArmN = randflag;
        }
    }
}