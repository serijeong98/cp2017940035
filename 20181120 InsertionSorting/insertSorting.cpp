#include <stdio.h>

/* �Լ�: printArry()
�Է�: �迭
���: ����
�μ�ȿ��: ȭ�鿡 �迭�� ���� ���*/
void printArray(int* arr, int length) {
	for (int index = 0; index < length; index++) {
		printf("array[%d] = %d\n", index, arr[index]);
	}
}

/*�Լ�: swapElement()
�Է�: �迭, �ΰ��� �ε���
���: ����
�μ�ȿ��: �迭�� �� �ε��� element�� �ٲ��.*/
void swapElement(int* arr, int i, int j) {
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

/*�Լ�: insertElement()
�Է�: �迭, �����Ϸ��� ����� �ε���
���: ����
�μ�ȿ��: �迪�� ele��ұ��� ���ĵ�.*/
void insertElement(int* arr, int ele) {
	while (ele > 0) {
		if (arr[ele - 1] > arr[ele])
			swapElement(arr, ele, ele - 1);
		else// ������ ��
			break;
		ele--;
	}
}

/*�Լ�: insertionSort()
�Է�: �迭
���: ����
�μ�ȿ��: index�� */
void  insertionSort(int* arr, int length) {
	for (int i = 1; i < length; i++) {
		insertElement(arr, i);
	}
}

int  main() {
		int a[5] = { 37, 42, 45, 50, 40 };
		insertionSort(a, 5);
		printArray(a, 5);
		return 0;
}