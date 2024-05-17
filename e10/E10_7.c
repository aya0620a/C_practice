#include <stdio.h>
#include <math.h>

#define FULL 10
#define N 50

int main(void)
{
    int freq[FULL + 1] = {1, 3, 7, 4, 3, 8, 6, 5, 2, 7, 4};
    double m, v, s;
    int total = 0;
    int i;

    for (i = 0; i <= FULL; i++)
    {
        total += i * freq[i];
    }

    m = (double)total / N;

    double sum = 0.0;
    for (i = 0; i <= FULL; i++)
    {
        sum += freq[i] * pow(i - m, 2);
    }
    v = sum / N;
    s = sqrt(v);

    printf("平均は %.2f\n", m);
    printf("分散は %.2f\n", v);
    printf("標準偏差は %.2f\n", s);

    printf("\n");
    for (i = 0; i <= FULL; i++)
    {
        double z_score = 10 * (i - m) / s + 50;
        printf("%d 点の人の偏差値は %.2f\n", i, z_score);
    }

    return 0;
}