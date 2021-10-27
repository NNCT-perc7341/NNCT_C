#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main(void){
  char buf[BUFFER_SIZE];
  int s = 0; //合計値
  int i = 1; //カウント

  printf("合計する整数の個数：");
  get_line(buf, BUFFER_SIZE);
  n = atoi(buf);

  while (i <= n) {
    printf("No.%d：", i);
    get_line(buf, BUFFER_SIZE);
    s = s + atoi(buf);
    i++;
  }
  printf("合計値：%d\n", s);

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
