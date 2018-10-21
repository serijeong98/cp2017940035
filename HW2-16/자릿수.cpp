#include <stdio.h>
int main() {
	int input;
	int digit;
	printf("정수를 입력하십시오: ");
	scanf("%d", &input);
	if (input < 0)
		input = ~input;
	digit = 0;
	do {
		input = input / 10;
		digit++;
	} while (input > 0);
	printf("입력하신 정수의 자릿수는 %d개 입니다\n", digit);
	printf("\n프로그램 종료!!!!!\n");
	return 0;
}