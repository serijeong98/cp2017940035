#include <stdio.h>
int main() {
	int input;
	int a = 1;
	int sum = 0;
	while (a<=10) {
		printf("������ �Է��ϼ���: ");
		scanf("%d", &input);
		sum += input;
		input = 0;
		a++;
		
	}
	printf("�Է¹��� ������ ������ %d�Դϴ�.\n", sum);
	printf("\n���α׷� ����!!!!!\n");
	return 0;
}