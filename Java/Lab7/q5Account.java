package Lab7;

import java.util.Scanner;

class account 
{
	int acc_no, bal;
	account(int a, int b) 
    {
		acc_no = a;
		bal = b;
	}
	void disp() 
    {
		System.out.println("Account no.= " + acc_no);
		System.out.println("Balance= Rs " + bal);
	}
}


class person extends account 
{
	String name;
	int aadhaar_no;
	person(int a, int b, String n, int ad) 
    {
		super(a, b);
		name = n;
		aadhaar_no = ad;
	}
	void disp() 
    {
		super.disp();
		System.out.println("Name = " + name);
		System.out.println("Aadhaar No. = " + aadhaar_no);
	}
}

class Acc
{
	public static void main(String[] args) 
    {
		Scanner in = new Scanner(System.in);

		person obj = new person(2006243, 50000, "Suniti", 12345);
        person obj1 = new person(2006207, 120000, "Ambarisha", 12345);
        person obj2 = new person(2006226, 3000, "Mritynjay", 12345);
		obj.disp();
        System.out.println("\n");
        obj1.disp();
        System.out.println("\n");
        obj2.disp();
        in.close();
	}
}
