#include <stdio.h>

int main(void);
int add1(int a);
int sum(int n);

int main(void){
  int x;

  printf("整数値：");
  scanf("%d", &x);

  printf("%dより1大きい整数は%dです。\n", x, add1(x));
  printf("1から%dまでの和は%dです\n", x, sum(x));

  return 0;
}

int add1(int a){
  int b;

  b = a + 1;
  return b;
}

int sum(int n){
  int i, m = 1;

  for (i = 2; i <= n; i++) m = m + i;
  return m;
}
