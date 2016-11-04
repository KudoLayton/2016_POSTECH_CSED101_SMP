/*************************************
2016 POSTECH SMP Week3
Q.1~7사이의 임의의 값을 출력하는 함수를 만드시오.
단, 파일을 분할하여 프로젝트를 만들 것!
**************************************/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "myFunc.h"

int main(void) {
	int result;

	//random seed설정
	srand(time(NULL));

	//생성한 함수 호출 및 대입
	result = rand1_7();
	printf("%d\n", result);

	/*
		다음과 같이 함수 안에서 직접 부를 수도 있다.
		printf("%d\n", rand1_7());
	*/
	return 0;
}