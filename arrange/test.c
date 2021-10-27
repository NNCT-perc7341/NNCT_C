#include <stdio.h>
#include <stdlib.h>


#define BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main (void);

int main (void){
  char buffer[BUFFER_SIZE];
	int n;



  while(1){
    printf("検証したい数値を入力\n");
  	get_line(buffer, BUFFER_SIZE);
  	n = atoi(buffer);

    if(kbhit()){
      if(getch()==0x1b) break;
    }

    //検証したいコードを入力
      if (!(n > 5)){
        printf("true\n");
      }else{
        printf("false\n");
      }
    //ここまで
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
