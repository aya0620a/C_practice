#include<stdio.h>

int main(void)
{
	int a,b,c;
	int *pa,*pb,*pc;
	
	pa = &a;
	pb = &b;
	pc = &c;
	
	printf("pa = %p\n", pa);
	printf("pb = %p\n", pb);
	printf("pc = %p\n", pc);
	
	return 0;
}
	