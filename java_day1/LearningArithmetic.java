package java_day1;

public class LearningArithmetic
{
	public static void main(String[] args)
	{
		int a=9, b=4, c;
		c = a/b;
		System.out.println("(int):\t\tc = a/b = " + c);
		
		double d=9, e=4, f;
		f = d/e;
		System.out.println("(double):\tf = d/e = " + f);
		
		System.out.println("9/4 = " + (9/4));
		System.out.println("9.0/4.0 = " + (9.0/4.0));
		
		double g = Math.pow(2, 4);
		System.out.println("2 to the power of 4 = " + g);
		
		System.out.println("3 to the power of 5 = " + Math.pow(3, 5));
		
		System.out.println("Square root of 16 = " + Math.sqrt(16));
		
		System.out.println("Remainder of 9/4 = " + (9%4));
	}
}
