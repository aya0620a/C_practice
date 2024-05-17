#include<stdio.h>


double prod_d( double input1, double input2)
{
  return input1 * input2;
}

int main(void){
double input1, input2, result;
printf("二つの実数を入力せよ>>>");
scanf("%lf %lf", &input1 , &input2);

result = prod_d(input1, input2);

printf("%f x %f = %f", input1, input2, result);

    return 0;
}