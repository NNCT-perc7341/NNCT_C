#include <stdio.h>

int main(void);

int main(void){
  int i = 0;
  while (i < 10) {
    int j = 0;
    printf("%d: ", i);
    while (j < i) {
      putchar('*');
      j++;
    }
    printf("\n");
    i++;
  }
  return 0;
}
