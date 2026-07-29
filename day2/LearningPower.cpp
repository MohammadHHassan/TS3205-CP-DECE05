// day2
// LearningPower

#include <stdio.h>			// Library for printf
#include <math.h>			// Library for mathematical functions

int main(void)
{
	double a=3.0, b=5.0, c;
	c = pow(a,b);			// a to the power of b
	
	printf("%g to the power of %g = %g\n", a, b, c);
	
	printf("4 to the power of 3 = %g\n", pow(4,3));
	
	return 0;
}
