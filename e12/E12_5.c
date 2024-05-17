#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )
{
    if( argc != 5 ){
        printf("使い方: %s filename \n", argv[0]);
        exit(EXIT_FAILURE);
    }

    printf("argc = %d\n", argc);

    int b[4];
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
        b[i - 1] = atoi(argv[i]);
    }

    double average = (b[0] + b[1] + b[2] + b[3]) / 4.0;

    printf("平均値: %g\n", average);

    return 0;
}