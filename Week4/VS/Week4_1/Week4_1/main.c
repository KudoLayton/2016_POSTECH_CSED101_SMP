/*************************************
2016 POSTECH SMP Week4-1
Q.다음 for문을 while문으로 변환하시오

///////////////////////////////////////
	int n = 5;
	int i;
	for (i = 0; i < n; i++){
		printf("%d\n", i);
	}
///////////////////////////////////////

**************************************/

#include <stdio.h>

int main(void) {
	int n = 5;
	int i;

	//초기화
	i = 0;

	//조건식
	while (i < n) {
		//실행문
		printf("%d\n", i);

		//가감식
		i++;
	}
	

	return 0;
}