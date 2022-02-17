package Lab5;
import java.util.Scanner;
public class q6Occuren {
    public static void main(String[] args) 
    {
        int n, x, count = 0;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter size: ");
        n = s.nextInt();
        int a[] = new int[n];
        System.out.println("Enter elements:");
        for(int i = 0; i < n; i++)
        {
            a[i] = s.nextInt();
        }
        System.out.print("Enter the element of which you want to count number of occurrences: ");
        x = s.nextInt();
        for(int i = 0; i < n; i++)
        {
            if(a[i] == x)
            {
                count++;
            }
        }
        System.out.println("Occurrence of the Element= "+count);
        s.close();
        System.out.println("");
    }
   
}

