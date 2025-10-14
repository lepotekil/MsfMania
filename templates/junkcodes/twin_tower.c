#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void twin_tower(void) {
    printf("twin_tower\n");
    int randcpt = (rand() % (120 - 8 + 1)) + 8;
    int randcpt2 = (rand() % (120 - 8 + 1)) + 8;
    
    while(randcpt > 0) {
        if(randcpt > randcpt2) {
            randcpt = randcpt - 1;
        } else {
            randcpt2 = randcpt2 - 1;
        }
    }
}