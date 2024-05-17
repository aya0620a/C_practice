#include <stdio.h>
#define N 20

int main(void)
{
    int a[N];
    int m;
    printf("整数を入力せよ>>>");
    scanf("%d", &m);
    a[0] = m;

    for(int i = 1; i < N; i++){
        a[i] = 2 * a[i-1] + 1;
    }

    for(int j = 0; j < N; j++){
        printf("a_%d = %d\n", j, a[j]);
    }
    return 0;
}
