#include<stdio.h>

struct date{
    int y;
    int m;
    int d;
};

typedef struct date date_t;

void print_day2(date_t this_day){
    printf("今日は%d 年%d 月 %d 日です。\n", this_day.y, this_day.m, this_day.d);
}

int main(void){
    date_t my_day;

    my_day.y = 2023;
    my_day.m = 6;
    my_day.d = 20;

    print_day2(my_day);

    return 0;
}