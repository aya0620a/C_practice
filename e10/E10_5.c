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
	int a, b, c, d;
	int max, min;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	max = max4( a,  b,  c,  d ) ;
	min = min4( a,  b,  c,  d ) ;
	
	printf("max = %d\n", max);
	printf("min = %d\n", min);
	
	return 0;
}
	