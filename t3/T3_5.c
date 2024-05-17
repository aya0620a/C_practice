 #include <stdio.h>

 int main(void)
 {
	int x, y;

	for ( x = 0; x < 5; x++ ) 
	{
		for ( y = 2; y < 7; y++ ) 
		{
			printf( "%d+%d=%d         %d*%d=%d\n", x, y, x + y , x, y, x * y );
		}
    printf("\n");
	}

	return 0;

 }