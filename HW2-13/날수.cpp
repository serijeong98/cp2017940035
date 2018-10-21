#include <stdio.h>
int main() {
	int month;
	int day;
	int i;
	int days;
	printf("달(월)을 입력하시오: ");
	scanf("%d", &month);
	printf("날(일)을 입력하시오: ");
	scanf("%d", &day);
	for (i = 1;i < month;i++) {
		switch (i) {
		case 2:
			days = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		default:
			days = 31;
			break;
		}
		day += days;
	}
	printf("총 day 수는 %d입니다\n", day);
	printf("\n프로그램 종료!!!!!\n");
	return 0;
}