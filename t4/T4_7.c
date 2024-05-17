#include<stdio.h>

int powint(int x, int p){
    int y = 1;

    while(p-- > 0){
        y *= x;
    }

    return y;
}

int main(void){
    for(int i = 1; i <= 10; i++ ){
        printf("%d x %d x %d = %d\n", i, i, i, i*i*i);
    }
    return 0;
}