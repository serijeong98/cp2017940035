#include <stdio.h>
int main() {
	int i;
	int j;
	int count = 0;

	for (i = 1; i <= 100; i++) {
		for (j = 1; j <= i; j++) {
			if (i % j == 0)
				count ++;
		}
			if (count == 2)
				printf("%d ", i);

			count = 0;
	}
		printf("\n");
		printf("\n프로그램 종료!!!!!\n");
		return 0;
}