#include <stdio.h>
#include <stdlib.h>

#define  BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main(void){
	char buffer[BUFFER_SIZE];
  int n;

	printf("月を入力してください：");
	get_line(buffer, BUFFER_SIZE);
  n = atoi(buffer);

	if (n >= 3 && n <= 5) {
		printf("%d月は春です。\n", n);
	} else if (n >= 6 && n <= 8) {
		printf("%d月は夏です。\n", n);
	} else if (n >= 9 && n <= 11) {
		printf("%d月は秋です。\n", n);
	} else if ((n >= 1 && n <= 2) || (n == 12)) {
		printf("%d月は冬です。\n", n);
	} else {
		printf("月は1~12の値で指定してください。\n");
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
