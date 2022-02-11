package Lab6;

import java.util.Scanner;

class q5Student
{
    int rollNo;
    String name;
    float cgpa;

   public q5Student(int r, String na, float c)
    {
        rollNo=r;
        name=na;
        cgpa=c;
    }   
}

public void main(String[] arg)
{
        Scanner in = new Scanner(System.in);
		System.out.println("Enter size= ");
		int n = Integer.parseInt(in.nextLine().trim());
		System.out.println("Enter Roll no= ");
        System.out.println("Enter Name= ");
        System.out.println("Enter CGPA= ");

		q5Student stu = new q5Student();
		for (int i = 0; i < n; i ++) {
			stu.rollNo = in.nextInt();
			stu.name = in.next();
			stu.cgpa = in.nextFloat();
  
}


