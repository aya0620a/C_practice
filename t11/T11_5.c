#include<stdio.h>

typedef int score_t;
score_t math;
score_t english;

int main(void){
scanf("%d %d", &math, &english);

if(math > 100){
    printf("数学の点数に誤りがあります。\n");
}
if(english > 100){
    printf("英語の点数に誤りがあります。\n");
}
else{
    printf("英語と数学の点数の合計は%d 点です。\n", math + english);
}

return 0;
}