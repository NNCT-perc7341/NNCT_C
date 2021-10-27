#include<stdio.h>

int main(void);

int main(void) {
  int x, y;//"x" と "y" の変数を定義

  /*
  int x
  int y
  という書き方でも可
  */


  x = 15;//"x"に代入
  y = 32;//"y"に代入

  printf("%d\n", (x + y) / 2);
  return 0;
}
