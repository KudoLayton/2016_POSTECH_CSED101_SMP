/*************************************
2016 POSTECH SMP Week6_2
Q.두 숫자가 있는 ‘In.txt’파일을 받고
이 두 숫자들로 시작하는 피보나치 수열30개를
파일 ‘Out.txt’에 출력 하시오
**************************************/

#include <stdio.h>
int fibo(int f0, int f1, int n);

int main(void) {
	FILE *InFile, *OutFile;
	int i, f0, f1;
	//파일 열기
	InFile = fopen("In.txt", "r");
	OutFile = fopen("Out.txt", "w");
	
	//첫번째와 두번째 항 읽기
	fscanf(InFile, "%d%d", &f0, &f1);

	//파일 출력
	for (i = 0; i < 30; i++) {
		printf("print %d fibonacci number\n", i);
		fprintf(OutFile, "%d\n", fibo(f0, f1, i));
	}

	//파일 닫기(파일을 열면 파일을 닫는 습관을 들입시다.)
	fclose(InFile);
	fclose(OutFile);
	return 0;
}

int fibo(int f0, int f1, int n) {
	switch (n) {
	//첫번째 피보나치 수
	case 0:
		return f0;
	//두번째 피보나치 수
	case 1:
		return f1;
	//나머지 경우
	default:
		return fibo(f0, f1, n - 1) + fibo(f0, f1, n - 2);
	}
}