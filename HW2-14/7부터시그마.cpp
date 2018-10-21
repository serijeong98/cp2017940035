#include <stdio.h>
int main() {
	int input;
	int i;
	int output=0;
	while (1) {
		printf("7부터 더할 수를 입력하시오: ");
		scanf("%d", &input);
		if (input < 7) {
			printf("입력한 수가 7보다 작습니다.\n다시 입력하십시오\n\n");
			continue;
		}
		else {
			for (i = 7;i <= input;i++)
				output += i;
		}
		printf("총합은 %d입니다\n", output);
		break;
	}
	printf("\n프로그램 종료!!!!!\n");
	return 0;
}