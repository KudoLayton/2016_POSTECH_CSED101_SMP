/*************************************
2016 POSTECH SMP Week4-5
Q.기존 함수를 바꾸시오
//////////////////////////////////////
grade(float score, int absence, int tardy) {
	absence += tardy/3;
	if(absence<3) {
		if(score>=90.0) {
			return 'A';
		}
		else if(score>=80.0) {
			return 'B';
		}
		else if(score>=70.0) {
			return 'C';
		}
		else if(score>=60.0) {
			return 'D';
		}
		else {
			return 'F';
		}
	}
	else {
		return 'F';
	}
}
//////////////////////////////////////
**************************************/

#include <stdio.h>
char grade(float score, int absence, int tardy);

int main(void) {
	float score;
	int ab, tar;

	printf("score?: ");
	scanf("%f", &score);
	printf("absence?: ");
	scanf("%d", &ab);
	printf("tardy?: ");
	scanf("%d", &tar);

	printf("grade: %c\n", grade(score, ab, tar));
	return 0;
}

char grade(float score, int absence, int tardy) {
	absence += tardy / 3;
	switch (absence) {
		case 0: break;
		default: return 'F';
	}
	switch ((int)score/10) {
		//이렇게 동시 처리도 가능하다.
		case 10: case 9: return 'A';
		case 8: return 'B';
		case 7: return 'C';
		case 6: return 'D';
		default: return 'F';
	}
}