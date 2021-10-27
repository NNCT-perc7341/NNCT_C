// 番
#include <stdio.h>
#include <stdlib.h>

#define  BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main(void){
  char buffer[BUFFER_SIZE];
  int dia, vol1, base, spe, total1, total2, tax;

  printf("\n口径mm[13,20,25,40,50,75,100,150] : ");
  get_line(buffer, BUFFER_SIZE);
  dia = atof(buffer);

  printf("使用水量 m3 : ");
  get_line(buffer, BUFFER_SIZE);
  vol1 = atof(buffer);

  if (dia == 13) {
    base = 1150;
  } else if (dia == 20) {
    base = 2070;
  } else if (dia == 25) {
    base = 3220;
  } else if (dia == 40) {
    base = 8280;
  } else if (dia == 50) {
    base = 12650;
  } else if (dia == 75) {
    base = 28750;
  } else if (dia == 100) {
    base = 51750;
  } else if (dia == 150) {
    base = 115000;
  } else {
    base = 0;
  }

  if (base == 0) {
    printf("口径を正しく入力してください。\n");
    return 0;
  }
  if (vol1 < 0) {
    printf("使用水量を正しく入力してください\n");
    return 0;
  }

  spe = 120 * vol1;
  if (vol1 > 200) spe = spe - 15 * (vol1 - 200);
  if (vol1 > 500) spe = spe - 10 * (vol1 - 500);
  if (vol1 > 5000) spe = spe - 5 * (vol1 - 5000);
  if (dia <= 25) {
    if (vol1 <= 10) spe = spe - 120 * vol1;
    if (vol1 > 10) spe = spe - 1200;
  }

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
