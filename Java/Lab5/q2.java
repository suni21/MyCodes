package Lab5;
import java.util.Scanner;
public class q2 {
    public static void main(String[] args)
    {
        //int num[]={23,65,22,76,11,24,90};
        Scanner sc= new Scanner(System.in);
        
        int[] a=new int[];
        System.out.println("Enter the array:");
        for(int i =0;i<a.length;i++)
        {
            a[i]=sc.nextInt();
        }
        System.out.println("entered numbers: ");
        for(int i=0;i<a.length;i++)
        {
            System.out.println(a[i]);
        }
    
        System.out.println();
        for(int i=0;i<a.length;i++)
        {
            if (a[i]% 2 == 0) {
                System.out.println(a[i] + " is even");
            } else
                System.out.println(a[i] + " is odd");
        }
        sc.close();
    }
}