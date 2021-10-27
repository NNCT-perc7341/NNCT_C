#include <stdio.h>

int main(void);

int main(void){
  int x, n = 1, i = 1;
  x = 4;

  printf("while文の前x = %d、n = %d、i = %d\n", x, n, i);
  while (i <= x) {
    n = n + 2;
    i++;
    printf("実行後x = %d、n = %d、i = %d\n", x, n, i);
  }
printf("最後x = %d、n = %d、i = %d\n", x, n, i);
return 0;
}
