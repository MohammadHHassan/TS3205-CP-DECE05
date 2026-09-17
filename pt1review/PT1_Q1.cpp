#include <stdio.h>
#include <math.h>

int main(void)
{
	double r=4.2, h=10.5, V;
	const double pi=3.14159;
	
	V = 0.33333*pi*pow(r,2)*h;
	
	printf("Volume = %.2f", V);
	
	return 0;
}
