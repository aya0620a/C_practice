#include<stdio.h>

int main(void)
{   
    int t;
    int count = 0;
    int total = 0;

    printf("1以上の整数を入力せよ>>>");
    scanf("%d", &t);
    printf("入力された数字は%dです。\n", t);

    for(int i = 1; i <= t; i++){
        count = i * i;
        total = total + count;
    }

    printf("1から%dまでの整数の二乗の和は%dです\n", t, total);

    return 0;
}