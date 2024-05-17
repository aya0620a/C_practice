#include <stdio.h>

int main() {
    int d[10] = {54, 28, 72, 9, 39, 44, 69, 15, 97, 88};
    int i, j, temp;

    for (i = 0; i < 10; i++) {
        printf("%d ", d[i]);
    }
    printf("\n");

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (d[j] > d[j + 1]) {
                temp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = temp;

                printf("入れ替え後の配列 ");
                for (int k = 0; k < 10; k++) {
                    printf("%d ", d[k]);
                }
                printf("\n");
            }
        }
    }

    printf("ソート結果です\n ");
    for (i = 0; i < 10; i++) {
        printf("%d ", d[i]);
    }
    printf("\n");

    return 0;
}