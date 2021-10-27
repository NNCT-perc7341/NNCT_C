#include <stdio.h>
#include <stdlib.h>

#define  BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main(void){
  char buffer[BUFFER_SIZE];
  int n, m;

  printf("整数nを1~9の範囲で入力してください：");
  get_line(buffer, BUFFER_SIZE);
  n = atoi(buffer);

  for (int i = 1; i <= n; i++) {
    for (int x = 1; x <= 2 * i - 1; x++) {
      printf("*");
    }
    printf("/\n");
  }
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
