#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int val;        //  入力データ
    int sum = 0;    //合計値
    int cnt;        //入力データ数
    char filename[FILENAME_MAX];    //入力ファイル名
    FILE *fp;       //入力ストリームポインタ
    int max = 0;
    int min = 100;

    strcpy(filename,argv[1]);   //filenameにコマンドラインから与えたファイル名を代入

    if ((fp = fopen(filename, "r")) == NULL) // 入力ファイルのオープン
    {
        printf("ファイルが見つかりません。 --- %s\n", filename);
        exit(EXIT_FAILURE);     //エラーによる強制終了
    }

    if( argc != 2 ){
        printf("使い方: %s filename \n", argv[0]);
        exit(EXIT_FAILURE);     //エラーによる強制終了
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