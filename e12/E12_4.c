#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_STUDENTS 30
#define STRING_SIZE 200

struct student_data{
    int id;     //学生番号
    int score;    //得点
};

typedef struct student_data student_t;

void bubbleSort(student_t students[], int num_students) {
    for (int i = 0; i < num_students - 1; i++) {
        for (int j = i+1; j < num_students; j++) {
            if (students[i].score < students[j].score) {
                student_t temp = students[i];
                students[i] = students[j ];
                students[j] = temp;
            }
        }
    }
}

int main(int argc, char *argv[]){
    int a, b;
    student_t s[MAX_STUDENTS];

    char filename[FILENAME_MAX];    //入力ファイル名
    char string[STRING_SIZE];

    FILE *fp;      //入力ストリームポインタ

    strcpy(filename, argv[1]); // filenameにコマンドラインから与えたファイル名を代入

    if ((fp = fopen("score.txt", "r")) == NULL) // 入力ファイルのオープン
    {
        printf("ファイルが見つかりません。 --- %s\n", filename);
        exit(EXIT_FAILURE);     //エラーによる強制終了
    }

    int num_students = 0;

    while (fgets(string, STRING_SIZE, fp)) {
        if (sscanf(string, "%d %d", &a, &b) == 2 && num_students < MAX_STUDENTS) {
            s[num_students].id = a;
            s[num_students].score = b;
            num_students++;
        }
    }

    fclose(fp);

    bubbleSort(s, num_students);

    printf("順位表:\n");
    for (int i = 0; i < num_students; i++) {
        printf("順位: %2d, 学生番号: %d, 得点: %d\n", i + 1, s[i].id, s[i].score);
    }

    return EXIT_SUCCESS;
}