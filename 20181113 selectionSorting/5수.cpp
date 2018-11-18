#include <stdio.h>
/* 함수: printArry()
입력: 배열
출력: 없음
부수효과: 화면에 배열의 값을 출력*/
void printArray(int* arr, int length) {
	for (int index = 0; index < length; index++) {
		printf("array[%d] = %d\n", index, arr[index]);
	}
}

/*함수: findMinIndex()
입력: 배열(배열이름, 배열길이)
출력: 최소값의 인덱스*/
int findMinIndex(int* arr, int length) {
	int minIndex = 0;
	for (int count = 1; count < length; count++) {
		if (arr[minIndex] > arr[count])
			minIndex = count;
	};
	return minIndex;
};

/*함수: swapElement()
입력: 배열, 두개의 인덱스
출력: 없음
부수효과: 배열의 두 인덱스 element가 바뀐다.

*/
void swapElement(int* arr, int i, int j) {
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
/*함수: selectSort()
입력: 배열
출력: 없음
부수효과: 배열이 정렬됨*/
void selectSort(int* arr, int length) {
	for (int pass=1; pass < length-1; pass++) {
			int result;
			result = findMinIndex(arr+pass, length-pass);
			swapElement(arr, result+pass, pass);	
	}
}
/*함수: findMin()
입력: 배열(배열이름, 배열길이)
출력: 배열 최소값*/
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
