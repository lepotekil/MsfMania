#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void pow_counter(void) {
    double randcpt = 1.000001000 + (rand() / (double)(RAND_MAX)) * (1.000009999 - 1.000001000);
    double randi = 1.000001000 + (rand() / (double)(RAND_MAX)) * (1.000009999 - 1.000001000);
    double randbig = (rand() % (120 - 8 + 1)) + 8;
    
    while(randcpt < randbig) {
        randcpt = pow(randcpt, randi);
    }
}