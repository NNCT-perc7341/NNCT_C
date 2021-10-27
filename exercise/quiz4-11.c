#include <stdio.h>
#include <stdlib.h>

#define  BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main(void){
	char buffer[BUFFER_SIZE];
  double xa, ya, xb, yb, a, b;

	printf("座標を入力してください。\n");
	printf("1つ目のx座標：");
	get_line(buffer, BUFFER_SIZE);
  xa = atof(buffer);
	printf("1つ目のy座標：");
	get_line(buffer, BUFFER_SIZE);
  ya = atof(buffer);

	printf("2つ目のx座標：");
	get_line(buffer, BUFFER_SIZE);
  xb = atof(buffer);
	printf("2つ目のy座標：");
	get_line(buffer, BUFFER_SIZE);
  yb = atof(buffer);

	if (xa == xb){
		int xaa;
		xaa = xa;
		printf("この2点を結ぶ直線の式は、x=%dです。\n", xaa);
		return 0;
	} else if (ya == yb){
		int yaa;
		yaa = ya;
		printf("この2点を結ぶ直線の式は、y=%dです。\n", yaa);
		return 0;
	} else if (xa == xb && ya == yb){
		printf("同じ座標を入力することはできません。\n");
		return 0;
	}

	a = (yb - ya) / (xb - xa);
  b = ya - (a * xa);

	if (a == 1) {
		printf("この2点を結ぶ直線の式は、y=x+%fです。", b);
	} else if (a == -1) {
		printf("この2点を結ぶ直線の式は、y=-x+%fです。", b);
	} else if (a == 0){
		printf("傾きが0になる直線を求めることはできません。\n");
	} else {
		printf("この2点を結ぶ直線の式は、y=%fx+%fです。", a, b);
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
