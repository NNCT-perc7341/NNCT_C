#include <stdio.h>

int main(void);

int main(void){
  int i, x = 2;
  i = 10;

  printf("while文の前x=%d、i=%d\n", x, i);
  while (i > 7) {
    x = x * i;
    i--;
    printf("実行後x=%d、i=%d\n", x, i);
  }
printf("最後x=%d、i=%d\n", x, i);
return 0;
}
