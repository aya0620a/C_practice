#include<stdio.h>


double powdbl(double x, int p) // 関数の定義
{
    double y = 1;           // 正の整数xのp乗を求める関数

    while (p-- > 0)      // pの値を次々に減らしていって
    {                    // 0になるまで繰り返す。したがって
        y *= x;          // このループはp回繰り返される
    }

    return y;            // yをこの関数の値とする
}

int main(void){
	int n;
	double x;
	printf("n = ");
	scanf("%d", &n);
	printf("x = ");
	scanf("%lf", &x);
	
	double total = 0;
	for(int i = 1; i <= n; i++){
		total += i * powdbl(x, i);
	}
	
	printf("total = %g", total);
	
	return 0;
}
	

	