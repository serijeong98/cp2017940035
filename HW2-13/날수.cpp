#include <stdio.h>
int main() {
	int month;
	int day;
	int i;
	int days;
	printf("��(��)�� �Է��Ͻÿ�: ");
	scanf("%d", &month);
	printf("��(��)�� �Է��Ͻÿ�: ");
	scanf("%d", &day);
	for (i = 1;i < month;i++) {
		switch (i) {
		case 2:
			days = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		default:
			days = 31;
			break;
		}
		day += days;
	}
	printf("�� day ���� %d�Դϴ�\n", day);
	printf("\n���α׷� ����!!!!!\n");
	return 0;
}