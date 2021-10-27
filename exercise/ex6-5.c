#include <stdio.h>
#include <stdlib.h>

#define  BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main(void){
  char buffer[BUFFER_SIZE];
  int n, m;

  printf("1~nまでの和を求めます。正の整数を入力してください：");
  get_line(buffer, BUFFER_SIZE);
  n = atoi(buffer);
  m = 0;

  for (int i = 0; i <= n; i++) {
    m = m + i;
    printf("%d-%d\n", i, m);
  }

  printf("1~%dまでの和は%dです。\n", n, m);
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
