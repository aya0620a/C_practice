#include<stdio.h>

int main(void)
{
    int i, c, small, big;  /* c は，数を数えるための変数 */
    printf("正の整数をそれぞれ入力せよ\n");
    scanf("%d %d", &small, &big);
  

	for ( i = small ; i < big ; i++ ) {
		if ( i%3 == 0 || i%5 == 0) { 
			c++; 
		}  /* 条件が成立すればカウントアップ */
	}

	printf( "答えは %d 個です\n", c );

	return 0;

}