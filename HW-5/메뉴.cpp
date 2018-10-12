#include <stdio.h>
int main() {
	double fruit;//변수 선언
	
	printf("choose one of the following.\n");
	printf("apple\n");
	printf("orange\n");
	printf("banana\n");
	printf("peach\n");
	printf("enter your choice here : ");//입력 안내문
	scanf("%s", &fruit);

	printf("Your choice is \"%s\"", &fruit);

	return 0;
}