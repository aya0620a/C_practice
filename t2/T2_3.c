#include<stdio.h>

int main(void)
{
    int x;

    printf("入力データは？>>>");
    scanf("%d", &x);

    printf("データは");
    if(x % 7 == 0){
        printf("7の倍数です\n");
    }

    else{
        printf("7の倍数ではない\n");
    }

    return 0;
    
}