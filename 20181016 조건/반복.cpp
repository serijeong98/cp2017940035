#include <stdio.h>
int main() {
	//ctrl-K, ctrl-F: format, 소스코드 선택영역을 예쁘게 포맷한다.
	//ctrl[-]: matching parentheses
	//ctrl-k, ctrl-c: 선택한 영역을 comment out
	//ctrl-k, ctrl-u: undo comment out
	//=============이 위는 당분간 무시

	//1부터 10까지 화면에 출력
	//int count = 1;
	//while (count <= 10) {				//여기부터
	//	printf("count = %d\n", count);
	//	count = count + 1;
	//}									//여기까지 반복문

	//1부터 10까지 화면에 출력(요약)
	//int count = 1;
	//while (count <= 10) 				
	//	printf("count = %d\n", count++);
										
	////1에서부터 100까지 3의 배수만 화면에 출력
	//count = 1;
	//while (count <= 100) {
	//	if (count % 3 == 0) 
	//		printf("count = %d\n",count);
	//	count++;	
	//}

	////1에서부터 100까지 3의 배수만 제외하고 화면에 출력
	//count = 1;
	//while (count <= 100) {
	//	if (count % 3 == 0);
	//	else printf("count = %d\n", count);
	//	count++;
	//}

	////키보드에서 정수를 입력받아 3의 배수 여부를 알려주는 프로그램
	////위의 작업을 반복적으로 수행하고 사용자가 100을 입력하면 종료한다.
	//int input;
	//while (1) {
	//	printf("정수를 입력하세요: ");
	//	scanf("%d", &input);
	//	if (input == 100) 
	//		break;
	//	if (input >= 1000) {
	//		printf("입력한 정수가 100보다 큽니다. 다시 입력해 주세요\n");
	//		continue;
	//	}
	//	if (input % 3 == 0)
	//		printf("입력한 정수 %d는 3의 배수입니다\n", input);
	//	else
	//		printf("입력한 정수 %d는 3의 배수가 아닙니다\n", input);
	//};

	////1에서 100까지의 정수의 합을 구하시오.
	//int sum = 0, i = 1;
	//while (i <= 100){
	//	//sum = sum + i;
	//	//i++;
	//	sum += i++;
	//}
	//printf("the sum is %d\n",sum);

	



	printf("\n프로그램 종료!!!!!\n");
	//=============이 아래는 당분간 무시
	return 0;
}