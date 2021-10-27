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
    case 'a': //case 'c':として考えて、文字列によって行いたい処理を書く
      printf("コーヒーです\n");
      break;

    case 'b':
      printf("ミルクティです\n");
      break;

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
