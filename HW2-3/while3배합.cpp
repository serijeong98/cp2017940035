#include <stdio.h>
int main() {
	int i = 1;
	int sum = 0;
	while (i <= 100) {
		if (i % 3 == 0)
			sum += i++;
		else
			i++;
	}
	printf("%d\n", sum);

	printf("\n프로그램 종료!!!!!\n");
	return 0;
}