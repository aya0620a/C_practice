#include <stdio.h>

int recurrence(int x, int n) {
    return 2 * x - n * n;
}

int main(void) {
    int x, i;
    printf("a_0 = ");
    scanf("%d", &x);
    
    printf("a_0 = %4d\n", x);
    
    for (i = 0; i < 9; i++) {
        int y = recurrence(x, i);
        printf("a_%d = %4d\n", i + 1, y);
        x = y;
    }
    
    return 0;
}
