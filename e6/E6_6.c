#include <stdio.h>
#include <math.h>
#define N 7


int main(void) {
    int score[N] = {80, 70, 45, 90, 50, 95};
    int i;
    int sum = 0;
    double m, v, s;

    for (i = 0; i < N - 1; i++) {
        sum += score[i];
    }

    printf("点数を入力せよ>>> ");
    scanf("%d", &score[N - 1]);

    sum += score[N - 1];
    m = (double)sum / N;

    v = 0.0;
    for (i = 0; i < N; i++) {
        v += pow(score[i] - m, 2);
    }
    v /= N;
    s = sqrt(v);

    printf("平均値: %.2lf\n", m);
    printf("分散: %.2lf\n", v);
    printf("標準偏差: %.2lf\n", s);

    return 0;
}