package Lab7;

    import java.util.Scanner;

class Sheet2D 
{
	int l, b;
	void get2D(int len, int bre)
     {
		l = len;
		b = bre;
	}
	void calculate() 
    {
		System.out.println("\n2D Sheet Price= Rs " + (l * b * 40));
	}
}
class Box3D extends Sheet2D
 {
	int h;
	void get3D(int height) 
    {
		h = height;
	}
	void calculate() 
    {
		System.out.println("3D Sheet Price= Rs " + (l * b * h * 60));
	}
}

class Sheet
 {
	public static void main(String[] args) 
    {
		Scanner input = new Scanner(System.in);
		Sheet2D s2 = new Sheet2D();
		s2.get2D(2, 3);
		s2.calculate();

		Box3D b3 = new Box3D();
		b3.get2D(3, 4);
		b3.get3D(5);
		b3.calculate();
        input.close();
	}
}

