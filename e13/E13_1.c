#include <stdio.h>

int main(void) {
    int n;
    printf("n =  ");
    scanf("%d", &n);
    
    int balance = 0;
    for (int i = 1; i <= n ; i++) {
		// 毎年4月1日に入金
        balance += 55555;

        // 毎年3月15日に利息を加算
        int interest = (int)(balance * 0.005);
        balance += interest;
    
    }
    printf("%d年後の3月31日の口座の預金残高 = %d\n", n, balance);
	
    return 0;
}