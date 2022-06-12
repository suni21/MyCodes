package Lab5;
import java.util.Scanner;
public class q1Greater {
    public static void main(String[] args) 
    {
        int x, y, z;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter numbers:\n");
        x = s.nextInt();
        y = s.nextInt();
        z = s.nextInt();

        if(x > y && x > z)
        {
            System.out.println(x+" is Greatest number");
        }
        else if(y > z && y>x)
        {
            System.out.println(y+" is Greatest number");
        }
        else
        {
            System.out.println(z+" is Greatest number");
        }
        s.close();
    }

}
