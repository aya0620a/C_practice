#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{       
    int i;
    int rnd;

    srand((unsigned int)time(NULL));

    for (i = 0;i < 10;i++) {
        rnd = 1 + rand() % (6 - 1 + 1);
        printf("%d\n",rnd); 
    }

    return 0;
}