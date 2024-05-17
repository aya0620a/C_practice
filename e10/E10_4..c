#include<stdio.h>

int main(void){
	int m;
	int sum = 0;
	scanf("%d", &m);
	
	while(m >=1){
		int i =0;
		i++;
		
		printf("%d\n", m%10);
		sum += m%10;
		m = m / 10 * i;
		
	}
	
	printf("%d\n", sum);
	
	return 0;
}