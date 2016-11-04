/*************************************
2016 POSTECH SMP Week4-6
Q.N�� �ϳ��� ž�� �̵���Ű�� �ɸ��� Ƚ����
���ϴ� ���α׷��� �ۼ��Ͻÿ�. (��Ʈ: ����Լ�)
**************************************/

#include <stdio.h>

int hanoi(int n);

int main(void) {
	int n;
	printf("n: ");
	scanf("%d", &n);
	printf("hanoi number: %d\n", hanoi(n));

	return 0;
}

int hanoi(int n) {
	switch (n) {
	case 1:
		return 1;
	default:
		/*
			n-1���� ���� �ǵ��� �߾� ������ �ű��(hanoi(n - 1)) �� �عٴ� ���� ������ ���� �ű� �� 
			�ٽ� �߾� ���� �ִ� n-1���� ���� ���������� �ű��.
		*/
		return 2 * hanoi(n - 1) + 1;
	}
}