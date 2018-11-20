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

/*함수: swapElement()
입력: 배열, 두개의 인덱스
출력: 없음
부수효과: 배열의 두 인덱스 element가 바뀐다.*/
void swapElement(int* arr, int i, int j) {
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

/*함수: insertElement()
입력: 배열, 삽입하려는 요소의 인덱스
출력: 없음
부수효과: 배역의 ele요소까지 정렬됨.*/
void insertElement(int* arr, int ele) {
	while (ele > 0) {
		if (arr[ele - 1] > arr[ele])
			swapElement(arr, ele, ele - 1);
		else// 작으면 끝
			break;
		ele--;
	}
}

/*함수: insertionSort()
입력: 배열
출력: 없음
부수효과: index가 */
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