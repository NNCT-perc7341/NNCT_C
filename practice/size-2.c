#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main(void){
  char buf[BUFFER_SIZE];
  int n;

  printf("数値を1〜6の範囲で入力してください\n");
  get_line(buf, BUFFER_SIZE);
  n = atoi(buf);

  if (n == 1 || n == 2) printf("サイズはSです。\n");
  else if(n == 3 || n == 4) printf("サイズはMです。\n");
  else if(n == 5 || n == 6) printf("サイズはLです。\n");
  else printf("正しい範囲で入力してください。\n");

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
