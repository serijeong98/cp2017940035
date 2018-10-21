#include <stdio.h>
int main() {
	int i;
	int sum = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	printf("\n프로그램 종료!!!!!\n");
	return 0;
}