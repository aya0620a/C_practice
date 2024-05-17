#include<stdio.h>

int main(void){
    int score[7]={80, 70, 45, 90, 50, 95};

    printf("点数を入力せよ>>>");
    scanf("%d", &score[6]);

    int max = score[0];
    int min = score[0];

    for(int i = 0; i < 7; i++){
        if(score[i] > max){
            max = score[i];
        }
        if(score[i] < min){
            min = score[i];
        }
    }

    printf("最高点 %d\n", max);
    printf("最低点 %d\n", min);

    return 0;
}