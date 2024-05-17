#include<stdio.h>

int main(void){
    double sec[5] = {7.2, 6.7, 8.3, 6.9, 7.7};
    
    for(int j = 0; j < 4; j++){
        printf("sec[%d] = %.1f\n", j, sec[j]);
    }

    double max = 0.0;
    double min = 15.0;

    for(int t = 0; t < 4; t++){
        double max1, min1;
        max1 = sec[t];
        min1 = sec[t];
        if(max < max1){
            max = max1;
        }
        if(min > min1){
            min = min1;
        }
    }
    printf("max = %.1f, min = %.1f", max, min);
} 