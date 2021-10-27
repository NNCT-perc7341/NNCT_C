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

  switch (x) {
    case 1:
    case 2:
      printf("サイズはSです。\n");
      break;

    case 3:
    case 4:
      printf("サイズはMです\n");
      break;

    case 5:
    case 6:
      printf("サイズはLです\n");
      break;

    default:
      printf("正しい範囲で入力してください。\n");
      break;
  }
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
