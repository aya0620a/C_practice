#include<stdio.h>
#define N   10

int main(void){
    int a[N];
    int b[N];
    int m, n;

    printf("m=");
    scanf("%d", &m);
    printf("n=");
    scanf("%d", &n);
    printf("a  ");
    for(int i = 0; i < N; i++){
        a[i] = i * i;
        printf("%d ", a[i]);
    }
    printf("\nb  ");

    for(int j = m; j <= n; j++){
        b[j] = a[j];
        printf("%d ", b[j]);
        }

    return 0;

}