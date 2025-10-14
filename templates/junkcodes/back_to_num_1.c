#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void back_to_num_1(void) {
    printf("back_to_num_1\n");
    int randcpt = (rand() % (120 - 8 + 1)) + 8;
    int target = (rand() % (99 - 10 + 1)) + 10;
    
    while(randcpt > target) {
        randcpt = randcpt - 1;
    }
}