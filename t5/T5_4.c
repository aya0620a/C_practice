#include<stdio.h>
#include<math.h>

double sqrt_sum( double x, double y ){
    double sum;
    sum = sqrt(x * x + y * y);
    return sum;
}

double distance( double x1, double y1, double x2, double y2 ){
    double dis;
    dis = (sqrt_sum(x1-x2, y1-y2));
    return dis;
}

int main(void){
    double x, y;
    double dis1, dis2;
    printf("x=");
    scanf("%lf", &x);
    printf("y=");
    scanf("%lf", &y);

    dis1 = distance(x, y, 10.0, 0.0);
    dis2 = distance(x, y, 0.0, 10.0);

    if(dis1 < dis2){
        printf("点 (10, 0) により近い");
    }
    else if(dis1 > dis2){
        printf("点 (0, 10) により近い");
    }
    else{
        printf("等間隔");
    }

    return 0;
}