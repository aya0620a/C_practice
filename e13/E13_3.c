#include<stdio.h>
#include<math.h>

double compg(double x){
	double y;
	
	y = (double)sqrt(x + 1.0);
	
	return y;
}



int main(void){
	double x;
	int n;
	printf("x, n\n");
	scanf("%lf %d", &x, &n);
	
	printf("%f\n", compg(x));
	x = compg(x);
	
	for(int i = n+1; i > 2; i--){
		x = compg(x);
		printf("%f\n", x);
	}
	
	return 0;
}
