#include <stdio.h>
#define N 12

typedef struct npb npb_t;

struct npb {
    char name[15]; // 球団名
    double wp;     // 勝率 (winning percentage)
    int win;       // 勝利数
    int lose;      // 敗戦数
    int tie;       // 引き分け数
};

int main(void){
    npb_t team[N] = {
        { "Bay Stars", 0.0,  9,  7, 2 },
        { "Buffaloes", 0.0,  8,  9, 1 },
        { "Carp", 0.0,  5, 12, 1 },
        { "Dragons", 0.0,  6, 12, 0 },
        { "Fighters", 0.0,  7, 11, 0 },
        { "Giants", 0.0,  7, 10, 1 },
        { "Golden Eagles", 0.0,  9,  9, 0 },
        { "Hawks", 0.0, 10,  7, 1 },
        { "Lions", 0.0,  9,  8, 1 },
        { "Marines", 0.0, 10,  8, 0 },
        { "Swallows", 0.0, 12,  5, 1 },
        { "Tigers", 0.0, 12,  6, 0 },
    };

    int max = 0;

    for (int i = 0; i < N; i++) {
        team[i].wp = (double)team[i].win / (team[i].win + team[i].lose);
        if (team[i].wp > team[max].wp) {
            max = i;
        }
    }

    printf("首位の球団: %s\n", team[max].name);
    printf("勝率: %.3f\n", team[max].wp);
    printf("勝利数: %d\n", team[max].win);
    printf("敗戦数: %d\n", team[max].lose);
    printf("引き分け数: %d\n", team[max].tie);

    return 0;
}