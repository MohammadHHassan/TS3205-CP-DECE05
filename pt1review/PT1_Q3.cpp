#include <stdio.h>
int main(void)
{
double marks;
printf("Enter marks obtained: ");
scanf(" %lf", &marks);
if(marks>=0 && marks<=100)
{
printf("Valid marks entered.\n");
if(marks>=50)
{
printf("Pass.\n");
if(marks<65)
{
printf("Grade: P\n");
}
else if(marks>=65 && marks<80)
{
printf("Grade: M\n");
}
else
{
printf("Grade: D\n");
}
}
else
{
printf("Fail.\n");
}
}
else
{
printf("Invalid marks entered.\n");
}
printf("Thank you");
return 0;
}
