// day7
// LearningDoubleFunctions

#include <stdio.h>

double moneyConverter(double money);
double rate = 3.20;			// Global variable

int main(void)
{
	double duit, input;
	
	printf("Welcome to money converter.\n");
	printf("Today's rate:\n");
	printf("BND 1.00 = RM %.2f\n\n", rate);
	
	printf("Please enter your money: BND ");
	scanf(" %lf", &input);
	
	duit = moneyConverter(input);		// Calling the function
										// Store the converted money in duit
										
	printf("\nYour BND %.2f has been converted to RM %.2f\n", input, duit);
	
	printf("\nBND 200.00 = RM %.2f", moneyConverter(200));
	printf("\nBND 300.00 = RM %.2f", moneyConverter(300));
	
	return 0;
}

double moneyConverter(double money)
{
	return money*rate;
}
