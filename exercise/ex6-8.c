#include <stdio.h>
#include <stdlib.h>

#define  BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main(void){
  char buffer[BUFFER_SIZE];
  int n, m;

  printf("  0 1 2 3 4 5 6 7\n");

  for (int i = 0; i <= 7; i++) {
    printf("%d ", i);
    for (int x = 1; x <= 8; x++) {
      if (i + x == 0 ||i + x == 2 ||i + x == 4 ||i + x == 6 ||i + x == 8 ||i + x == 10 ||i + x == 12 ||i + x == 14) printf("■ ");
      else printf("□ ");
    }
    printf("\n");
  }
  return 0;
}

void get_line(char *buffer, int size){
	if (fgets(buffer, size, stdin) == NULL) {
		buffer[0] = '\0';
		return;
	}

	for (int i = 0; i < size; i++) {
		if (buffer[i] == '\n') {
			buffer[i] = '\0';
			return;
		}
	}
}
