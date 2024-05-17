#include<stdio.h>

int price(int x){
    int payment;
    payment = 100 * x + 5;

    return payment;
}

int main(void){
    int num;
    printf("個数を入力せよ >>>");
    scanf("%d", &num);

    printf("%d 個購入したときの支払金額は%d 円です\n", num, price(num));

}