# include<stdio.h>

int main(void)
{
    int x;

    printf("0から99までの整数を入力せよ\n");
    scanf("%d", &x);

    if(x == 20){
        printf("はたちです。");
    }

    if(x != 60){
        printf("還暦ではありません。");
    }

    if(x < 18){
        printf("未成年です。");
    }
    
    if(x >= 25){
        printf("被選挙権があります。");
    }
    return 0;
}