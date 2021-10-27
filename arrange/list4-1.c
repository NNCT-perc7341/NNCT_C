#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main(void){
	char buffer[BUFFER_SIZE];
	int n;

  result :
	printf("降水確率を入力してください。\n");
	get_line(buffer, BUFFER_SIZE);
	n = atoi(buffer);

  if (n > 100) {
    printf("\n  >>降水確率は、0~100%% で入力してください。\n");
    goto result;
  } else {
    printf("\n\n  >>降水確率は %d %% です。\n", n);
  }

  if (n >= 50){
    printf("\n  >>傘を忘れずにね！\n");
  } else {
    printf("\n  >>傘はいりません。\n");
  }

	printf("  >>いってらっしゃい。\n");

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
