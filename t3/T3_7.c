#include<stdio.h>

int main(void){
    int i;
    int j;

    for(int i =0; i < 10; i++){
        for(int j = i + 1; j <= 10; j++){
            printf("(%d , %d )", i, j);
        }
        printf("\n");
    }
}