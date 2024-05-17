#include <stdio.h>

int main(void)
{
    int i;
    int array[4];   // 5つの要素を持つ配列 tray の定義
    array[0] = 80;  // 0番目の要素(tray[0])に15をセット
    array[1] = 75; // 1番目の要素(tray[1])に200をセット
    array[2] = 50;  // 2番目の要素(tray[2])に18をセット
    array[3] = 90;  // 3番目の要素(tray[3])に55をセット

    printf("文房具の番号を入力してください＞");
    scanf("%d", &i);                   // iに文房具をあらわす番号を入力
    printf("在庫%d個\n", array[i]); // 出力箇所. たった1行になりました

    return 0;
}