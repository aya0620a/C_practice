#include<stdio.h>
#include<math.h>

double deg_to_rad( int x ){
    double radian;
    radian = x * M_PI / 180;
    return radian;
}

double func_sin( int x ){
    double result, radian;
    radian = deg_to_rad(x);
    result = sin(radian);
    return result;
}

int main(void)
{
    int a;
    printf("a=");
    scanf("%d", &a);

    for(int i = 1; i <= 10; i++)
    {
        printf("sin( %d [deg] )=%f\n",a * i, func_sin(a * i));
    }
    return 0;
}