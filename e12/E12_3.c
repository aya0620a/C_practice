#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_SIZE 200

int main(void)
{
 int val;
 int sum = 0;
 int cnt = 0;
 FILE *fpin, *fpout;
 int max = 0;
 int min = 100;
 char string[STRING_SIZE];
 
 if ((fpin = fopen("indata.txt", "r")) == NULL)
 {
  printf("ファイルが見つかりません。 --- indata.txt\n");
  exit(EXIT_FAILURE);
 }
 
 if ((fpout = fopen("outdata.txt", "a")) == NULL)
 {
  printf("ファイルが見つかりません。 --- outdata.txt\n");
  fclose(fpin);
  exit(EXIT_FAILURE);
 }
 
 
 while (fgets(string,STRING_SIZE, fpin) != NULL)
 {
  if (sscanf(string, "%d", &val) == 0)
  {
   printf("データエラー(%d行目):%s\n", cnt+1, string);
   continue;
  }
  
  fprintf(fpout, "入力データ>>> %d\n", val);
  sum += val;
  cnt++;
  if (val >= max)
  {
   max = val;
  }
  
  if (val <= min)
  {
   min = val;
  }
 }
 
 if (cnt > 0);
 {
  printf("平均値=%g 最大値=%d 最小値=%d\n",(double)sum / cnt, max, min);
 }
 
 
 fprintf(fpout, "平均値>>> %g\n最大値>>> %d\n最小値>>> %d\n",(double)sum / cnt, max, min);
 
 fclose(fpin);
 fclose(fpout);
 
 return EXIT_SUCCESS;
}