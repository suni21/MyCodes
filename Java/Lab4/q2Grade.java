package Lab4;

import java.util.Scanner;

public class q2Grade {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.printf("enter marks:");
        int m=sc.nextInt();
        System.out.println("Grade= ");
        if(m / 10 == 10 || m / 10 == 9)
        {
            System.out.println("O");
        }
        else if(m / 10 == 8)
        {
            System.out.println("E");
        }
        else if(m / 10 == 7 )
        {
            System.out.println("A");
        }
        else if(m / 10 == 6 )
        {
            System.out.println("B");
        }
        else if(m / 10 == 5 )
        {
            System.out.println("C");
        }
        else
        {
            System.out.println("Fail!");
        }
        sc.close();
    }
    
}
