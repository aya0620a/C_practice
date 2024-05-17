#include<stdio.h>

int main(void){
    int max = 5000;
    int i = 0;
    int s = 390;
    int total;
    printf("チャージ金額;5000円\n");

    while(total<max)
    {   
        total = total + s;
        i++;
        if((max - total) >=0){
        printf("%d 日目%d 円\n", i, max - total);
        }
        else{
        }
    }
    return 0;
    
}