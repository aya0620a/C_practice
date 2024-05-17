#include<stdio.h>
#include<math.h>

double area(double r, int a){
double z;
z = r * r * a / 360 * M_PI;
printf("円周率 %f\n", M_PI);
return z;
}

int main(void){
    double x;
    int y;
    double z;
    printf("正の実数を入力せよ\n");
    printf("半径 → ");
    scanf("%lf", &x);
    printf("中心角→");
    scanf("%d", &y);
    printf("半径%f ,中心角%d の面積は%f \n", x, y, area(x, y));

    return 0;
}