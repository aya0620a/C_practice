#include <stdio.h>

int main(void){
	int amount, period;
	printf("amount, period\n");
	scanf("%d %d", &amount, &period);
	
	for(int i = period; i >= 0; i--){
		
		printf("あと%d日, 残高は%4d円.\n", i, amount); 
		
		if(amount >= 350){
			amount -=350;
			
		}
		
		else{
			printf("あと%d日, 残高は%4d円.\n", i-1, amount); 
			break;
		}
	}
	
	return 0;
}