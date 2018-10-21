#include <stdio.h>
int main(){
	int i, j;
	int n;
	printf("삼각형의 줄 수를 입력해주세요: ");
	scanf("%d", &n);
	for (i = 0;i < n;i++){
		for (j = 0;j < 2*i+1; j++){
				printf("*");
		}
		printf("\n");
	}
	printf("\n프로그램 종료!!!!!\n");
	return 0;
}
/*

*
***
*****
*******

*/