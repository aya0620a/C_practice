# include <stdio.h>

int main(void)
{
    char a, b, result;

    a = 50;
    b = 100;

    //足し算の結果を変数resultに格納する
    result = a + b;
    printf("%d + %d = %d\n", a, b, result);

    //引き算の結果を変数resultに格納する
    result = a - b;
    printf("%d - %d = %d\n", a, b, result);

    //掛け算の結果を変数resultに格納する
    result = a * b;
    printf("%d * %d = %d\n", a, b, result);

    //割り算の結果を変数resultに格納する
    result = a / b;
    printf("%d / %d = %d\n", a, b, result);

    return 0;
}
