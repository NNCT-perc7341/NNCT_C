// 36番  星野 幸輝
#include <stdio.h>
#include <stdlib.h>

#define  BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);
int simple(int num1);
int base1(int num1);
int vol(int num1, int num2);

int main(void){
  char buffer[BUFFER_SIZE];
  int dia, dia1, vol1, base, spe, total1, total2, tax;

  printf("\n口径mm[13,20,25,40,50,75,100,150] : ");
  get_line(buffer, BUFFER_SIZE);
  dia = atof(buffer);
  dia1 = simple(dia);
  if (dia1 == 0) {
    printf("口径を正しく入力してください。\n");
    return 0;
  }

  printf("使用水量 m3 : ");
  get_line(buffer, BUFFER_SIZE);
  vol1 = atof(buffer);
  if (vol1 < 0) {
    printf("使用水量を正しく入力してください\n");
    return 0;
  }

  base = base1(dia1);
  spe = vol(vol1, dia1);
  total1 = base + spe;
  tax = (base + spe) * 0.1;
  total2 = total1 + tax;

  printf("-------------------\n");
  printf("基本料金：%7d円\n", base);
  printf("従量料金：%7d円\n", spe);
  printf("-------------------\n");
  printf("合計料金：%7d円\n", total1);
  printf("　消費税：%7d円\n", tax);
  printf("　請求額：%7d円\n\n", total2);

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

int simple(int num1){
  int num;
  if (num1 == 13) num = 1;
  else if (num1 == 20) num = 2;
  else if (num1 == 25) num = 3;
  else if (num1 == 40) num = 4;
  else if (num1 == 50) num = 5;
  else if (num1 == 75) num = 6;
  else if (num1 == 100) num = 7;
  else if (num1 == 150) num = 8;
  else num = 0;

  return num;
}

int base1(int num1){
  int num;
  if (num1 == 1) num = 1150;
  else if (num1 == 2) num = 2070;
  else if (num1 == 3) num = 3220;
  else if (num1 == 4) num = 8280;
  else if (num1 == 5) num = 12650;
  else if (num1 == 6) num = 28750;
  else if (num1 == 7) num = 51750;
  else if (num1 == 8) num = 115000;

  return num;
}

int vol(int num1, int num2){
  int num;
  num = 120 * num1;
  if (num1 > 200) num = num - 15 * (num1 - 200);
  if (num1 > 500) num = num - 10 * (num1 - 500);
  if (num1 > 5000) num = num - 5 * (num1 - 5000);
  if (num2 <= 3) {
    if (num1 <= 10) num = num - 120 * num1;
    if (num1 > 10) num = num - 1200;
  }

  return num;
}
