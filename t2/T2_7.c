#include<stdio.h>

int main(void)
{
    int t;
    int count = 0;
    int total = 0;
    
    printf("正の整数を入力してください>>>");
    scanf("%d", &t);
    printf("入力された正の数字は%dです。\n", t);

    for(int i = 0 ; i < t ; i++){
        count = 2 * i + 1;
        total = total + count;
        printf("%d,", count);
    }
    
    printf("総和は%d", total);

    return 0;
    
}