// day3
// LearningScanfUsingDouble

#include <stdio.h>

int main(void)
{
	double a, b;
	
	printf("Please enter the value of a: ");	// Prompt the message
	scanf(" %lf", &a);		// Store the value of a
	
	printf("Please enter the value of b: ");
	scanf(" %lf", &b);
	
	printf("The sum of a and b = %.1f", (a+b));
	
	return 0;
}
