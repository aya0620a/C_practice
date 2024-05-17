#include<stdio.h>

int sum_by_loop( int n ){
    int sum;
    for(int i = 0; i <= n; i++){
        sum = sum + i;
    }
    return sum;
}

double sum_by_formula( int n ){
  return (double)( n + 1 ) * n / 2 ;  
}
int main(void){
    int input;
    printf("整数を入力せよ>>>");
    scanf("%d", &input);
    printf("for文による計算結果は%d\n", sum_by_loop(input));
    printf("和の公式による計算結果は%g\n", sum_by_formula(input));
    return 0;
}