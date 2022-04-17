package Lab7;

import java.util.Scanner;

class sample 
{
	sample(int a, int b) 
    {
		System.out.println("Parent/Base Class");
		System.out.println("a= " + a + " b= " + b);
	}
}

class sample2 extends sample 
{
	sample2(int a, int b, int c) 
    {
		super(a, b);
		System.out.println("Child Class");
		System.out.println("a= " + a + " b= " + b + " c= " + c);

	}
}

class BaseCall
{
	public static void main(String[] args) 
    {
		Scanner in= new Scanner(System.in);
		sample2 obj = new sample2(1, 2, 3);
        in.close();
	}
}

