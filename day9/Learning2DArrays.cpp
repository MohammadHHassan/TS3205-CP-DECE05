// day9
// Learning2DArrays

#include <stdio.h>

int main(void)
{
	int table[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int row, col;
	
	for(row=0 ; row<3 ; row++)
	{
		for(col=0 ; col<3 ; col++)
		{
			printf("%d\t", table[row][col]);
		}
		printf("\n");
	}
	
	printf("\ntable[1][1] = %d", table[1][1]);
	printf("\ntable[2][0] = %d", table[2][0]);
	
	return 0;
}
