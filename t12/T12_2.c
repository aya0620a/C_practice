#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )
{
    if( argc != 2 ){
        printf("使い方: %s filename \n", argv[0]);
        exit(EXIT_FAILURE);
    }
    printf("%d, %s, %s", argc, argv[0], argv[2]);

    return 0;
}