#include <stdio.h>
#include <stdlib.h>

#define  BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main(void){
  char buffer[BUFFER_SIZE];
  int c;

  printf("あなたの好きな飲み物は？\n");
  printf("a. コーヒー\n");
  printf("b. ミルクティ\n");
  printf("c. どちらでもない\n");
  c = getchar();

  switch (c) {
    case 'A': //FALL THROUGH //何も書いてないと次のブロックのコードを実行する
    case 'a':         //よって、Aとaは、同じ処理が行われるようになっている。
      printf("コーヒーです\n");
      break;

    case 'B': //FALL THROUGH
    case 'b':
      printf("ミルクティです\n");
      break;

    case 'C': //FALL THROUGH
    case 'c':
      printf("どちらでもありません。\n");
      break;
  }

return 0;
}

/*oid get_line(char *buffer, int size){
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
}*/
