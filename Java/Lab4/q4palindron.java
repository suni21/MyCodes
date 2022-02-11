package Lab4;

import java.util.*;

public class q4palindron {
    public static void main(String args [])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter no= ");
        int num=sc.nextInt();
        int check=num;
        int rev=0;
        while(num>0)
        {
            int d=num%10;
            rev=rev*10+d;
            num=num/10;
        }
        if(rev==check)
        {
            System.out.println(check + " is palindrome number");
        }
        else
            System.out.println(check + " not palindrome number");

            sc.close();      
    }
    

}
