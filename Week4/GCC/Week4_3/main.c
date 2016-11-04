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
					putch('*');
				else
					putch(' ');
			}
			putch(' ');
			for (j = 0; j<5; j++) {
				if (j <= i)
					putch('*');
				else
					putch(' ');
			}
			putch('\n');
		}
		else if (i>5) {
			for (j = 0; j<5; j++) {
				if (j >= i - 6)
					putch('*');
				else
					putch(' ');
			}
			putch(' ');
			for (j = 0; j<5; j++) {
				if (i + j <= 10)
					putch('*');
				else
					putch(' ');
			}
			putch('\n');
		}
		else
			putch('\n');
	}
}