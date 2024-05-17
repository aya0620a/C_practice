#include<stdio.h>
#include<string.h>
#define N 50

void get_line(char buff[], int size)
{
    int i, c;

    for (i = 0; i < size - 1; i++)
    {
        c = getchar();
        if (c == EOF || c == '\n') break;
        buff[i] = c;
    }
    buff[i] = '\0';
}

int main(void){
    char str[N];
    int large = 0;
    int small = 0;
    int num = 0;
    int oth = 0;
    int i = 0;

    get_line(str, N);

    while(str[i] != 0){

        if(str[i] >= 65 && str[i] <= 90){
            large++;
        }

        else if(str[i] >= 97 && str[i] <= 122){
            small++;
        }

        else if(str[i] >= 48 && str[i] <= 57){
            num++;
        }

        else{
            oth++;
        }
        i++;
    }

    int len = (int)strlen( str );
    printf("文字数=%lu\n", strlen(str));
    printf("入力された文字列=%s\n", str);
    printf("長さ %d, 大文字 %d, 小文字 %d, 数字 %d, その他 %d \n", len, large, small, num, oth);
}