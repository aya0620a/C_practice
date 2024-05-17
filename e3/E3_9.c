#include<stdio.h>

int main(void){
    int num = 2985;
    int i, point;
    int input_num;

    for(i = 0, point = 4; i < 5; i++, point--){
        printf("%d回目の数字をどうぞ ？ >>>", i + 1);
        scanf("%d", &input_num);

        if(input_num > num){
            printf("大きいです !\n");
        }
        else if(input_num < num){
            printf("小さいです !\n");
        }
        else{
            printf("大正解、%d 点です！\n", point+1);
            break;
        }
        if(point == 0){
            break;
        }
    }
        if(point == 0){
            printf("0点です\n");
        }

    return 0;
}