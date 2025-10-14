#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sum_first_n_inter_2(void) {
    int randcounter;
    unsigned long long int randcounter2 = 0;
    int randbignumb = (rand() % (120 - 8 + 1)) + 8;
    
    randcounter = randbignumb;
    
    while(randcounter > 0) {
        randcounter2 = randcounter2 + randcounter;
        randcounter = randcounter - 1;
    }
}