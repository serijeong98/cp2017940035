#include <stdio.h>
int main() {
	int input;
	int a = 1;
	printf("������ �� ���ϴ� �ܸ� �Է��Ͻÿ�: ");
	scanf("%d", &input);
	while (a <= 9) {
		printf("%d*%d=%d\n", input, a, input*a);
		a++;
	}

	printf("\n���α׷� ����!!!!!\n");
	return 0;
}