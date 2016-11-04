/*************************************
2016 POSTECH SMP Week5
Q.Selection Sort, Insertion Sort, Bubble Sort
각각의 방법으로 배열을 정렬하는 함수를 만드시오.
**************************************/

#include <stdio.h>

void swap(int *a, int *b);
void SelectionSort(int* a, int size);
void InsertionSort(int* a, int size);
void BubbleSort(int* a, int size);

int main(void) {
	int a[] = { 5, 17, 1, 86, 3 };
	int b[] = { 5, 17, 1, 86, 3 };
	int c[] = { 5, 17, 1, 86, 3 };
	int i;

	//sort 하기 이전 array 출력
	for (i = 0; i < 5; i++)
		printf("%d ", a[i]);

	//selection sort 진행
	SelectionSort(a, 5);

	//selection sort 결과 출력
	printf("\nSelection Sort Result\n");
	for (i = 0; i < 5; i++)
		printf("%d ", a[i]);

	printf("\n\n");

	//sort 하기 이전 array 출력
	for (i = 0; i < 5; i++)
		printf("%d ", b[i]);

	//Insertion sort 진행
	InsertionSort(b, 5);

	//Insertion sort 결과 출력
	printf("\nInsertion Sort Result\n");
	for (i = 0; i < 5; i++)
		printf("%d ", b[i]);

	printf("\n\n");

	//sort 하기 이전 array 출력
	for (i = 0; i < 5; i++)
		printf("%d ", c[i]);

	//Bubble sort 진행
	BubbleSort(c, 5);

	//Bubble sort 결과 출력
	printf("\nBubble Sort Result\n");
	for (i = 0; i < 5; i++)
		printf("%d ", c[i]);
	printf("\n");
	return 0;
}

//swap 함수
void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void SelectionSort(int* a, int size) {
	int i, j;
	int min;
	for (i = 0; i < (size - 1); i++) {//정렬 시작 위치
		min = i; //최소값 초기화
		for (j = i; j < size; j++)//탐색 시작 위치
			if (a[j] < a[min])
				min = j;
		swap(&a[i], &a[min]);//최소값 탐색 완료 및 교환
	}
}

void InsertionSort(int* a, int size) {
	int i, j;
	for (i = 1; i < size; i++) {//insert할 멤버 선정
		for (j = i - 1; j >= 0; j--) {//비교 대상 선정
			if (a[j + 1] >= a[j])//정렬이 제대로 되었는지 여부 확인
				break;
			swap(&a[j + 1], &a[j]);//정렬이 안되었다면 교환
		}
	}
}

void BubbleSort(int* a, int size) {
	int i, j;
	for (i = 0; i < size; i++) {//최소 값을 최종적으로 끌어올 위치 선정
		for (j = size - 1; j > i; j--) {//시작 위치 선정 및 뒤에서 앞으로 이동
			if (a[j] < a[j - 1])//앞의 값이 뒤의 값보다 작도록 교환
				swap(&a[j], &a[j - 1]);
		}
	}
}