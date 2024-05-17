#include <stdio.h>

int main(void)
{
    int s, t;
    printf("a=");
    scanf("%d", &s);

    printf("b=");
    scanf("%d", &t);

    double x = (s + t);
    
    printf("average = %f\n", x/2);

    return 0;
}