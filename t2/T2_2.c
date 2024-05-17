#include<stdio.h>

int main(void)
{
    int x;

    printf("2023以下の正の整数を入力せよ>>>");
    scanf("%d", &x);

    if(x >= 2018 && x <=2023){
        printf("令和です\n");
    }
    
    if(x >= 1989 && x < 2018){
        printf("平成です\n");
    }

    if(x >= 1926 && x < 1989){
        printf("昭和です\n");
    }

    if( x < 1926){
        printf("元号は不明です\n");
    }

    return 0;


}