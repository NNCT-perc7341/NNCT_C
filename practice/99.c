#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main(void){
  int n;
  char buf[BUFFER_SIZE];

  n = 0;

  printf("正の整数を入力:");
  get_line(buf, BUFFER_SIZE);
  n = atoi(buf);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("*");
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
