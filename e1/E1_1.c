# include<stdio.h>

int main(void)
{   
    int d;
    int h;
    int m;
    int s;
    int t;
    h = 5;
    m = 25;
    s = 36;
    t = 3600 * h + 60 * m + s;
    printf("%d時間%d分%d秒は%d秒です\n",h,m,s,t);

    d = 5;
    h = 22;
    m = 54;
    s = 41;
    t = 5 * 3600 * 24  + 3600 * h + 60 * m + s;
    printf("%d日%d時間%d分%d秒は%d秒です\n",d,h,m,s,t);
    return 0;
}