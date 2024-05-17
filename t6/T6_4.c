#include<stdio.h>

int main(void){
    int i;
    int prize[4];
    prize[0] = 10000;
    prize[1] = 5000;
    prize[2] = 3000;
    prize[3] = 1000;
    prize[4] = 500;

    printf("1 から5 までの数字を入力せよ>>>");
    scanf("%d", &i);
    if(i < 1 || i > 5){
        printf("1 以上5 以下の値を入力して下さい");
    }

    else{
        printf("%d 等は%d 円です", i, prize[i-1]);
    }
    return 0;
}