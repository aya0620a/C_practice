#include <stdio.h>

int rise_num(int m)
{  
    int num;
    num = (m-1)/3;
    return num;
}

int salary(int a, int m)
{
    int salary = a;
    salary = a + 10 * rise_num(m);
    return salary;
}

int main(void)
{
    int y;
    printf("最初の時給>>>");
    scanf("%d", &y);

    for (int m = 1; m <= 20; m++){
        printf("%2d カ月目までの給料は%d です\n", m, salary(y, m));
    }
    return 0;
}