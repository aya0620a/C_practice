
#include <stdio.h>

int main( void )
{
  int i;
  int a[4];
  a[0] = 100;
  a[1] = 101;
  a[2] = 102;
  a[3] = 103;

  // i のアドレス（ &i ）を書式 %p で表示する printf 文を書く
  printf("i のアドレス: %p, 値: %d\n", &i, i);
  // a[0]～a[3] のアドレス（ &a[0], &a[1], &a[2], &a[3] ）を書式 %p で表示する printf 文を書く
  printf("a[0] のアドレス: %p, 値: %d\n", &a[0], a[0]);
  printf("a[1] のアドレス: %p, 値: %d\n", &a[1], a[1]);
  printf("a[2] のアドレス: %p, 値: %d\n", &a[2], a[2]);
  printf("a[3] のアドレス: %p, 値: %d\n", &a[3], a[3]);
  // a, a+1, a+2, a+3 を書式 %p で表示する printf 文を書く
  printf("a のアドレス: %p, 値: %p\n", &a, a);
  printf("a+1 のアドレス: %p, 値: %p\n", &a[1], a+1);
  printf("a+2 のアドレス: %p, 値: %p\n", &a[2], a+2);
  printf("a+3 のアドレス: %p, 値: %p\n", &a[3], a+3);

  printf("\n");

  // i の値を書式 %d で表示する printf 文を書く
  printf("i の値: %d\n", i);
  // a[0]～a[3] の値（ a[0], a[1], a[2], a[3] ）を書式 %d で表示する printf 文を書く
  printf("a[0] の値: %d\n", a[0]);
  printf("a[1] の値: %d\n", a[1]);
  printf("a[2] の値: %d\n", a[2]);
  printf("a[3] の値: %d\n", a[3]);
  // *a, *(a+1), *(a+2), *(a+3) を書式 %d で表示する printf 文を書く
  printf("*a の値: %d\n", *a);
  printf("*(a+1) の値: %d\n", *(a+1));
  printf("*(a+2) の値: %d\n", *(a+2));
  printf("*(a+3) の値: %d\n", *(a+3));

  return 0;
}