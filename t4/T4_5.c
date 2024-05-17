#include <stdio.h>
#include <math.h>

double area(double r)
{   
    double y;

    printf("%f\n", M_PI);
    y = r * r * M_PI;

    printf("%f = %f x %f x π\n", y, r, r);
    return y;
}

int main(void)
{
    double a, y;
    printf("実数を入力せよ>>>");
    scanf("%lf", &a);

    y = area(a);

    return 0;
}