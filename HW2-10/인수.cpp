#include <stdio.h>
int main() {
	int i;
	int num;

	printf("수를 입력하시오: ");
	scanf("%d", &num);

	for (i = 2; i < num; i++)
	{
		if (num%i == 0)
			printf("%d ", i);
	}
	printf("\n\n프로그램 종료!!!!!\n");

}