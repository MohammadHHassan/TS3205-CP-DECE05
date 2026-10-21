// day9
// LearningString
// String = A collection of characters

#include <stdio.h>

int main(void)
{
	char name[100];
	
	printf("Please enter your name: ");
	scanf(" %[^\n]s", &name);	// %s for string. [^\n] stop reading until user press enter
	
	printf("Your name is %s", name);
	
	return 0;
}
