#include<math.h>
#include<stdio.h>

int main(void){
    int n, m;
    printf("nとmの値を入力せよ>>>");
    scanf("%d %d", &n, &m);
    int i = n;
    printf("         逆数      二乗     平方根     自然対数\n");
    printf("------------------------------------------------\n");

    while (i<=m){
        double value = i;
        double a = 1 / value;
        double b = value * value;
        double c = sqrt(value);
        double d = log(value);

        printf("%5.1f    %5.3f   %6.1f    %6.4f    %6.4f\n", value, a, b, c, d);
        i++;
    }

    return 0;
}