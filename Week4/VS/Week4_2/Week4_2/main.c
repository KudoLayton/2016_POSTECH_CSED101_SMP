/*************************************
2016 POSTECH SMP Week4-2
Q.다음 함수를 만들고 이에 해당하는 프로그램을 만드시오

float pow(unsigned int a, int b)
반환값: 𝑎^𝑏
**************************************/

#include <stdio.h>

float pow(unsigned int a, int b);

int main(void) {
	int a, b;

	do {
		//a 입력
		printf("a: ");
		scanf("%d", &a);

		//양수 여부 조사
		if (a <= 0)
			printf("Please input positive number!\n");
	} while (a <= 0); //양수가 나올때 까지 반복

	//b 입력
	printf("b: ");
	scanf("%d", &b);

	//함수 호출 및 출력
	printf("a^b: %f\n", pow(a,b));

	return 0;
}

float pow(unsigned int a, int b) {
	//초기화
	float result = 1;
	int i;

	//지수가 0 미만일 경우
	if (b < 0) {
		for (i = 0; i > b; i--)
			result /= a;
	}

	//지수가 0 이상일 경우
	else {
		for (i = 0; i < b; i++)
			result *= a;
	}
	return result;
}