#include <stdio.h>

int subt(int x)
{
    int y = x - 5;

    return y;
}
int main(void)
{
    printf("整数を入力せよ>>>");
    int x;
    scanf("%d", &x);

    x = subt(x);
    printf("%d", x);

    return 0;
}