#include <stdio.h>

int main(void) {
	int a, b, c, d;

	for (a = 0;a < 3;a++) {
		for (b = 0;b < 2 * (2 - a) + 1; b++)
			printf("*");
		for (d = 0;d <= 7;d++)
			if (d == 2 * (2 - a) + 2)
				printf(" ");
		for (c = 0;c < 2 * a + 1; c++)
			printf("*");

		printf("\n");

	}
	printf("\n프로그램 종료!!!!!\n");
	return 0;
}
//***** *
//*** ***
//* *****