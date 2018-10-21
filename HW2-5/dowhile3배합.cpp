#include <stdio.h>
int main() {
	int i, sum;
	i = 1;
	sum = 0;
	do {
		if (i % 3 == 0) {
			sum += i;
		}
		i++;
	} while (i <= 100);
	printf("%d\n", sum);
	printf("\n프로그램 종료!!!!!\n");
	return 0;
}