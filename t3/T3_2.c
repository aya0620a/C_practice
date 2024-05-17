#include<stdio.h>

int main(void){
    int t;
    printf("整数を入力せよ>>>");
    scanf("%d", &t);
    int i = 1;
    int total = 0;

    while(i <=t){
        total = total + i * i;
        printf("%d 週目 total = %d\n", i, total);
        i++;
        
        
    }
    int r = i - 1;
    printf("1 から%d までの二乗の和は%d です。\n", r, total);

    return 0;
}