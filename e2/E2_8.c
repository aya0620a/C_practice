#include<math.h>
#include<stdio.h>

int main(void)
{   
    int t;
    double rad, sine, cosine;

    printf("三角関数\n");
    printf("  t   sine     cos\n");

    for(t = 0 ; t <= 90; t ++)
    {   
        rad = ( t * 3.1415926 ) / 180.0;
        double sine = sin(rad);
        double cosine = cos(rad);
        printf(" %3.1f  %6.4f   %6.4f\n", (double)t, sine, cosine);
    }

    return 0;
}

