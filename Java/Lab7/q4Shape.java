package Lab7;

import java.util.Scanner;
class shape 
{
	double area;
	void showArea() 
    {
		System.out.println("Area = " + area);
	}
}

class circle extends shape 
{
	double radius;
	void get(double r) 
    {
		radius = r;
	}
	void calcArea() 
    {
        System.out.println("Area of circle= ");
		area = 3.14 * radius * radius ;
	}
}

class rectangle extends shape 
{
	double length, breadth;
	void get(double l, double b) 
    {
		length = l;
		breadth = b;
	}
	void calcArea() 
    {
        System.out.println("Area of rectangle= ");
		area = length * breadth;
       
	}
}

class Ar 
{
	public static void main(String[] args) 
    {
		Scanner in = new Scanner(System.in);

		circle c = new circle();
		c.get(5);
		c.calcArea();
		c.showArea();
        System.out.println("\n");
		rectangle r = new rectangle();
		r.get(3, 4);
		r.calcArea();
		r.showArea();
        in.close();
	}
}

