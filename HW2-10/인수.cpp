#include <stdio.h>
int main() {
	int i;
	int num;

	printf("���� �Է��Ͻÿ�: ");
	scanf("%d", &num);

	for (i = 2; i < num; i++)
	{
		if (num%i == 0)
			printf("%d ", i);
	}
	printf("\n\n���α׷� ����!!!!!\n");

}