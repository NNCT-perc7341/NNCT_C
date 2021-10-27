#include <stdio.h>
#include <stdlib.h>		/* atoi */

#define BUFFER_SIZE 256

int main(void);
void get_line(char *buffer, int size);

int main(void)
{
	char buffer[BUFFER_SIZE];
	int x,y,z,k,j,A,B;

	printf("口径と１か月の使用量を入力してください。\n\n");

	printf("口径mm｛13,20,25,40,50,75,100,150}\n");
	get_line(buffer,BUFFER_SIZE);
	x=atoi(buffer);

	switch(x){
	case 13:
		 k=1150;
 		 break;
	case 20:
	 	k=2070;
		 break;
	case 25:
		 k=3220;
	 	break;
	case 40:
	 	k=8280;
	 	break;
	case 50:
	 	k=12650;
	 	break;
	case 75:
	 	k=28750;
	 	break;
	case 100:
		k=51750;
	 	break;
	case 150:
	 	k=115000;
	 	break;

	default:
		printf("Error\n");
		break;
	}

	printf("使用水量（m3)\n");
	get_line(buffer,BUFFER_SIZE);
	y=atoi(buffer);

  z=y;

  if(y<10){
    y = 10;  
  }

	if(y<=200){

		if(x==13){
		j=120*(y-10);
		}
		else if(x==20){
		j=120*(y-10);
		}
		else if(x==25){
		j=120*(y-10);
		}
		else if(x==40){
		j=120*y;
		}
		else if(x==50){
		j=120*y;
		}
		else if(x==75){
		j=120*y;
		}
		else if(x==100){
		j=120*y;
		}
		else{
		j=120*y;
		}
	}
	else if(y>=201 && y<=500){
		if(x==13){
		j=120*(200-10)+105*(y-200);
		}
		else if(x==20){
		j=120*(200-10)+105*(y-200);
		}
		else if(x==25){
		j=120*(200-10)+105*(y-200);
		}
		else if(x==40){
		j=120*200+105*(y-200);
		}
		else if(x==50){
		j=120*200+105*(y-200);
		}
		else if(x==75){
		j=120*200+105*(y-200);
		}
		else if(x==100){
		j=120*200+105*(y-200);
		}
		else{
		j=120*200+105*(y-200);
		}
	}
	else if(y>=501 && y<=5000){
		if(x==13){
		j=120*(200-10)+105*(500-200)+95*(y-500);
		}
		else if(x==20){
		j=120*(200-10)+105*(500-200)+95*(y-500);
		}
		else if(x==25){
		j=120*(200-10)+105*(500-200)+95*(y-500);
		}
		else if(x==40){
		j=120*200+105*(500-200)+95*(y-500);
		}
		else if(x==50){
		j=120*200+105*(500-200)+95*(y-500);
		}
		else if(x==75){
		j=120*200+105*(500-200)+95*(y-500);
		}
		else if(x==100){
		j=120*200+105*(500-200)+95*(y-500);
		}
		else{
		j=120*200+105*(500-200)+95*(y-500);
		}
	}
	else if(x>=5001){
		if(x==13){
		j=120*(200-10)+105*500+95*5000+90*(y-5000);
		}
		else if(x==20){
		j=120*(200-10)+105*500+95*5000+90*(y-5000);
		}
		else if(x==25){
		j=120*(200-10)+105*500+95*5000+90*(y-5000);
		}
		else if(x==40){
		j=120*200+105*500+95*5000+90*(y-5000);
		}
		else if(x==50){
		j=120*200+105*500+95*5000+90*(y-5000);
		}
		else if(x==75){
		j=120*200+105*500+95*5000+90*(y-5000);
		}
		else if(x==100){
		j=120*200+105*500+95*5000+90*(y-5000);
		}
		else{
		j=120*200+105*500+95*5000+90*(y-5000);
		}
	}


  printf("\n「水道料金の計算」\n\n");
	printf("口径：%14d(mm)\n",x);
	printf("使用水量：%10d(m3)\n-------------\n",z);
	printf("基本料金：%10d円\n",k);
	printf("従量料金：%10d円\n---------------\n",j);
	printf("合計料金%12d円\n",A=k+j);
	printf("消費税%14d円\n",B=(k+j)*0.1);
	printf("請求額%14d円\n",A+B);

	return 0;
	}


void get_line(char *buffer,int size)
{
	if(fgets(buffer, size, stdin) == NULL){
		buffer[0] = '\0';
		return;
	}
	for (int i = 0; i < size; i++){
		if(buffer[i] == '\n'){
			buffer[i] = '\0';
			return;
		}
	}
}
