#include <stdio.h>

int sos(int n) {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += (n + i) * (n + i);
    }
    return sum;
}

int main(void) {
    int t;
    printf("t= ");
    scanf("%d", &t);

    int i = 1;
    int si = sos(i);
    while (si < t) {
        i++;
        si = sos(i);
    }

    printf("t = %d の場合; i = %d\n", t, i);
    printf("s(%d ) = %d\n", i, si);

    return 0;
}