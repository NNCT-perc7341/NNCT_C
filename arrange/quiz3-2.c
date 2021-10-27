#include <stdio.h>

int main(void);

int main(void)
{
	int x, y;

	x = 2;
	y = 3;

	printf("before x = %d, y = %d\n", x, y);

	int xa;
	xa = x;
	x = y;
	y = xa;

	printf("after x = %d, y = %d\n", x, y);

	return 0;
}
