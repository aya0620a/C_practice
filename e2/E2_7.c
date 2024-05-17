#include<stdio.h>

int main(void)
{
    char x;

    for(x =65; x <= 90 + 32; x++){
        if(x <= 90 || 97 <= x){
        printf("%c ", x);
        }
    }
   
    return 0;
}