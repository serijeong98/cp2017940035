#include <stdio.h>
int main() {
	int input;
	while (1) {
		printf("자연수를 입력하십시오: ");
		scanf("%d", &input);
		if (input <= 0)
			printf("자연수가 아닙니다.\n다시입력하십시오\n");
		else
			break;
	}
	printf("%d", 2 * input);
	printf("\n프로그램 종료!!!!!\n");
	return 0;
}