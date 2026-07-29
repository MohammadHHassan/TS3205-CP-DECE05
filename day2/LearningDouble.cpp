// day2
// LearningDouble

#include <stdio.h>		// Library to use printf functions

int main(void)			// Main function
{
	double numberOne, numberTwo, numberThree;
	
	numberOne = 3.14;
	numberTwo = 2.5555555;
	printf("numberOne = %.2f, numberTwo = %.3f", numberOne, numberTwo);
	
	numberThree = numberOne+numberTwo;
	printf("\nnumberThree = %.2f", numberThree);
	
	return 0;			// The end of main function
}
