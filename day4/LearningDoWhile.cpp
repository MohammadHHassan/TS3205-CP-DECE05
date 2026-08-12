// day4
// LearningDoWhile

#include <stdio.h>

int main(void)
{
	double input;
	
	do
	{
		printf("Please enter a negative number: ");
		scanf(" %lf", &input);
	}while(input>=0);			// Repeat the question until user entered negative number
	
	printf("\nYour number is %g", input);
	printf("\nThank you :)");
	
	return 0;
}
