#include <stdio.h>
#include <string.h>

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

int main(void)
{
    char message[256];
    int len;

    printf("メッセージを入力してください >>> ");
    get_line(message, 256 );

    len = (int)strlen( message );  // （注）標準関数 strlen は size_t 型のため，int 型にキャストする

    printf("メッセージの長さは %d 文字です。\n", len);

    return 0;
}