#include <stdio.h>
int main() {
	int i;
	int num;
	while (1) {
		printf("���� �Է��Ͻÿ�: ");
		scanf("%d", &num);
		if (num == 0)
			break;
		else {
			for (i = 2; i < num; i++)
			{
				if (num%i == 0)
					printf("%d ", i);
			}
			printf("\n");
		}
	}
	printf("\n���α׷� ����!!!!!\n");
	return 0;
}