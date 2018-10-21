#include <stdio.h>
int main() {
	int input;
	int a = 1;
	printf("구구단 중 원하는 단를 입력하시오: ");
	scanf("%d", &input);
	while (a <= 9) {
		printf("%d*%d=%d\n", input, a, input*a);
		a++;
	}

	printf("\n프로그램 종료!!!!!\n");
	return 0;
}