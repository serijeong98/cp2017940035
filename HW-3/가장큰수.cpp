#include <stdio.h>
int main() {
	int a, b, c;
	
	printf("첫번째 정수를 입력하시오: ");
	scanf("%d", &a);
	printf("두번째 정수를 입력하시오: ");
	scanf("%d", &b);
	printf("세번째 정수를 입력하시오: ");
	scanf("%d", &c);
		
	if ((a >= b) && (a > c))
		printf("가장 큰 수는 %d입니다.\n", a);//a가 b,c보다 클 경우, (a=b면 a로 설정)
	else if ((b > a) && (b >= c))
		printf("가장 큰 수는 %d입니다.\n", b);//b가 a,c보다 클 경우, (b=c면 b로 설정)
	else if ((c >= a) && (c > b))
		printf("가장 큰 수는 %d입니다.\n", c);//c가 a,b보다 클 경우, (a=c면 c로 설정)
	else
		printf("가장 큰 수는 %d입니다.\n", a);//a,b,c가 모두 같을 경우
	printf("program end!!!");
	return 0;
}