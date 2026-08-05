// day3
// Exercise2

/*	Declare two variables called x and y in double
	Prompt a message for the user to enter the values for x and y (separately)
	
	Ask the user what is x+y?
	If the answer is correct, print out CORRECT
	Else, print out INCORRECT
*/

#include <stdio.h>

int main(void)
{
	double x, y, input, answer;
	
	printf("Please enter the value of x: ");
	scanf(" %lf", &x);
	printf("Please enter the value of y: ");
	scanf(" %lf", &y);
	
	answer = x+y;
	
	printf("\nWhat is x+y?\n");
	scanf(" %lf", &input);
	
	if(input==answer)
	{
		printf("CORRECT");
	}
	else
	{
		printf("INCORRECT");
	}
	
	return 0;
}

