// day3
// LearningNestedIf

#include <stdio.h>

int main(void)
{
	int age;
	
	printf("Please enter your age: ");
	scanf(" %d", &age);
	
	if(age>=0)
	{
		printf("Age entered is valid.\n");
		
		if(age<12)						// Age is 0, 1, 2, 3, 4....., 11
		{
			printf("Children.\n");
		}
		else if(age>=12 && age<18)		// Age is 12, 13, 14, ....., 17
		{
			printf("Teenager.\n");
		}
		else if(age>=18 && age<60)		// Age is 18, 19, 20, 21, ......., 59
		{
			printf("Adult.\n");
			
			if(age<=30)					// Age is 18, 19, 20, ....., 30
			{
				printf("Young Adult.\n");
			}
			else						// Age is 31, 32, 33, ....., 59
			{
				printf("Mature Adult.\n");
			}
		}
		else							// Age is 60 and above
		{
			printf("Senior.\n");
		}
	}
	else
	{
		printf("Age entered is invalid.\n");
	}
	
	return 0;
}
