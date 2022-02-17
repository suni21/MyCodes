package Lab6;

import java.util.Scanner;

class Students
 {
    int rollNo;
    String name;
    double cgpa;

    Students() 
    {
      rollNo=0;
      name=" ";
      cgpa=0.00;
    }

    Students(int r, String na, double c) 
    {
        rollNo = r;
        name = na;
        cgpa = c;
    }

}
class Stud
{
    public static void main(String[] arg)
     {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter size= ");
        int n = Integer.parseInt(in.nextLine().trim());
        System.out.println("Enter RollNo, Name, CGPA: ");
        Students stu = new Students();
        Students max = new Students();
        Students min = new Students(0, " ",10);

        for (int i = 0; i < n; i++) 
        {
            stu.rollNo = in.nextInt();
            stu.name = in.next();
            stu.cgpa = in.nextFloat();
            if (max.cgpa < stu.cgpa) 
            {
                max.rollNo = stu.rollNo;
                max.name = stu.name;
                max.cgpa = stu.cgpa;
            }

            if (min.cgpa > stu.cgpa)
             {
                min.rollNo = stu.rollNo;
                min.name = stu.name;
                min.cgpa = stu.cgpa;
            }
        }
            System.out.println("\nRollno= "+ max.rollNo);
            System.out.println("Name= "+ max.name);
            System.out.println("Cgpa= "+ max.cgpa);

            System.out.println("\nRollno= "+ min.rollNo);
            System.out.println("Name= "+ min.name);
            System.out.println("Cgpa= "+ min.cgpa);
            in.close();
    }
}