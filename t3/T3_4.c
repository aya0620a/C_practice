#include<stdio.h>

int main(void){
    int c = getchar();

    while(c != EOF){
        putchar(c);
        c = getchar();
            if((c >= 65 && c <= 90 ) || (c >=97 && c <=122)){
            }
            else{
            c = EOF;
             }
    }

    return 0;
}