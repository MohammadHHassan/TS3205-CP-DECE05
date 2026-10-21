/* 	day9
	Exercise1
	
	Declare two arrays called firstName and lastName. 
	Each with size 100.
	Ask the user to enter their first name and last name and store accordingly.
	
	Print out the user's full name in an organized manner.
*/

#include <stdio.h>

int main(void)
{
	char firstName[100], lastName[100];
	
	printf("Please enter your first name: ");
	scanf(" %[^\n]s", &firstName);
	
	printf("Please enter your last name: ");
	scanf(" %[^\n]s", &lastName);
	
	printf("Your full name is %s %s", firstName, lastName);
	
	return 0;
}
