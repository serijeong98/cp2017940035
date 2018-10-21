#include <stdio.h>
int main() {
	int input;
	int sum = 0;
	while (1) {
		printf("정수를 입력하십시오: ");
		scanf("%d", &input);
		if (input == 0)
			break;
		else
			sum += input;
	}
	printf("%d", sum);
	printf("\n프로그램 종료!!!!!\n");
	return 0;
}