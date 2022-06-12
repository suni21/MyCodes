package Lab9;
import java.util.Scanner;

class HrsException extends Exception
{
}
class SecException extends Exception
{
}
class MinException extends Exception
{
}
class run {
    int hrs, min, sec;

    run(int a, int b, int c) {
        hrs = a;
        min = b;
        sec = c;
    }

    public void time() {
        try {
            if (hrs > 24 || hrs < 0) {
                throw new HrsException();
            }
        } catch (HrsException he) {
            System.out.println("Invalid hour unit\n");
        }
        try {
            if (min > 60 || min < 0) {
                throw new MinException();
            }
        } catch (MinException me) {
            System.out.println("Invalid minute unit\n");
        }
        try {
            if (sec > 60 || sec < 0) {
                throw new SecException();

            }
        } catch (SecException se) {
            System.out.println("Invalid second unit");
        }
    }

    public void display() {
        System.out.println("Hrs : " + hrs + ", Mins : " + min + ", Sec : " + sec);
    }

}
public class q5Time
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter hours,mins and seconds :\n");
        int h=sc.nextInt();
        int m=sc.nextInt();
        int s=sc.nextInt();
        run q=new run(h,m,s);
        q.time();
        q.display();

    }

}