#include <stdio.h>
int main() {
	int input;
	int i;
	int j;
	int count = 0;
	int sum = 0;
	printf("수를 입력하시오: ");
	scanf("%d", &input);

	for (i = 1; i <= input; i++) {
		for (j = 1; j <= i; j++) {
			if (i % j == 0)
				count += 1;
		}
		if (count == 2)
			sum += i;

		count = 0;
	}
	printf("%d",sum);
	printf("\n프로그램 종료!!!!!\n");
	return 0;
}