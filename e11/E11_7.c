#include<stdio.h>

#define N 10

struct student{
int no;  //学生番号
int eng;  //英語の点数
int math; //数学の点数
int sci; //理科の点数
int total; //3教科の合計
};

typedef struct student student_t;

void comp_total( student_t data[N] )
{
    int i;

    for (i = 0; i < N; i++) {
        data[i].total = data[i].eng + data[i].math + data[i].sci;
    }

}

void print_student( student_t a )
{
    printf("学生番号: %d\n", a.no);
    printf("英語の点数: %d\n", a.eng);
    printf("数学の点数: %d\n", a.math);
    printf("理科の点数: %d\n", a.sci);
    printf("3教科の合計点: %d\n", a.total);
    printf("\n");
}

int main(void)
{
    int i;
    int hasClass = 0;
    int a, b;

  student_t person[ N ] = {
     { 1005, 86, 75, 92, 0 },
     { 1012, 65, 91, 80, 0 },
     { 1043, 45, 75, 58, 0 },
     { 1173, 97, 75, 82, 0 },
     { 1224, 77, 77, 77, 0 },
     { 1397, 27, 62, 35, 0 },
     { 1500, 58, 85, 62, 0 },
     { 1734, 80, 52, 46, 0 },
     { 1888, 98, 93, 96, 0 },
     { 1920, 60, 60, 60, 0 },
  };

comp_total(person);

// 各学生のデータを表示
for (i = 0; i < N; i++) {
    print_student(person[i]);
    }

int x1;
int n;
printf("四桁の学生番号を入力せよ");
scanf("%d", &x1);

for(int i = 0; i < N; i++){
if(person[i].no == x1){
    print_student(person[i]);
    n = 1;
    break;
}

else{
    printf("受験していません\n");
}
printf("\n");
}

int total1 = 0;
int average1 = 0;

printf("合格点を入力せよ");
scanf("%d %d", &a, &b);

int count = 0;

for(int i = 0; i < N; i++){
    comp_total(&person[i]);
    if((person[i].eng >= a && person[i].math >= a && person[i].sci >= a )|| person[i].total >= b){
        print_student(person[i]);
        printf("\n");
        total1 += person[i].total;
        count++;
    }
}
average1 = total1 / count;
printf("合格者平均:%d\n", average1);

int total2 = 0;
int average2 = 0;

for(int i = 0; i < N; i++){
    total2 += person[i].total;
    average2 = total2 / N;
}
printf("全員の平均点:%d\n", average2);

return 0;
}