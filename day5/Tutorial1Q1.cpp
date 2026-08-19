#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c, theta;
	a=5.0;
	b=2.0;
	
	c = sqrt((a*a)+(b*b));
	theta = atan(a/b);
	
	printf("c = %.2f, theta = %.2f", c, theta);
	
	return 0;
}
