#include <stdio.h>
int main() {
	int input;
	while (1) {
		printf("�ڿ����� �Է��Ͻʽÿ�: ");
		scanf("%d", &input);
		if (input <= 0)
			printf("�ڿ����� �ƴմϴ�.\n�ٽ��Է��Ͻʽÿ�\n");
		else
			break;
	}
	printf("%d", 2 * input);
	printf("\n���α׷� ����!!!!!\n");
	return 0;
}