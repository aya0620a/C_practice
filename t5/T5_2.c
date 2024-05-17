#include<stdio.h>
#include<math.h>

double decimal( double a ){
    double result;
    result = a - (int)a;
    return result;
}

int main(void){
    int b;
    double result;
    printf("b=");
    scanf("%d", &b);

    for(int i = 1; i < b; i++){
        result  = decimal((double)log(i));
        printf("log(%d )の小数部は%f\n", i, result);
    }
    return 0;
}