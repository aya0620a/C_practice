#include <stdio.h>

int main(void)
{
    int sum;
    int array[4];   // 5つの要素を持つ配列 tray の定義
    array[0] = 80;  // 0番目の要素(tray[0])に15をセット
    array[1] = 75; // 1番目の要素(tray[1])に200をセット
    array[2] = 50;  // 2番目の要素(tray[2])に18をセット
    array[3] = 90;  // 3番目の要素(tray[3])に55をセット
    

    for(int i = 0; i < 4; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    sum = array[0] +array[1] + array[2] + array[3];
    printf("総和は%d \n", sum);

    sum = 0;    //値の初期化

    for(int j = 0; j < 4; j++){
        sum += array[j];
    }
    printf("総和は%d ", sum);
    return 0;
}