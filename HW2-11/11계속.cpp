#include <stdio.h>
int main() {
	int i;
	int num;
	while (1) {
		printf("수를 입력하시오: ");
		scanf("%d", &num);
		if (num == 0)
			break;
		else {
			for (i = 2; i < num; i++)
			{
				if (num%i == 0)
					printf("%d ", i);
			}
			printf("\n");
		}
	}
	printf("\n프로그램 종료!!!!!\n");
	return 0;
}