// day4
// LearningIncrementDecrement

#include <stdio.h>

int main(void)
{
	int x=1;
	
	printf("1. Initially, x=%d\n", x);
	
	x++;			// Increment x by 1
	printf("2. Incremented, x=%d\n", x);
	
	x = x+1;		// Increment x by 1.	New x = Old x + 1
	printf("3. Incremented, x=%d\n", x);
	
	x+=1;			// Increment x by 1
	printf("4. Incremented, x=%d\n", x);
	
	x--;			// Decrement x by 1
	printf("5. Decremented, x=%d\n", x);
	
	x = x-1;
	printf("6. Decremented, x=%d\n", x);
	
	x-=1;
	printf("7. Decremented, x=%d", x);
	
	return 0;
}
