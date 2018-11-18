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

/*�Լ�: findMinIndex()
�Է�: �迭(�迭�̸�, �迭����)
���: �ּҰ��� �ε���*/
int findMinIndex(int* arr, int length) {
	int minIndex = 0;
	for (int count = 1; count < length; count++) {
		if (arr[minIndex] > arr[count])
			minIndex = count;
	};
	return minIndex;
};

/*�Լ�: swapElement()
�Է�: �迭, �ΰ��� �ε���
���: ����
�μ�ȿ��: �迭�� �� �ε��� element�� �ٲ��.

*/
void swapElement(int* arr, int i, int j) {
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
/*�Լ�: selectSort()
�Է�: �迭
���: ����
�μ�ȿ��: �迭�� ���ĵ�*/
void selectSort(int* arr, int length) {
	for (int pass=1; pass < length-1; pass++) {
			int result;
			result = findMinIndex(arr+pass, length-pass);
			swapElement(arr, result+pass, pass);	
	}
}
/*�Լ�: findMin()
�Է�: �迭(�迭�̸�, �迭����)
���: �迭 �ּҰ�*/
int findMin(int* arr, int length) {
	int min = arr[0];
	for (int count = 1; count < length; count++) {
		if (min > arr[count])
			min = arr[count];
	};
	return min;
}

int main() {
	int a[5] = { 30, 35, 27, 15, 40 };
	printf("minimum value of the array is %d\n", findMin(a, 5));
	printf("The index of the minimum value is %d\n", findMinIndex(a, 5));
	swapElement(a, 0, 3);
	selectSort(a, 5);
	printArray(a, 5);

	return 0;
}
