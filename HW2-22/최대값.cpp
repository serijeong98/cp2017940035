//HW2-12와 동일하므로 정수형에서 부동소수점형으로만 변환하였다.
#include <stdio.h>
int main() {
	float input;
	float max = 0;
	while (1) {
		printf("수를 입력하십시오: ");
		scanf("%f", &input);
		if (input == 0)
			break;
		else {
			if (max < input)
				max = input;
			else;
		}
	}
	printf("가장 큰 수는 %f입니다\n", max);
	printf("\n프로그램 종료!!!!!\n");
	return 0;
}