/*************************************
2016 POSTECH SMP Week2-4
Q.result의 최종 결과 값은?

//////////////////////////////////////
int data = 5;
float result;

result = (float)3 / 10 + (6 + 9) / 5 % --data;
//////////////////////////////////////

**************************************/

#include <stdio.h>

int main(void) {
	int data = 5;
	float result;

	result = (float)3 / 10 + (6 + 9) / 5 % --data;
	//정답: 3.3

	printf("%f\n", result);

	return 0;
}