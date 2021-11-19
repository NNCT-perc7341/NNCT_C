#include <stdio.h>

int main(void);

int main(void){
  int i = 0, j = 0;
  while (i < 10) {
    printf("%d: ", i);
    while (i < j) {
      putchar('*')
      j++;
    }
    i++;
  }
  return 0;
}
