package Lab8;
import java.util.Scanner;

interface motor 
{
    void run();
    int c = 5;
    void consume();
}

class WashingMachine implements motor 
{
    Scanner in = new Scanner(System.in);
    int l;

    public void consume() 
    {
        System.out.println("Enter water(liters) for washing= ");
        l = in.nextInt();
    }

    public void run() 
    {
        if (l > c) 
        {
            System.out.println("Error, cannot run not enough water!");
        } else 
        {
            System.out.println("Okay,can run");
        }
    }
}

class q2Motor 
{
    public static void main(String[] args) 
    {
        motor a = new WashingMachine();
        a.consume();
        a.run();
    }
}
