#include <stdio.h>

double combi2(int, int);                          // combi関数のプロトタイプ宣言                              // fact関数のプロトタイプ宣言

int main(void)
{
    int t, m;

    for (t = 0; t <= 50; t++)
    {
        for (m = 0; m <= t; m++)
        {
            printf("%dC%d=%f\t", t, m, combi2(t, m)); // combi2関数の呼び出し
        }
        printf("\n");
    }

    return 0;
}

double combi2(int n, int r)                       // 組み合わせを求める関数の定義
{
    double x = 1.0;
    for(int i = 0; i < r; i++){
        x *= (double)(n - i) / (i + 1);
    }
    return x;
}

