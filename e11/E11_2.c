#include<stdio.h>

struct s_complex{
    double re;  //複素数の実部
    double im;  //複素数の虚数部
};

typedef struct s_complex complex_t;

void complex_print( complex_t a ){
    printf("%.5lf + %.5lf i\n", a.re, a.im);
}

complex_t complex_add( complex_t a, complex_t b ){
    complex_t result;
    result.re = a.re + b.re;
    result.im = a.im + b.im;
    return result;
}

complex_t complex_mul( complex_t a, complex_t b ){
    complex_t result;
    result.re = a.re * b.re - a.im * b.im;
    result.im = a.re * b.im + a.im * b.re;
    return result;
}

int main(void){
    complex_t a, b;
    printf("(a + bi): ");
    scanf("%lf %lf", &a.re, &a.im);
    printf("(a + bi): ");
    scanf("%lf %lf", &b.re, &b.im);

    printf("a + b = ");
    complex_print(complex_add(a, b));
    printf("a * b = ");
    complex_print(complex_mul(a, b));

    return 0;
}