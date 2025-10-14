#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sum_first_n_integer_1(void) {
    printf("sum_first_n_integer_1\n");
    int randcounter, randcounter2;
    unsigned long long int randcounter3 = 0;
    int randbignumb = (rand() % (120 - 8 + 1)) + 8;
    
    randcounter2 = randbignumb;
    
    for(randcounter = 1; randcounter <= randcounter2; randcounter++) {
        randcounter3 = randcounter3 + randcounter;
    }
}