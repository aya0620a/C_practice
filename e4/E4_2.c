#include<stdio.h>

int polynomial( int x ){
    int y;
    y = 2 * x * x - 5 * x + 3;

    return y;
}

int main(void){
    int a, y;
    printf("整数を入力せよ>>>");
    scanf("%d", &a);

    for(int i = 1; i <= a; i++){
        printf("f(%d ) =  %3d\n", i, polynomial(i));
    }
}