#include <stdio.h>

int main() {
	int a, b;
	float ff;
	printf("ù��° ������ �Է��Ͻÿ�: ");
	scanf("%d", &a);
	printf("�ι�° ������ �Է»�ÿ�: ");
	scanf("%d", &b);
	if (a > b)
		printf("�� ū���� %d �Դϴ�.\n",a);
	else
		printf("�� ū���� %d �Դϴ�.\n",b);

	printf("program end!!!");
		return 0;
}