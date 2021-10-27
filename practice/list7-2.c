#include <stdio.h>

int main(void);

int main(void){
  int c;

  c = getchar();
  printf("  |\n  |\n┌-┴-┐\n");
    while (c != '.'){
      printf("| %c |\n", c);
      c = getchar();
    }
  printf("└---┘\n");
return 0;
}
