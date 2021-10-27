#include <stdio.h>
#include <stdlib.h>

#define  BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main(void){
	char buffer[BUFFER_SIZE];
  int a, b, x, y;

	printf("2つの値を入力してください。\n");

	printf("1つめ：");
	get_line(buffer, BUFFER_SIZE);
  a = atoi(buffer);

	printf("2つめ：");
	get_line(buffer, BUFFER_SIZE);
  b = atoi(buffer);

	x = a - b;

	if (x < 0) {
		y = 0 - x;
		printf("差は%dです。\n", y);
	} else {
		printf("差は%dです。\n", x);
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
