#include <stdio.h>
int main() {
	int input;
	int max = 0;
	while (1) {
		printf("������ �Է��Ͻʽÿ�: ");
		scanf("%d", &input);
		if (input == 0)
			break;
		else {
			if (max < input)
				max = input;

			else;
		}
	}
	printf("���� ū ���� %d�Դϴ�\n", max);
	printf("\n���α׷� ����!!!!!\n");
	return 0;
}