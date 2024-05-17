#include<math.h>
#include<stdio.h>

int main(void)
{
    double a, b, c, D, x1, x2;

    printf("ax^2+bx+c=0のa b c を入力してください>>>");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a == 0.0){
        if(b == 0.0){
            printf("係数がおかしい。\n");
        }
        else{
            x1 = -c / b;
            printf("解は、%g です。\n", x1);
        }
    }

    else {
        D = b * b - 4 * a * c;
        if(D >= 0.0){
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);

            if(D == 0){
                printf("解は、重解となり%g です。\n", x1);
            }
            if(x1 * x2 > 0 && x1 > 0){
                printf("正の解は2個です。");
                printf("解は、%g と%g です。\n", x1, x2);
            }
            else if(x1 * x2 < 0){
                printf("正の解は1個です。");
                printf("解は、%g と%g です。\n", x1, x2);
            }
            else{
                printf("正の解は0個です。");
                printf("解は、%g と%g です。\n", x1, x2);
            }
        }
        else{
            printf("虚数解となるため、解はありません。\n");
        }
    }

    return 0;
}