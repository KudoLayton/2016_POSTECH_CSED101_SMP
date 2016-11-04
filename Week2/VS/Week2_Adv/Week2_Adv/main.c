/*************************************
2016 POSTECH SMP Week2-Advance
Q.논리 연산자를 이용하여 드 모르간의 법칙을
증명할 수 있는가? 있다면 그 방법을 제시하라
**************************************/

#include <stdio.h>

int main(void) {
	/*
		True인가 False인가의 문제는 집합으로 표현하면 해당 집합에 들어 있는가 아닌가의 문제로 표현할 수 있다.
		예를 들어 X라는 조건에 부합하는 프로그램 상태들의 집합을 A라 하고 Y라는 조건에 부합하는 프로그램 상태들의 집합을 B라 할 때
		특정 프로그램 상태에서 x = 5, y = 0인 상황이라면 X는 true이고 Y는 false이므로 현재 프로그램 상태는 A-B집합에 포함된다.
		
		&&는 두 조건이 모두 만족해야하는 상태이므로 교집합이라 할 수 있고 ||는 두 조건 중 하나만 만족해야하는 상태이므로 합집합이라 할 수 있다.
		!는 True/False를 뒤집으므로 차집합이라 할 수 있겠다.

		드 모르간의 법칙을 만족한다는 것은 결국 드모르간 법칙으로 나타내는 집합식을 조건식으로 바꾸었을 때 모든 집합 영역에서 만족하면 된다.
		즉, !(x || y), !x && !y 두 조건식이 x, y값이 어떤 값을 갖더라도 항상 동일하면 드모르간 식은 성립하게 된다는 것이다.
		이때 x, y는 True/True, True/Flase, False/False, False/True 4가지 상태를 갖을 수 있으므로 이를 시도하는 프로그램을 만들 면 된다.
	*/
	int x, y;
	x = 1;
	y = 1;
	printf("X = True, Y = True\n");
	!(x || y) == (!x && !y) ? printf("True \n") : printf("False \n");

	x = 1;
	y = 0;
	printf("X = True, Y = False\n");
	!(x || y) == (!x && !y) ? printf("True \n") : printf("False \n");

	x = 0;
	y = 0;
	printf("X = False, Y = False\n");
	!(x || y) == (!x && !y) ? printf("True \n") : printf("False \n");

	x = 0;
	y = 1;
	printf("X = False, Y = True\n");
	!(x || y) == (!x && !y) ? printf("True \n") : printf("False \n");

	return 0;
}