package java_day1;

import java.util.Scanner;		// Import Scanner class/API/library

public class LearningScanner
{
	public static void main(String[] args)
	{
		// Declaration of Scanner class to enable user's input
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("Please enter your name: ");
		String name = scanner.nextLine();
		
		System.out.println("Your name is " + name);
		
		System.out.print("Please enter your age: ");
		int age = scanner.nextInt();
		// double a = scanner.nextDouble();
		// char b = scanner.nextChar();
		
		System.out.println("You are " + age + " years old.");
		
		scanner.close();
	}
}
