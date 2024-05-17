#include<stdio.h>

int main(void){
    int max;
    printf("整数を入力せよ>>>");
    scanf("%d", &max);
    int i = 1;

    while(i <=max){
        if(i%3 == 0 || i%5 == 0){
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}