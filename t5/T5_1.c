#include<stdio.h>

int gcd(int, int);

int main(void){
    int a, b, result;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);

    result= gcd(a, b);
    printf("%d と%d の最大公約数は %d です\n", a, b, result);

    return 0;
}

int gcd(int x, int y){
    int z;

    while((z=x%y)!=0){
        x = y;
        y = z;
    }
    return y;
}