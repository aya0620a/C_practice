#include<stdio.h>
#include<math.h>

double func( double x ){
    int y;
    y = x * x - 4 * x + 2;
    return y;
}

double inverse( double x ){
    double y;
    y = 2 + (double)sqrt((x + 2));
    return y;
}
int main(void){
    int n;
    double a, b;
    printf("2以上の整数を入力せよ>>>");
    scanf("%d", &n);
    for(int i = 2; i <= n; i++){
        double a = i;
        a = func(a);
        b = inverse(a);
        printf("x=%d\n", i);
        printf("f(x)= %f\n", a);
        printf("f⁻¹(x)= %f\n", b);
    }
    return 0;
}