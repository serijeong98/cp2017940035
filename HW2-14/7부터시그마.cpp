#include <stdio.h>
int main() {
	int input;
	int i;
	int output=0;
	while (1) {
		printf("7���� ���� ���� �Է��Ͻÿ�: ");
		scanf("%d", &input);
		if (input < 7) {
			printf("�Է��� ���� 7���� �۽��ϴ�.\n�ٽ� �Է��Ͻʽÿ�\n\n");
			continue;
		}
		else {
			for (i = 7;i <= input;i++)
				output += i;
		}
		printf("������ %d�Դϴ�\n", output);
		break;
	}
	printf("\n���α׷� ����!!!!!\n");
	return 0;
}