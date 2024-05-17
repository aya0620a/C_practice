#include<stdio.h>

int main(void){
    int a[4] = {3, -2, -1, 1};
    int b[3];
    int sum[3];
    int n;
    int ip = 0;

    printf("整数を入力せよ>>>");
    scanf("%d", &n);
    printf("ベクトルの和は (");
    for(int i = 0; i <= 3; i++){
        b[i] = (n + i);
        sum[i] = a[i] + b[i];
        if(i==3){
            printf("%d) \t", sum[i]);
        }
        else{
            printf("%d, ", sum[i]);
        }

        ip += a[i] * b[i];
    }
    printf("内積は%d ", ip);


}