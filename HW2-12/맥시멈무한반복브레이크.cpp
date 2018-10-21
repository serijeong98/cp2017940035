#include <stdio.h>
int main() {
	int input;
	int max = 0;
	while (1) {
		printf("정수를 입력하십시오: ");
		scanf("%d", &input);
		if (input == 0)
			break;
		else {
			if (max < input)
				max = input;

			else;
		}
	}
	printf("가장 큰 수는 %d입니다\n", max);
	printf("\n프로그램 종료!!!!!\n");
	return 0;
}