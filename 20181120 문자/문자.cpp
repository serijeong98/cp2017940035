#include <stdio.h>
#include <string.h>
/* �Լ�: printArry()
�Է�: �迭
���: ����
�μ�ȿ��: ȭ�鿡 �迭�� ���� ���*/
void printArray(char* arr, int length) {
	for (int index = 0; index < length; index++) {
		printf("array[%d] = %c\n", index, arr[index]);
	}
}

int main() {
	char c;//character(����)�� -  1����Ʈ:-128~127���� ǥ���Ѵ�.
	c = 'A'; //==> c = 65;(�ƽ�Ű�ڵ尪�� c�� �����)
	printf("c=%d\n", c);//%d: decimal�� ǥ���϶�
	printf("c=%c\n", c);//%c: charcter�� ǥ���϶�

	char a[] = { 'h', 'e', 'l', 'l', 'o' };
	printArray(a, 5);


	//���ڿ�(STRING)
	char b[] = "hello";//==> char b[] = { 'h', 'e', 'l', 'l', 'o', \0 };
	printf("%s \n", b);
	//���ݱ��� ȭ�鿡 hello world�� ǥ���ϱ� ���� ���� ���� ���ڿ��� ����Ͽ���.

	printf("the length of the string is %d \n", strlen(b));

	char str1[50] = "hello";
	const char* str2 = " world";
	strcat(str1, str2);
	printf("%s \n", str1);
	strcpy(str1, str2);
	printf("%s \n", str1);



	return 0;
}