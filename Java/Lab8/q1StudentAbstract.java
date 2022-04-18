package Lab8;
import java.util.Scanner;

class q1StudentAbstract 
{
    public static void main(String[] args) 
    {
        Scanner s = new Scanner(System.in);
        int r, re;
        System.out.println("Enter rollno.= ");
        r = s.nextInt();
        System.out.println("Enter registration no.= ");
        re = s.nextInt();
        kiitian k = new kiitian();
        k.course(r, re);
        s.close();
    }
}

class kiitian extends student 
{
    void course(int r, int re) 
    {
        roll = r;
        reg = re;
        System.out.println("\nDetalis: ");
        System.out.println("Roll no.= " + r);
        System.out.println("Registration no.= " + re);
    }
}
