#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    int sum = 0;
    int i = 0;
    int a[50];
    printf("2000以下の正の整数を入力せよ>>>");
    scanf("%d", &n);

    while (i * i <= n)
    {
        i++;

        if (pow((i - 1), 2) <= n && i * i > n)
        {
            a[i] = -1;
        }
        

        if (a[i] != -1)
        {
            a[i] = i * i;
            sum += a[i];
            printf("a[%d] = %d, ", i, a[i]);
        }     

    }

    printf("\n");
    printf("total = %d", sum);
    return 0;
}