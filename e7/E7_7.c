
#include <stdio.h>

#define M 5
#define N 4

int main( void )
{
	int i, j;
	int sum;
	double average;
        // 使用しない変数は消去すること

	int a[ M ][ N ] = { { 70,  85,  70, 100 }, 
	                    { 60,  30,  40,  50 }, 
	                    { 50,  60,  70,  45 }, 
	                    { 80, 100,  90,  85 }, 
	                    { 75,  90,  55,  80 }, 
	};

    for(i = 0; i <= M - 1; i++){
        for(j = 0; j <= N - 1; j++){
            sum += a[i][j];
        }
        average =  (double) sum / N ;
        printf("学生%d の平均点は%.2f 点です\n", i, average);
        sum = 0;
        average = 0;
    }
    printf("\n");
    for(j = 0; j <= N - 1; j++){
        for(i = 0; i <= M - 1; i++){
            sum += a[i][j];
        }
        average =  sum / M ;
        printf("%d 回目の試験の平均点は%.2f 点です\n", j, average);
        sum = 0;
        average = 0;
    }





	return 0;
}