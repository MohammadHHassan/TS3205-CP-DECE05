#include <stdio.h>
int main(void)
{
	double b, h, A;

	printf("Please enter the value of base (b): ");
	scanf(" %lf", &b);
	printf("Please enter the value of height (h): ");
	scanf(" %lf", &h);
	
	A = 0.5*b*h;
	printf("Area = %.2f", A);
	
	return 0;
}
