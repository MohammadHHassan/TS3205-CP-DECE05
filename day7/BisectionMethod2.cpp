// day7
// BisectionMethod2

#include <stdio.h>
#include <math.h>

int main(void)
{
	double xmin, xmid, xmax, fmin, fmid, p;
	int count=0;
	
	printf("This program finds the root of pow(x,3)+(2*x)-4=0 using Bisection Method.\n\n");
	
	printf("Please enter the value of xmin: ");
	scanf(" %lf", &xmin);
	
	printf("Please enter the value of xmax: ");
	scanf(" %lf", &xmax);
	
	do
	{
		count++;		// Counting the number of loop/iteration
		
		xmid = 0.5*(xmin+xmax);
		
		fmin = pow(xmin,3)+(2*xmin)-4;
		fmid = pow(xmid,3)+(2*xmid)-4;
		
		p = fmin*fmid;
		
		if(p<0)				// The root lies in lower half
		{
			xmax = xmid;	// The midpoint now becomes the maxpoint
		}
		else if(p>0)		// The root lies in upper half
		{
			xmin = xmid;	// The midpoint now becomes the minpoint
		}
		else				// When p=0
		{
			break;			// Exit from the loop. Found the root
		}
		
	}while(xmax-xmin>1e-9);		// Repeat while the gap is >0.000000001 or >1e-9
	
	printf("\n\nRoot = %.3f", xmid);
	printf("\nNumber of iteration = %d", count);
	
	return 0;
}
