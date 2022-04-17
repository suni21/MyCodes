package Lab7;

import java.util.Scanner;
class test 
{
	void check() 
    {
		System.out.println("Base/Parent Class");
	}
}

class test2 extends test 
{
	void check() 
    {
		System.out.println("Sub/Child Class");
	}
}
class Test3 
{
	public static void main(String[] args) 
    {
		Scanner in = new Scanner(System.in);
		test ob1 = new test();
		test2 ob2 = new test2();
		ob1.check();
		ob1 = ob2;
		ob1.check();
        in.close();
	}
}

