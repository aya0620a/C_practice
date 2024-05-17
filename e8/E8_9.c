#include<stdio.h>
#include<string.h>
#define N 100

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

void str_reverse_copy( char dst[ ], char src[ ] ){
    int i;
    int len = (int)strlen( src );

    for (i = 0; i <= len; i++) {
        if (src[i] == '\0') {
            dst[i] = '\0';
            break;
        }
    }
    
    for (i = len - 1; i >= 0; i--) {
        dst[len - i - 1] = src[i];
    }
    
}

int main(void){
    char str1[N];
    char str2[N];

    get_line(str1, N);
    
    str_reverse_copy(str2, str1);

    printf("%s\n", str1);
    printf("↓\n");
    printf("%s\n", str2);

    return 0;
}