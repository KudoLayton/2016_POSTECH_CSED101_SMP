/*************************************
2016 POSTECH SMP Week4-6
Q.N층 하노이 탑을 이동시키는 걸리는 횟수를
구하는 프로그램을 작성하시오. (힌트: 재귀함수)
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
			n-1개의 원형 판들을 중앙 봉으로 옮기고(hanoi(n - 1)) 맨 밑바닥 판을 오른쪽 봉에 옮긴 뒤 
			다시 중앙 봉에 있던 n-1개의 판을 오른쪽으로 옮긴다.
		*/
		return 2 * hanoi(n - 1) + 1;
	}
}