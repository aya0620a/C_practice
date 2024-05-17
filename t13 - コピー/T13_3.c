#include<stdio.h>

double comp(double x){
	double y;
	y = 0.9 * x + 2.5;
	
	return y;
}
	
int main(void){
	double n;
	double a = 0.0;
	printf("n=");
	scanf("%lf", &n);
	printf("a[1] = %f", n);
	
	for(int i = 2; i <= 20; i++){
		a += comp(i);
		printf("a(%d) = %g\n", i, a);
	}
	
	return 0;
}