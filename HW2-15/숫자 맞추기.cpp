#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand((unsigned)time(NULL));
	int num = rand() % 100 + 1;
	int input;
	int count = 1;
	while (1) {
		if (count > 10) {
			printf("[[[[[GAME OVER]]]]]\n");
			printf("�����������̰͵� �� ���߳�?��\n");
			break;
		}
		else {
			printf("1���� 100 �߿� ���� ���� ���� ����?\n");
			scanf("%d", &input);
			if (input > num) {
				printf("�� ���� ����!\n\n");
				count++;
			}
			else if (input < num) {
				printf("�� ū ����!\n\n");
				count++;
			}
			else {
				printf("\n[[[[[[[YOU WIN]]]]]]] \n");
				break;
			}
		}
	}
	printf("\n���α׷� ����!!!!!\n");
	return 0;
}
