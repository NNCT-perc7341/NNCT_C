#include <stdio.h>

int main(void);

int main(void){
  int x, n = 1;
  x = 4;

  printf("while文の前x=%d、n=%d\n", x, n);
  while (x <= 10) {
    x = x + n;
    n++;
    printf("実行後x=%d、n=%d\n", x, n);
  }
printf("最後x=%d、n=%d\n", x, n);
return 0;
}
