#include <math.h>
#include <stdio.h>

double mycbrt(double x);                   // mysqrt関数のプロトタイプ宣言

int main(void)
{
    double x;

    printf("\tx\tr\t\tr*r*r\n");   // タイトル表示
    for (x = 1; x <= 10.0; x += 1)           // x=1.0, 2.0, 3.0, …, 10.0
    {
        double r = mycbrt(x);
        double r3 = r * r * r;
        printf("\t%3.1f\t%12.10f\t%12.10f\n", x, r, r3);
    }
    return 0;
}

double mycbrt(double x)                    // square rootを求める関数
{
    const double eps = 1.0e-10;            // 打ち切り計算誤差
    double guess = 1.0;                    // 推測値

    while (fabs(guess * guess * guess- x) >= eps) // 推測値がよくなるまで繰り返す
    {
        guess = (2 * guess + x / (guess * guess)) / 3.0; // 推測値の更新
    }

    return guess;                          // 関数の戻り値
}