// Folder: day3
// Source file: LearningScanf

#include <stdio.h>			// Library for input/output

int main(void)				// Main function
{
	int age;				// Declare integer variable age
	
	printf("Hi Mohammad! :)\n");
	
	printf("How old are you?\n");		// Message prompt for user to enter thei age
	scanf(" %d", &age);		// Store the user's input in variable age
	
	printf("You are %d years old.", age);
	
	return 0;
}
