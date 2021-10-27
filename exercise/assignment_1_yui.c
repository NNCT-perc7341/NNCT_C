// 15番  近藤 結
#include <stdio.h>
#include <stdlib.h>

#define  BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main(void)
{
  char buffer[BUFFER_SIZE];
  int dia, vol, base, spe, total1, total2, tax;

  printf("\n口径mm[13,20,25,40,50,75,100,150] : ");
  get_line(buffer, BUFFER_SIZE);
  dia = atof(buffer);

  printf("使用水量 m3 : ");
  get_line(buffer, BUFFER_SIZE);
  vol = atof(buffer);

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
    if (vol < 0) {
      printf("使用水量を正しく入力してください\n");
    }
    return 0;
  }

  if (vol < 0) {
    printf("使用水量を正しく入力してください\n");
    return 0;
  }

  if (vol <= 200) {
    if (dia <= 25) vol = vol - 10;
    spe = 120 * vol;
  } else if (vol > 200 && vol <= 500 && dia > 25) {
    spe = 24000 + 105 * (vol - 200);
  } else if (vol > 500 && vol <= 5000 && dia > 25) {
    spe = 24000 + 31500 + 95 * (vol - 500);
  } else if (vol > 200 && vol <= 500 && dia <= 25) {
    spe = 22800 + 105 * (vol - 200);
  } else if (vol > 500 && vol <= 5000 && dia <= 25) {
    spe = 22800 + 31500 + 95 * (vol - 500);
  } else if (dia <= 25){
    spe = 22800 + 31500 + 427500 + 90 * (vol - 5000);
  } else {
    spe = 24000 + 31500 + 427500 + 90 * (vol - 5000);
  }

  if (spe < 0) {
    spe = 0;
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
  printf("　請求額：%7d円\n", total2);

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
