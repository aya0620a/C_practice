#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int val;        //  入力データ
    int sum = 0;    //合計値
    int cnt = 0;        //入力データ数
    char filename[FILENAME_MAX];    //入力ファイル名
    FILE *fpin, *fpout, *fpout2;       //入力ストリームポインタ
    int max = 0;
    int min = 100;

    
    if ((fpin = fopen("indata.txt", "r")) == NULL) // 入力ファイルのオープン
    {
        printf("ファイルが見つかりません。 --- %s\n", filename);
        exit(EXIT_FAILURE);     //エラーによる強制終了
    }

    if ((fpout = fopen("outdata.txt", "w")) == NULL) // 出力ファイルのオープン
    {
        printf("ファイルが見つかりません。 --- %s\n", filename);
        fclose(fpin);   //入力ファイルをクローズする
        exit(EXIT_FAILURE);     //エラーによる強制終了
    }


//データのコピー＆計算
    while(fscanf(fpin, "%d", &val) != EOF) // データの入力
    {   
        fprintf(fpout, "入力データ>>> %d\n", val);  //out.txtにコピー
        if(val > max){
            max = val;
        }
        if(val < min){
            min = val;
        }
        sum += val;
        cnt++;
    }

    fclose(fpin); // 入力ファイルのクローズ
    fclose(fpout);// 出力ファイルのクローズ


//result.txtのオープン
    if ((fpout2 = fopen("result.txt", "w")) == NULL) // 出力ファイルのオープン
    {
        printf("ファイルが見つかりません。 --- %s\n", filename);
        fclose(fpin);   //入力ファイルをクローズする
        exit(EXIT_FAILURE);     //エラーによる強制終了
    }


//平均値、最大値、最小値をresultに書き出す。
    fprintf(fpout2, "平均値: %.2f\n",(double)sum / cnt);
    fprintf(fpout2, "最大値: %d\n", max);
    fprintf(fpout2, "最小値: %d\n", min);
  
    fclose(fpout2);// ファイルのクローズ

    return EXIT_SUCCESS;
}