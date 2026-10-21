// day7
// LearningIntFunctions

#include <stdio.h>

int campurSepuluh(int a);		// Declaration of campurSepuluh function 
								// with one parameter variable int a

int main(void)
{
	int x=5, y;
	
	printf("x = %d\n", x);
	
	y = campurSepuluh(x);
	printf("y = x+10 = %d\n", y);
	
	printf("2+10 = %d\n", campurSepuluh(2));
	printf("50+10 = %d", campurSepuluh(50));
	
	return 0;
}

int campurSepuluh(int a)
{
	return a+10;
}
