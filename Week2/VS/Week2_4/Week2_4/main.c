/*************************************
2016 POSTECH SMP Week2-4
Q.result�� ���� ��� ����?

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
	//����: 3.3

	printf("%f\n", result);

	return 0;
}