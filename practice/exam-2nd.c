#include <stdio.h>

int main(void);

int main(void){
  printf(" |");
  for (int x = 1; x <= 9; x++){
    printf("%3d", x);
  }
  printf("\n");

  printf("-+");
  for (int x = 1; x <= 9; x++){
    printf("---");
  }
  printf("\n");

  for (int y = 1; y <= 9; y++){
    printf("%d|", y);
    for (int x = 1; x <= 9; x++){
      printf("%3d", x * y);
    }
    printf("\n");
  }

  return 0;
}
