#include <stdio.h>
int main() {
	int a, b, c;
	
	printf("ù��° ������ �Է��Ͻÿ�: ");
	scanf("%d", &a);
	printf("�ι�° ������ �Է��Ͻÿ�: ");
	scanf("%d", &b);
	printf("����° ������ �Է��Ͻÿ�: ");
	scanf("%d", &c);
		
	if ((a >= b) && (a > c))
		printf("���� ū ���� %d�Դϴ�.\n", a);//a�� b,c���� Ŭ ���, (a=b�� a�� ����)
	else if ((b > a) && (b >= c))
		printf("���� ū ���� %d�Դϴ�.\n", b);//b�� a,c���� Ŭ ���, (b=c�� b�� ����)
	else if ((c >= a) && (c > b))
		printf("���� ū ���� %d�Դϴ�.\n", c);//c�� a,b���� Ŭ ���, (a=c�� c�� ����)
	else
		printf("���� ū ���� %d�Դϴ�.\n", a);//a,b,c�� ��� ���� ���
	printf("program end!!!");
	return 0;
}