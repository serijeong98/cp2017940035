#include <stdio.h>
int main() {
	int input;
	int a = 1;
	while (1) {
		if (a > 9)
			break;
		printf("������ �� ���ϴ� �ܸ� �Է��Ͻÿ�: ");
		scanf("%d", &input);

		while (a <= 9) {
			if (input >= 1 && input <= 9) {
				printf("%d*%d=%d\n", input, a, input*a);
				a++;
			}
			else {
				printf("�߸��� �Է��Դϴ�.\n");
				break;
			}
		}
	}

	printf("\n���α׷� ����!!!!!\n");
	return 0;
}