#include <stdio.h>
#include <stdlib.h>

#define  BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main(void){
	char buffer[BUFFER_SIZE];
  int x, y, z;

	printf("整数を3つ入力してください。\n");

	printf("1個目の整数：");
	get_line(buffer, BUFFER_SIZE);
  x = atoi(buffer);

	printf("2個目の整数：");
	get_line(buffer, BUFFER_SIZE);
  y = atoi(buffer);

	printf("3個目の整数：");
	get_line(buffer, BUFFER_SIZE);
  z = atoi(buffer);

	if (x == y == z) {
		printf("3つの値は同じです。\n");
	} else if (x == y || y == z ||  z == x) {
		printf("2つの値が同じです。\n");
	} else {
		printf("3つの値はすべて違います。\n");
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
