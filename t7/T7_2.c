#include<stdio.h>
#define N 10

int main(void){
    int freq[N];
    for(int i = 0; i < N; i++){
        freq[i] = 0;
    }

    for(int j = 0; j < 7; j++){
        int a;
        printf("０から９までの整数を入力せよ>>>");
        scanf("%d", &a);
        freq[a] += 1;
    }

    for(int s = 0; s < N; s++){
        printf("%d は%d 個\n", s, freq[s]);
    }

    return 0;
}