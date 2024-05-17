#include <stdio.h>

int main(void)
{
    int n;
    printf("正の整数を入力せよ>>>");
    scanf("%d", &n);
    int i = 0;
    int a;
    int b;

    for (a = 1; a <= 10; a++)
    {
        for (b = 1; b <= 20; b++)
        {
            if((a+b) < n){
                i++;
            }
        }

    }

    printf("n=%d のとき%d ", n, i);
    return 0;
}