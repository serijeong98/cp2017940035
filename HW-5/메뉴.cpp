#include <stdio.h>
int main() {
	double fruit;//���� ����
	
	printf("choose one of the following.\n");
	printf("apple\n");
	printf("orange\n");
	printf("banana\n");
	printf("peach\n");
	printf("enter your choice here : ");//�Է� �ȳ���
	scanf("%s", &fruit);

	printf("Your choice is \"%s\"", &fruit);

	return 0;
}