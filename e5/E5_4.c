#include <stdio.h>

int gcd(int, int);           // gcd関数のプロトタイプ宣言

int main(void)
{
    int s,t;
    int x, y;
    int count = 0;
    printf("a=");
    scanf("%d", &s);
    printf("b=");
    scanf("%d", &t);

   for( x = s; x < t; x++ ){
      for( y = x + 1; y <= t; y++ ){
         if(gcd(x, y) == 1) {     // 2 個の整数の最大公約数が 1 なら
            printf("(x, y) = (%d, %d)\n", x, y);  // ( x, y ) を表示する
            count++;  // 個数を表す変数 cnt をインクリメントする
      }
   }
} 
   printf("%d 個", count);// 個数を表示する
    return 0;

}


int gcd(int a, int b) {
    int t;
    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}