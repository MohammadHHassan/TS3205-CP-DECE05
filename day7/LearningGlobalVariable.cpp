// day8
// LearningGlobalVariable

#include <stdio.h>

void printText();					// Declare printText function

double money = 3.00;				// Global variable

int main(void)						// Main function
{
	//double money = 1.00;			// Local variable
	
	printf("main: I have $%.2f in my pocket.\n", money);
	printText();
	
	return 0;
}

void printText()
{
	//double money = 2.50;			// Local variable
	
	printf("printText: I have $%.2f in my pocket.", money);
}
