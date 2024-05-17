#include <stdio.h>
#include <string.h>

// 構造体宣言と構造体変数定義
struct roll
    {
        char name[32];    // 名前
        int birth;        // 生年月日
        int zip;          // 郵便番号
        char address[82]; // 住所
        char tel[20];     // 電話番号
    } ;

int main(void)
{
    struct roll my_data;
    struct roll*a;

    a = &my_data;  

    

    strcpy(a->name, "John");

    // メンバの表示
    printf("ID: %d\n", a->zip);
    printf("Name: %s\n", a->name);


    return 0;
}