package Lab9;
import java.util.Scanner;
class LessBalanceException  extends Exception 
{
	public LessBalanceException (String str) 
    {
		System.out.println(str);
	}
}
public class q7Account {
	public static void main(String args[]) {

		int curr = 2000;

		try {
            System.out.println("Available balance= " + curr);
            System.out.println("Enter amount to withdrawl= ");
            Scanner in = new Scanner(System.in);

			int withdraw = in.nextInt();

			if ((curr - withdraw) < 500) {
				throw new LessBalanceException ("Error in withdrawal\nAmount is not sufficient");
			} else {
				curr -= withdraw;

				System.out.println("Amount successfully withdrawn");
                System.out.println("Available balance= " + curr);
                
			}

		} catch (Exception e) {
			System.out.println("\nCaught Exception");
		}
        
	}
}

