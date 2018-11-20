#include <stdio.h>
#include <string.h>
/* 함수: printArry()
입력: 배열
출력: 없음
부수효과: 화면에 배열의 값을 출력*/
void printArray(char* arr, int length) {
	for (int index = 0; index < length; index++) {
		printf("array[%d] = %c\n", index, arr[index]);
	}
}

int main() {
	char c;//character(문자)형 -  1바이트:-128~127까지 표현한다.
	c = 'A'; //==> c = 65;(아스키코드값이 c에 저장됨)
	printf("c=%d\n", c);//%d: decimal로 표시하라
	printf("c=%c\n", c);//%c: charcter로 표시하라

	char a[] = { 'h', 'e', 'l', 'l', 'o' };
	printArray(a, 5);


	//문자열(STRING)
	char b[] = "hello";//==> char b[] = { 'h', 'e', 'l', 'l', 'o', \0 };
	printf("%s \n", b);
	//지금까지 화면에 hello world를 표시하기 위해 위와 같은 문자열을 사용하였다.

	printf("the length of the string is %d \n", strlen(b));

	char str1[50] = "hello";
	const char* str2 = " world";
	strcat(str1, str2);
	printf("%s \n", str1);
	strcpy(str1, str2);
	printf("%s \n", str1);



	return 0;
}