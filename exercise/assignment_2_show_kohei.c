//0番 閲覧用
#include <stdio.h>

#define N1 6
#define N2 5

int main(void);
int a = 6;
int ab = 5;

int main(void){
  int x[N1][N2] = {{3,2,4,5,6},{4,2,3,1,0},{5,0,6,3,3},{4,0,5,0,0},{2,1,3,3,0},{1,3,0,5,4}};
  int y[N2] = {145,121,72,34,25};
  int z[N1] = {0};
  int zz[N1] = {0};

  char *c[] = {"安藤","笠井","佐野","小林","杉本","田中"} ;

  for (int i = 0; i < a; i++) {
    for (int j = 0; j < ab; j++) {
      zz[j] = x[i][j] * y[j];
    }
    for (int k = 0; k < ab; k++) {
      z[i] += zz[k];
    }
  }

  printf("【1個あたりのカロリー】\n------------------\n品名\t カロリー\n------------------");
  printf("りんご\t%4d kcal/個\n",y[0]);
  printf("梨\t%4d kcal/個\n",y[1]);
  printf("バナナ\t%4d kcal/個\n",y[2]);
  printf("みかん\t%4d kcal/個\n",y[3]);
  printf("プルーン%4d kcal/個\n\n",y[4]);

  printf("【食べた量】\n------------------\n氏名\tりんご\t　梨\tバナナ\tみかん\tプルーン\n------------------\n");

  printf("安藤\t");
  for (int m = 0; m < ab; m++) {
    printf("%3d個\t", x[0][m]);
  }
  printf("\n");
  printf("笠井\t");
  for (int m = 0; m < ab; m++) {
    printf("%3d個\t", x[1][m]);
  }
  printf("\n");
  printf("佐野\t");
  for (int m = 0; m < ab; m++) {
    printf("%3d個\t", x[2][m]);
  }
  printf("\n");
  printf("小林\t");
  for (int m = 0; m < ab; m++) {
    printf("%3d個\t", x[3][m]);
  }
  printf("\n");
  printf("杉本\t");
  for (int m = 0; m < ab; m++) {
    printf("%3d個\t", x[4][m]);
  }
  printf("\n");
  printf("田中\t");
  for (int m = 0; m < ab; m++) {
    printf("%3d個\t", x[5][m]);
  }

  printf("\n");

  printf("【摂取カロリー】\n------------------\n氏名\tカロリー\n------------------\n");
  for (int n = 0; n < a; n++) {
    if (n == 0)printf("%s\t%5d kcal\n", c[n], z[n]);
    else if (n == 1)printf("%s\t%5d kcal\n", c[n], z[n]);
    else if (n == 2)printf("%s\t%5d kcal\n", c[n], z[n]);
    else if (n == 3)printf("%s\t%5d kcal\n", c[n], z[n]);
    else if (n == 4)printf("%s\t%5d kcal\n", c[n], z[n]);
    else if (n == 5)printf("%s\t%5d kcal\n", c[n], z[n]);
  }

  return 0;
}
