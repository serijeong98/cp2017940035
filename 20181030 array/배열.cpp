#include <stdio.h>
//함수 printArray
//입력: 배열
//출력: 없음
//부수효과: 화면에 모든 요소를 출력
void printArray(int arr[], int length) { //(배열이름[], 배열길이)
	int count = 0;
	while (count < length) {
		printf("a[%d] = %d\n", count, arr[count]);
		count++;
	}

}
int main() {
	int len = 4;//선언과 함께 초기화, 배열도 할 수 있다.
	//배열 선언: int a[4];
	//1. 배열의 이름: a
	//2. 요소의 자료형: int
	//3. 배열의 길이: 4 ** 선언시 a[숫자]의 숫자는 배열의 길이 **
	//int a[4];
	//a[0] = 20; ** 선언 밖의 a[숫자]는 요소 **
	//a[1] = 200;
	//a[2] = 2000;
	//a[3] = 20000;
	int a[4] = { 2, 20, 200, 2000};//배열 초기화 방법
	//int arr[] = { 3, 30, 300};//길이 3의 배열 생성
	printArray(a, len);//배열을 매개변수로 (배열의 이름 a, 배열의 길이 len)
	printf("%d\n", a[100]);
	//배열을 매개변수로 함수에 던지는 방법
	return 0;
}