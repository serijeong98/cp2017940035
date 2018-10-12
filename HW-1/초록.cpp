#include <stdio.h>

int main() {
	int a, b;
	float ff;
	printf("첫번째 정수를 입력하시오: ");
	scanf("%d", &a);
	printf("두번째 정수를 입력사시오: ");
	scanf("%d", &b);
	if (a > b)
		printf("더 큰수는 %d 입니다.\n",a);
	else
		printf("더 큰수는 %d 입니다.\n",b);

	printf("program end!!!");
		return 0;
}