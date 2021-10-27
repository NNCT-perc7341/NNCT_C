#include<stdio.h>

int main(void);

int main(void){
  printf("%f\n", 12.34);      //普通に表示
  printf("%6f\n", 12.34);     //少なくとも6桁で表示
  printf("%6.0f\n", 12.34);   //少なくとも6桁で、小数点部分は表示せず
  printf("%6.1f\n", 12.34);   //少なくとも6桁で、小数点第1位まで表示
  printf("%0.1f\n", 12.34);   //桁を気にせずに、小数点第1位まで
  return 0;
}
