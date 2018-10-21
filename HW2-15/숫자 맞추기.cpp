#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand((unsigned)time(NULL));
	int num = rand() % 100 + 1;
	int input;
	int count = 1;
	while (1) {
		if (count > 10) {
			printf("[[[[[GAME OVER]]]]]\n");
			printf("ㅋㅋㅋㅋㅋ이것도 못 맞추냐?ㅋ\n");
			break;
		}
		else {
			printf("1부터 100 중에 내가 가진 수는 뭘까?\n");
			scanf("%d", &input);
			if (input > num) {
				printf("더 작은 수야!\n\n");
				count++;
			}
			else if (input < num) {
				printf("더 큰 수야!\n\n");
				count++;
			}
			else {
				printf("\n[[[[[[[YOU WIN]]]]]]] \n");
				break;
			}
		}
	}
	printf("\n프로그램 종료!!!!!\n");
	return 0;
}
