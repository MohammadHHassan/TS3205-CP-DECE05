// day5
// LearningScreenClear

#include <stdio.h>			// Library for printf/scanf
#include <windows.h>		// Library for delay/Sleep
#include <stdlib.h>			// Library for screen clear

int main(void)
{
	int i;
	
	for(i=10 ; i>=0 ; i--)
	{
		system("cls");		// Clear the screen/console
		printf("This program will be terminated in %d second(s)\n", i);
		Sleep(1000);		// Delay for 1 second
	}
	
	return 0;
}
