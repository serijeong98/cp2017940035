#include <stdio.h>
int main() {
	//ctrl-K, ctrl-F: format, �ҽ��ڵ� ���ÿ����� ���ڰ� �����Ѵ�.
	//ctrl[-]: matching parentheses
	//ctrl-k, ctrl-c: ������ ������ comment out
	//ctrl-k, ctrl-u: undo comment out
	//=============�� ���� ��а� ����

	//1���� 10���� ȭ�鿡 ���
	//int count = 1;
	//while (count <= 10) {				//�������
	//	printf("count = %d\n", count);
	//	count = count + 1;
	//}									//������� �ݺ���

	//1���� 10���� ȭ�鿡 ���(���)
	//int count = 1;
	//while (count <= 10) 				
	//	printf("count = %d\n", count++);
										
	////1�������� 100���� 3�� ����� ȭ�鿡 ���
	//count = 1;
	//while (count <= 100) {
	//	if (count % 3 == 0) 
	//		printf("count = %d\n",count);
	//	count++;	
	//}

	////1�������� 100���� 3�� ����� �����ϰ� ȭ�鿡 ���
	//count = 1;
	//while (count <= 100) {
	//	if (count % 3 == 0);
	//	else printf("count = %d\n", count);
	//	count++;
	//}

	////Ű���忡�� ������ �Է¹޾� 3�� ��� ���θ� �˷��ִ� ���α׷�
	////���� �۾��� �ݺ������� �����ϰ� ����ڰ� 100�� �Է��ϸ� �����Ѵ�.
	//int input;
	//while (1) {
	//	printf("������ �Է��ϼ���: ");
	//	scanf("%d", &input);
	//	if (input == 100) 
	//		break;
	//	if (input >= 1000) {
	//		printf("�Է��� ������ 100���� Ů�ϴ�. �ٽ� �Է��� �ּ���\n");
	//		continue;
	//	}
	//	if (input % 3 == 0)
	//		printf("�Է��� ���� %d�� 3�� ����Դϴ�\n", input);
	//	else
	//		printf("�Է��� ���� %d�� 3�� ����� �ƴմϴ�\n", input);
	//};

	////1���� 100������ ������ ���� ���Ͻÿ�.
	//int sum = 0, i = 1;
	//while (i <= 100){
	//	//sum = sum + i;
	//	//i++;
	//	sum += i++;
	//}
	//printf("the sum is %d\n",sum);

	



	printf("\n���α׷� ����!!!!!\n");
	//=============�� �Ʒ��� ��а� ����
	return 0;
}