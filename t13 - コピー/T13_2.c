#include<stdio.h>

int main(void){
	int n;
	int total, t;
	scanf("%d", &n);
	
	t = 0;
	
	while(total < n+1)
	{	
		t++;
		total += t * t * t;
		printf("%d, %d\n", t, total);
	}
	
	printf("最小値t = %d, 値は%d\n", t, total);
	
	return 0;
}