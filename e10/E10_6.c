#include<stdio.h>

int max2(int a, int b){
	int max;
	
	if(a > b){
		max = a;
	}
	else{
		max = b;
	}
	
	return max;
}

int max4( int a, int b, int c, int d ){
    return max2(max2(a,b), max2(c,d));
}

int min2(int a, int b){
	int min;
	
	if(a > b){
		min = b;
	}
	else{
		min = a;
	}
	
	return min;
}

int min4( int a, int b, int c, int d ){
    return min2(min2(a,b), min2(c,d));
}

int main(void){
	int p, q;
	printf("pを入力してください ");
    scanf("%d", &p);
    printf("qを入力してください ");
    scanf("%d", &q);
	int count = 0;
	int a, b, c, d;
	
	for(a = p; a <= q; a++){
		for(b = p; b <= q; b++){
			for(c = p; c <= q; c++){
				for(d = p; d <= q; d++){
				
				if(p == min4(a, b, c, d) && q == max4(a, b, c, d)){
					count++;
				}
				}
					
			}
		}
	}
			printf("count = %d", count);
	return 0;
}