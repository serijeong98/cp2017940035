#include <stdio.h>
int main(){
	int input, i;
	int a = 0; 

	printf("���� �Է��Ͻÿ�: ");
	scanf("%d", &input);

	for (i = 1; i <= input; i++)
	{
		if (input % i == 0) 
			a++; 
	}
	if (a == 2)
		printf("�Ҽ��Դϴ�.\n"); 
	else                       
		printf("�Ҽ��� �ƴմϴ�.\n"); 
	printf("\n���α׷� ����!!!!!\n");
	return 0;
}