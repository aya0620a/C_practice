#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>

#define N 1000
#define M 1000000

int main(void)
{
    int i;
    int rnd;
    int sum;
    double average_sum = 0.0;
    double sumroot = 0.0;
    double avg;
    double var;

    srand((unsigned int)time(NULL));

    for (int try = 0; try <= M; try++)
    {
        sum = 0;
        for (i = 0; i < N; i++)
        {
            rnd = 1 + rand() % (6 - 1 + 1);
            sum += rnd;
        }
        double average = (double)sum / N; // 標本平均を計算
        average_sum += average;           // 標本平均を総和に加算
        sumroot += average * average;
    }

    //printf("サイコロを%d回振ったときの標本平均: %.2f\n", N, average_sum / 100);

    avg = (double)average_sum / M;
    var= (sumroot / M) - (avg * avg);

    printf("標本平均の平均: %.2f\n", avg);
    printf("標本平均の分散: %.2f\n", var);

    return 0;
}