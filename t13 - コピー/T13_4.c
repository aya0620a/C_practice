#include<stdio.h>

int main(void){
	
	int amount = 5000;
	int count = 0;
	
	for(int i = 5; i >= 0; i--){
	
		for(int j = 0; j <= 10; j++){
		
			for(int k = 0; k <= 100; k++){
			
				if(amount == 1000 * i + 500 * j + 100 * k){
					printf("1000円札が%d枚, 500円玉が%2d枚, 100円玉が%3d枚\n", i, j, k);
					count++;
				}
			}
		}
	}
	
	printf("総数は %d通り", count);
	
	return 0;
}