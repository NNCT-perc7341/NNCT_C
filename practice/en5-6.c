#include <stdio.h>

int main(void);
int fncMul(int n, int m);

int main(void){
	int n, m;

	printf("<<< nからmの積を求めます >>>\n");

	printf("整数nを入力：");
	scanf("%d", &n);						// 標準入力から整数を読み込む

	printf("整数mを入力：");
	scanf("%d", &m);						// 標準入力から整数を読み込む

	printf("答え：");
	if (n <= m) {
		printf("%d\n", fncMul(n ,m));					// 関数fncMulの呼び出し
	}
	else {		// nとmの大小を逆に入力した場合はnとmを入れ換えて計算
		printf("%d\n", fncMul(m, n));					// 関数fncMulの呼び出し
	}

	return 0;
}

int fncMul(int n, int m){ 					// 関数fncMulの定義
	int i, p = 1;

	for (i = n; i <= m; i++) {
    p = p * i;
	}

	return p;
}
