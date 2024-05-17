#include <stdio.h>

int main(void)
{
    int x;
    printf("定価を入力してください: ");
    scanf("%d", &x);

    int d1 = x - (int)(x * 0.05); // 5%引きの価格（小数点以下切り捨て）
    int d2 = x - 100;              // 100円引きの価格

    if (d1 < d2)
    {
        printf("5パーセント引きが安い\n");
    }
    else if (d1> d2)
    {
        printf("100円引きが安い\n");
    }
    else
    {
        printf("同じ\n");
    }

    return 0;
}