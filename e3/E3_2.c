#include <stdio.h>

int main(void)
{
    int max;
    printf("20000以下の正の整数を入力せよ>>>");
    scanf("%d", &max);
    int total = 0;
    int n = 0;

    for (int i = 0; i <= max; i++)
    {
        if (total > max)
        {
            break;
        }
        n = i;
        total = total + i;
    }
    printf("max=%d → n = %d, total =%d ", max, n, total);
    return 0;
}