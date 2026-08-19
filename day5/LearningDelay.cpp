// day5
// LearningDelay

#include <stdio.h>			// Library for printf & scanf
#include <windows.h>		// Library for delay

int main(void)
{
	int a=1;
	
	while(a<=10)
	{
		printf("%d.\tHaji Mohammad bin Haji Hassan\n", a);
		a++;
		Sleep(500);			// 0.5 sec = 500 ms
	}
	
	return 0;
}
