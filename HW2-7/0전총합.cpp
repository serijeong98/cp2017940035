#include <stdio.h>
int main() {
	int input;
	int sum = 0;
	while (1) {
		printf("������ �Է��Ͻʽÿ�: ");
		scanf("%d", &input);
		if (input == 0)
			break;
		else
			sum += input;
	}
	printf("%d", sum);
	printf("\n���α׷� ����!!!!!\n");
	return 0;
}