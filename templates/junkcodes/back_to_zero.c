#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void back_to_zero(void) {
    printf("back_to_zero\n");
    int randcpt = (rand() % (120 - 8 + 1)) + 8;
    
    while(randcpt > 0) {
        randcpt = randcpt - 1;
    }
}