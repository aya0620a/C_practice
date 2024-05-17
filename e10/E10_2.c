#include<stdio.h>

int main(void){
	int n;
	double a, r;
	double total;
	double sum = 1;
	scanf("%d %lf %lf", &n, &a, &r);
	
	for(int i = 0; i < n-1; i++){
		
		sum *= r;
	}
	
	total = a * sum;
	printf("total = %g", total);
	
	return 0;
}