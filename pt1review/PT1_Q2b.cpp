#include <stdio.h>
#include <math.h>

int main(void)
{
	const double pi = 3.14159;
	double f, L, C;
	
	printf("Please enter the value of L: ");
	scanf(" %lf", &L);
	
	printf("Please enter the value of C: ");
	scanf(" %lf", &C);
	
	f = 1.0/(2.0*pi*sqrt(L*C));
	printf("Resonant frequency = %.3f Hz", f);
	return 0;
}
