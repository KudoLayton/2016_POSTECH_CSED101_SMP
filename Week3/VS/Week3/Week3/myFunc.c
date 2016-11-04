#include <stdlib.h>
#include "myFunc.h"

//생성할 함수 정의
int rand1_7() {
	int result;
	result = (rand() % 7) + 1;
	return result;
}