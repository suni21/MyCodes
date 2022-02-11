package Lab4;
import java.util.Scanner;
public class q3Weekdays 
{
    public static void main(String args []) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter date= ");
        int date = sc.nextInt();
        switch (date) {

            case 3, 10, 17, 24, 31:
                System.out.println("Monday");
                break;
            case 4, 11, 18, 25:
                System.out.println("Tuesday");
                break;
            case 5, 12, 19, 26:
                System.out.println("Wednesday");
                break;
            case 6, 13, 23, 2:
                System.out.println("Thursday");
                break;
            case 7, 14, 21, 28:
                System.out.println("Friday");
                break;
            case 1, 8, 16, 22, 29:
                System.out.println("Saturday");
                break;
            case 27, 9, 15, 20, 30:
                System.out.println("Sunday");
                break;
            default:
                System.out.println("Error");
        }
        sc.close();
    }
}
