#include <stdio.h>
#include <stdlib.h>

#define  BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main(void){
  char buffer[BUFFER_SIZE];
  int n;

  printf("あなたの好きな飲み物は？\n");
  printf("1. コーヒー\n");
  printf("2. ミルクティ\n");
  printf("3. どちらでもない\n");
  get_line(buffer, BUFFER_SIZE);
  n = atoi(buffer);

  switch (n) {
    case 1: //case n:として考えて、nの値によって行いたい処理を書く
      printf("コーヒーです\n");
      break; //switch分を抜ける

    case 2:
      printf("ミルクティです\n");
      break;

    case 3:
      printf("どちらでもありません。\n");
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
