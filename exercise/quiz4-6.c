#include <stdio.h>
#include <stdlib.h>

#define  BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main(void){
	char buffer[BUFFER_SIZE];
  int a, b, c, D;

	printf("二次方程式の係数a,b,cを整数で入力してください。\n");

	printf("係数 a：");
	get_line(buffer, BUFFER_SIZE);
  a = atoi(buffer);

	printf("係数 b：");
	get_line(buffer, BUFFER_SIZE);
  b = atoi(buffer);

	printf("係数 c：");
	get_line(buffer, BUFFER_SIZE);
  c = atoi(buffer);

	D = b * b - 4 * a * c;

	if (a == 0) {
		printf("二次方程式ではありません。\n");
	} else if (D > 0) {
		printf("異なる2つの実数解をもちます。\n");
	} else if (D == 0) {
		printf("重解をもちます。\n");
	} else if (D < 0) {
		printf("異なる2つの虚数解をもちます。\n");
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
