#include <stdio.h>
#define N 10

int main(void)
{
    int array[N];
    int m, n, tmp;

    printf("m=");
    scanf("%d", &m);
    printf("n=");
    scanf("%d", &n);

    for (int i = 0; i < N; i++)
    {
        array[i] = 2 * (i + 1);
    }

    tmp = array[m - 1];
    array[m - 1] = array[n - 1];
    array[n - 1] = tmp;

    for (int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}