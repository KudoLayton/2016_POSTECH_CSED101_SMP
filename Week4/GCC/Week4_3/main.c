/*************************************
2016 POSTECH SMP Week4-3
Q.다음을 출력하시오

//////////////////////////////////////
    * *
   ** **
  *** ***
 **** ****
***** *****

***** *****
 **** ****
  *** ***
   ** **
    * *
//////////////////////////////////////

**************************************/
#include <stdio.h>

void main()
{
	int i, j;
	for (i = 0; i<11; i++) {
		if (i<5) {
			for (j = 0; j<5; j++) {
				if ( i + j >= 4 )
					printf("*");
				else
					printf(" ");
			}
			putch(' ');
			for (j = 0; j<5; j++) {
				if (j <= i)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
		else if (i>5) {
			for (j = 0; j<5; j++) {
				if (j >= i - 6)
					printf("*");
				else
					printf(" ");
			}
			printf(" ");
			for (j = 0; j<5; j++) {
				if (i + j <= 10)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
		else
			printf("\n");
	}
}