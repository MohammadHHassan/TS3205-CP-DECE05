// day8
// LearningRecursion
// Recursion = Calling function inside the same function

#include <stdio.h>

int factorial(int y);

int main(void)
{
	int a;
	
	printf("Please enter the value of a: ");
	scanf(" %d", &a);
	
	printf("%d! = %d", a, factorial(a));
	
	return 0;
}

int factorial(int y)
{
	if(y==1)
	{
		return 1;
	}
	else
	{
		return y*factorial(y-1);
	}
}
