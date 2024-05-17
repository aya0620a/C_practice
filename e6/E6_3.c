#include<stdio.h>
#define N 7

int main(void){
    int a[N];
    int inv[N];

    for(int i = 0; i < N; i++){
        a[i] = i * i;
        printf("%d ", a[i]);
    }
    printf("\n");
    
    for(int i = N-1; i >= 0; i--){
        inv[i] = i * i;
        printf("%d ", inv[i]);
    }
    return 0;

}