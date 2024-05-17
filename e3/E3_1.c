#include <stdio.h>

int main(void)
{
    int n;
    int total;
    double r;

    printf("正の整数を入力せよ>>>");
    scanf("%d", &n);
    int count = 0;

    for (int i = 2; i < n; i += 3)
    {
        count = count + 3;
        total = total + count;
    }

    printf("total = %d ", total);
    return 0;
}