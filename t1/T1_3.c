# include <stdio.h>

int main(void)
{
    int a,b,c,d,e,q,r;

    a=48,b=7,c=14;

    printf("a=%d,",a);
    printf("b=%d,",b);
    printf("c=%d\n",c);

    d = 2*a + 3*b - c;
    printf("%d\n",d);

    q = a / b;
    r = a % b;
    printf("%d\n",q);
    printf("%d\n",r);

    e = (a + b) * (q + r);
    printf("%d\n", e);
}