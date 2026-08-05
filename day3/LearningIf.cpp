// day3
// LearningIf

#include <stdio.h>

int main(void)
{
	int x;
	
	printf("Please enter a positive number: ");
	scanf(" %d", &x);
	
	if(x>=0)			// The condition if the number entered is positive
	{
		printf("Your number is %d", x);
	}
	
	return 0;
}
