#include <stdio.h>
int main() {
	int input;
	int a = 1;
	while (1) {
		if (a > 9)
			break;
		printf("구구단 중 원하는 단를 입력하시오: ");
		scanf("%d", &input);

		while (a <= 9) {
			if (input >= 1 && input <= 9) {
				printf("%d*%d=%d\n", input, a, input*a);
				a++;
			}
			else {
				printf("잘못된 입력입니다.\n");
				break;
			}
		}
	}

	printf("\n프로그램 종료!!!!!\n");
	return 0;
}