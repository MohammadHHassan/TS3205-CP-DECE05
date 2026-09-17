// day6
// LearningNestedFor

#include <stdio.h>

int main(void)
{
	int row, col;
	
	printf("Multiplication Table:\n");
	
	for(row=1 ; row<=5 ; row++)
	{
		for(col=1 ; col<=5 ; col++)
		{
			printf("%d\t", row*col);
		}
		printf("\n");
	}
	
	return 0;
}
