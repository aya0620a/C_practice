#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int val;
    int sum = 0;
    int cnt;
    FILE *fp;
    int max = 0;
    int min = 100;

    if ((fp = fopen("indata.txt", "r")) == NULL) // 入力ファイルのオープン
    {
        printf("ファイルが見つかりません。 --- indata.dat\n");
        exit(EXIT_FAILURE);
    }

    for (cnt = 0;; cnt++) // データの入力
    {
        fscanf(fp, "%d", &val);
        if (val == 0)
        {
            break;
        }
        if(val > max){
            max = val;
        }
        if(val < min){
            min = val;
        }
        sum += val;
    }

    if (cnt > 0) // 合計・平均値の表示
    {
        printf("平均値= %g 最大値= %d 最小値= %d\n", (double)sum / cnt, max, min);
    }

    fclose(fp); // ファイルのクローズ

    return EXIT_SUCCESS;
}