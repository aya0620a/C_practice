#include<stdio.h>

int main(void){
    int max;
    int i = 0;
    int total = 0;
    printf("20000以下の正の整数を入力せよ>>>");
    scanf("%d", &max);

    while(total <= max)
    {   
        total = total + i;
        i++;
        //printf("%d , ", total);
    }
    printf("\n");
    int n = i - 1;
    printf("変数 = %d, total =%d \n",n, total);
    return 0;
}
