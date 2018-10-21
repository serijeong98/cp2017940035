#include <stdio.h>
int main(){
	int input, i;
	int a = 0; 

	printf("수를 입력하시오: ");
	scanf("%d", &input);

	for (i = 1; i <= input; i++)
	{
		if (input % i == 0) 
			a++; 
	}
	if (a == 2)
		printf("소수입니다.\n"); 
	else                       
		printf("소수가 아닙니다.\n"); 
	printf("\n프로그램 종료!!!!!\n");
	return 0;
}