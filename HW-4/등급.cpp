#include <stdio.h>
int main() {
	int a;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &a);

	if (a >= 60) 
	{
		if (a >= 80)
			printf("����� ����� A�Դϴ�.\n");
		else
			printf("����� ����� B�Դϴ�.\n");
	}
	else
	{
		if (a >= 40)
			printf("����� ����� C�Դϴ�.\n");
		else if (a >= 20)
			printf("����� ����� D�Դϴ�.\n");
		else
			printf("����� ����� E�Դϴ�.\n");
	}
	printf("program end!!!");
return 0;
	}