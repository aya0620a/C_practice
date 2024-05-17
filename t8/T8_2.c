#include<stdio.h>

int main(void){
    char x;
    printf("文字を入力せよ>>>");
    scanf("%c", &x);

    if(x >= 60 && x <= 90){
        int  diff = 'a' - 'A';
        x = x + diff;
        printf("%c", x);
    }

    else if(x >= 97 && x <= 122){
        int  diff = 'a' - 'A';
        x = x - diff;
        printf("%c", x);
    }

    else{
        printf("%c", x);
    }

    return 0;
}   
