#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fibonacci(void) {
    printf("fibonacci\n");
    int rand1 = 0, rand2 = 1, rand3, rand4, rand5 = 0;
    int randbignumb = (rand() % (120 - 8 + 1)) + 8;
    
    rand4 = randbignumb;
    
    while(rand5 < rand4) {
        rand3 = rand1 + rand2;
        rand5++;
        rand1 = rand2;
        rand2 = rand3;
    }
}