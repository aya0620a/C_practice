#include <stdio.h>

int main(void){
    char x;
    printf("文字を入力せよ>>>");
    scanf("%c", &x);

    printf("%c\n", x);
    printf("%d\n", x);

    return 0;
}