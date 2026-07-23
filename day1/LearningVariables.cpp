/* 	day1
	LearningVariables
	
	Variable is a place where you store data in programming
	Types of variable:		int (whole number)
							float/double (decimal numbers)
							char (letters/characters)
							boolean (true/false)
*/

#include <stdio.h>

int main(void)
{
	int a, b, c;			// Declare a, b and c as integer variables
	
	a=30;
	b=15;
	c = a+b;
	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = a+b = %d", c);
		
	return 0;
}

