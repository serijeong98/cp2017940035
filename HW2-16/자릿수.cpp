#include <stdio.h>
int main() {
	int input;
	int digit;
	printf("������ �Է��Ͻʽÿ�: ");
	scanf("%d", &input);
	if (input < 0)
		input = ~input;
	digit = 0;
	do {
		input = input / 10;
		digit++;
	} while (input > 0);
	printf("�Է��Ͻ� ������ �ڸ����� %d�� �Դϴ�\n", digit);
	printf("\n���α׷� ����!!!!!\n");
	return 0;
}