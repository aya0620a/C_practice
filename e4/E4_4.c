#include<stdio.h>

double pyramid( int t, int h ){
    double y;
    y = (double)t * t * h / 3;
    return y;
}

int main(void){
    double y;
    for(int i = 5; i <= 10; i++){
        y =  pyramid(i, i+2);
        printf("長さ%2d ,高さ%2d ,体積%.3f\n", i, i+2, y);
    }
    return 0;
}