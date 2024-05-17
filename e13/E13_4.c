#include <stdio.h>
#include<math.h>

double g(double x, double h){
	double y;
	
	y = (exp(x + h) - exp(x)) / h;
	
	return y;
}


int main( void )
{
    int i, w;
    double h;
	double result;
    
    double a;
    printf("a=");
    scanf("%lf", &a);
    

    w = 1;
    for( i = 0; i < 20; i ++ ){
        h = 1.0 / (double)w;
        ///printf("%d \t %.25f \n", w, h);  /* コメントアウトすること */

        /* 関数の呼び出し */
    	result = g(a, h);

        /* 数値の表示 */
    	printf("g(%f, %f ) = %f\n", a, h, result);
        w *= 2;

    }

  return 0;
}