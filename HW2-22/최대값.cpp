//HW2-12�� �����ϹǷ� ���������� �ε��Ҽ��������θ� ��ȯ�Ͽ���.
#include <stdio.h>
int main() {
	float input;
	float max = 0;
	while (1) {
		printf("���� �Է��Ͻʽÿ�: ");
		scanf("%f", &input);
		if (input == 0)
			break;
		else {
			if (max < input)
				max = input;
			else;
		}
	}
	printf("���� ū ���� %f�Դϴ�\n", max);
	printf("\n���α׷� ����!!!!!\n");
	return 0;
}