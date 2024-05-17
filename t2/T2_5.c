#include<stdio.h>

int main(void)
{
    int x;
    printf("数字を入力してください>>>");
    scanf("%d", &x);
    printf("入力された数字は%dで、", x);
    
    if( x >= 100 )
        printf("big number");
    else if( x % 2 == 0 )
        printf("small even number");
    else
        printf("small odd number");

    return 0;
}