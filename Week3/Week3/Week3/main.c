/*************************************
2016 POSTECH SMP Week3
Q.1~7������ ������ ���� ����ϴ� �Լ��� ����ÿ�.
��, ������ �����Ͽ� ������Ʈ�� ���� ��!
**************************************/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "myFunc.h"

int main(void) {
	int result;

	//random seed����
	srand(time(NULL));

	//������ �Լ� ȣ�� �� ����
	result = rand1_7();
	printf("%d\n", result);

	/*
		������ ���� �Լ� �ȿ��� ���� �θ� ���� �ִ�.
		printf("%d\n", rand1_7());
	*/
	return 0;
}