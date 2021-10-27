#include <stdio.h>
#include <stdlib.h>

#define  BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);
double round(double num1);

int main(void){
	char buffer[BUFFER_SIZE];
  double x, y;

	printf("値を入力してください：");
	get_line(buffer, BUFFER_SIZE);
  x = atof(buffer);
	y = round(x);
	printf("四捨五入した結果は%0.1fです。\n", y);
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

double round(double num1){ //round(x)で実行
	double num;
	if (num1 < 0) {
		num = 0 - ((int)(num1 * 10.0 - 0.5) / 10.0);
		num = num * -1;
		return num;
	} else {
		num = (int)(num1 * 10.0 + 0.5) / 10.0;
		return num;
	}
}
