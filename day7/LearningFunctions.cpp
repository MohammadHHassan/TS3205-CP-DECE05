// day7
// LearningFunctions

#include <stdio.h>

void printSomething();		// Declaration of printSomething function

int main(void)				// Main function
{
	int i;
	
	for(i=0 ; i<10 ; i++)
	{
		printSomething();		// Call the function
	}
	
	return 0;
}

void printSomething()		// No semicolon, use curly bracket instead
{
	printf("Name: Haji Mohammad bin Haji Hassan\n");
	printf("Institution: Politeknik Brunei\n");
	printf("Programme: Diploma in Electronic and Communication Engineering\n");
}
