#include <stdio.h>
int main(){
	int i, j;
	int n;
	printf("�ﰢ���� �� ���� �Է����ּ���: ");
	scanf("%d", &n);
	for (i = 0;i < n;i++){
		for (j = 0;j < 2*i+1; j++){
				printf("*");
		}
		printf("\n");
	}
	printf("\n���α׷� ����!!!!!\n");
	return 0;
}
/*

*
***
*****
*******

*/