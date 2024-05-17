#include <stdio.h>
#define N 12

int main() {
    int month[N] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m, d;
    int day = 0;

    printf("月を入力せよ>>> ");
    scanf("%d", &m);
    printf("日を入力せよ>>> ");
    scanf("%d", &d);

    // m月d日までの日数を計算
    for (int i = 0; i < m - 1; i++) {
        day += month[i];
    }
    day += d;

    printf("%d 月 %d 日は 1 年の %d 日目です\n", m, d, day);

    return 0;
}