#include <stdio.h>
int main() {
	int a, b, c, d;

	for (a = 0;a < 6;a++) {
		for (b = 0;b < 2 * (5 - a) + 1; b++)
			printf("*");
		for (c = 5 - a; c > 0;c--)
			printf("%d", c);
		for (d = 0;d <= 5 - a;d++)
			printf("%d", d);
		printf("\n");
	}
	c = 0;
	d = 0;
	for (a = 6;a < 11;a++) {
		for (b = 0;b < 2 * (a - 5) + 1; b++)
			printf("*");
		for (c = a - 5; c >= 0;c--)
			printf("%d", c);
		for (d = 1;d < a - 4;d++)
			printf("%d", d);





		printf("\n");
	}
	printf("\n프로그램 종료!!!!!\n");
	return 0;
}
