#include <stdio.h>
int main() {
	int a;
	printf("정수를 입력하시오: ");
	scanf("%d", &a);

	if (a >= 60) 
	{
		if (a >= 80)
			printf("당신의 등급은 A입니다.\n");
		else
			printf("당신의 등급은 B입니다.\n");
	}
	else
	{
		if (a >= 40)
			printf("당신의 등급은 C입니다.\n");
		else if (a >= 20)
			printf("당신의 등급은 D입니다.\n");
		else
			printf("당신의 등급은 E입니다.\n");
	}
	printf("program end!!!");
return 0;
	}