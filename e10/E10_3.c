#include<stdio.h>

int powint(int x, int p){
	int y = 1;
	
	while(p-- >0){
		y*= x;
	}
	
	return y;
}

int main(void){
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < powint(3, i); j++){
			printf("@");
		}
		printf("\n");
	}
	
	return 0;
}