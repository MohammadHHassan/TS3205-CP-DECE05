// day8
// Exercise1

/*	Declare a function called hypo in double
	hypo function has 2 parameter variables: double a, double b
	This function returns the value of hypotenuse of a triangle
	where a is the height and b is the base.
	
	In the main function, ask the user to enter the base and height value
	Call the hypo function to calculate the value of hypotenuse
	Print it out in 2 decimal places.
*/

#include <stdio.h>
#include <math.h>

double hypo(double a, double b)
{
	return sqrt(pow(a,2)+pow(b,2));
}

int main(void)
{
	double base, height;
	
	printf("This program calculates the hypotenuse value of a triangle.\n\n");
	
	printf("Please enter the base value: ");
	scanf(" %lf", &base);
	printf("Please enter the height value: ");
	scanf(" %lf", &height);
	
	printf("\nHypotenuse = %.2f", hypo(height,base));
	
	return 0;
}

