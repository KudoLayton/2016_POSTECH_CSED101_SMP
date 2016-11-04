/*************************************
2016 POSTECH SMP Week5
Q.Selection Sort, Insertion Sort, Bubble Sort
������ ������� �迭�� �����ϴ� �Լ��� ����ÿ�.
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

	//sort �ϱ� ���� array ���
	for (i = 0; i < 5; i++)
		printf("%d ", a[i]);

	//selection sort ����
	SelectionSort(a, 5);

	//selection sort ��� ���
	printf("\nSelection Sort Result\n");
	for (i = 0; i < 5; i++)
		printf("%d ", a[i]);

	printf("\n\n");

	//sort �ϱ� ���� array ���
	for (i = 0; i < 5; i++)
		printf("%d ", b[i]);

	//Insertion sort ����
	InsertionSort(b, 5);

	//Insertion sort ��� ���
	printf("\nInsertion Sort Result\n");
	for (i = 0; i < 5; i++)
		printf("%d ", b[i]);

	printf("\n\n");

	//sort �ϱ� ���� array ���
	for (i = 0; i < 5; i++)
		printf("%d ", c[i]);

	//Bubble sort ����
	BubbleSort(c, 5);

	//Bubble sort ��� ���
	printf("\nBubble Sort Result\n");
	for (i = 0; i < 5; i++)
		printf("%d ", c[i]);
	printf("\n");
	return 0;
}

//swap �Լ�
void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void SelectionSort(int* a, int size) {
	int i, j;
	int min;
	for (i = 0; i < (size - 1); i++) {//���� ���� ��ġ
		min = i; //�ּҰ� �ʱ�ȭ
		for (j = i; j < size; j++)//Ž�� ���� ��ġ
			if (a[j] < a[min])
				min = j;
		swap(&a[i], &a[min]);//�ּҰ� Ž�� �Ϸ� �� ��ȯ
	}
}

void InsertionSort(int* a, int size) {
	int i, j;
	for (i = 1; i < size; i++) {//insert�� ��� ����
		for (j = i - 1; j >= 0; j--) {//�� ��� ����
			if (a[j + 1] >= a[j])//������ ����� �Ǿ����� ���� Ȯ��
				break;
			swap(&a[j + 1], &a[j]);//������ �ȵǾ��ٸ� ��ȯ
		}
	}
}

void BubbleSort(int* a, int size) {
	int i, j;
	for (i = 0; i < size; i++) {//�ּ� ���� ���������� ����� ��ġ ����
		for (j = size - 1; j > i; j--) {//���� ��ġ ���� �� �ڿ��� ������ �̵�
			if (a[j] < a[j - 1])//���� ���� ���� ������ �۵��� ��ȯ
				swap(&a[j], &a[j - 1]);
		}
	}
}