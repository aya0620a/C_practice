#include<stdio.h>

struct date{
    int y;
    int m;
    int d;
};

void print_day( struct date hiduke ){

  /* ここにプログラムを追加せよ */
  printf( "今日の日付は%d 年%d 月%d 日です。\n", hiduke.y , hiduke.m, hiduke.d); 
}

int main(void){
    struct date my_day;

    my_day.y = 2023;    
    my_day.m = 6;         
    my_day.d = 20;   
    
    print_day(my_day);

    return 0;
}