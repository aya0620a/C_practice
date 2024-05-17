#include <stdio.h>

int main(void)
{
    for (int a = 1; a < 10; a++)
    {
        for (int b = 1; b < 10; b++)
        {
            int n = a * b;
            printf(" %2d ", n);
        }
        printf("\n");
    }
    return 0;
}