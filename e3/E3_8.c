#include <stdio.h>

int main(void)
{
   int a, b, c;
   int n;
   int i = 0;
   printf("正の整数を入力せよ>>>");
   scanf("%d", &n);

   for (a = 1; a < n - 1; a++)
   {
      for (b = 1; b <= n - 1; b++)
      {
         for (c = 1; c <= n; c++)
         {
            if (a * a + b * b == c * c && a < b)
            {
               // printf("(%d , %d, %d)\n", a, b, c);
               i++;
            }
         }
      }
   }
   printf("n = %d のとき%d 個", n, i);
   return 0;
}