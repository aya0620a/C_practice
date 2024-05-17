#include<stdio.h>

int main(void)
{
    printf("それぞれに0以上100以下の値を入力せよ\n");
    int math;
    printf("数学>");
    scanf("%d,", &math);

    int eng;
    printf("英語>");
    scanf("%d", &eng);

    if(math >= 90){
        printf("数学は秀です");
    }
    if(math >= 80 && math < 90){
        printf("数学は優です");
    }
    if(math < eng){
        printf("英語の方が得意です");
    }
    if(math < 60 && eng < 60){
        printf("学習不足です");
    }
    if(math >= 85 || eng >= 85){
        printf("問題ありません");
    }

    return 0;


}