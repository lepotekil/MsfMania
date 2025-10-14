#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void back_to_num_2(void) {
    int randcpt;
    int randcpt2 = (rand() % (120 - 8 + 1)) + 8;
    int target = (rand() % (99 - 10 + 1)) + 10;
    
    for(randcpt = randcpt2; randcpt > target; randcpt--) {
        randcpt2 = randcpt2 - 1;
    }
}