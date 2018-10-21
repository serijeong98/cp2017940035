#include <stdio.h>
int main() {
	int input;
	int a = 1;
	int sum = 0;
	while (a<=10) {
		printf("정수를 입력하세요: ");
		scanf("%d", &input);
		sum += input;
		input = 0;
		a++;
		
	}
	printf("입력받은 정수의 총합은 %d입니다.\n", sum);
	printf("\n프로그램 종료!!!!!\n");
	return 0;
}