package Lab6;

import java.util.Scanner;

public class q6Area {
    public static void main(String[] args) {
        int ch;
        double area;
        int l, b;
        int a;
        int r;
      
        while(true) 
        {
            Scanner sc = new Scanner(System.in);
            System.out.println("\n1: Area of Triangle");
            System.out.println("2: Area of Square");
            System.out.println("3: Area of Circle");
            System.out.println("0: Exit");
            System.out.print("\nEnter your choice=");
            ch = sc.nextInt();

            switch (ch) {
                case 1:
                    System.out.print("\nLength=");
                    l = sc.nextInt();
                    System.out.print("Breath=");
                    b = sc.nextInt();
                    area = (l * b) / 2;
                    System.out.println("\nArea of triangle= " + area);

                    break;

                case 2:
                    System.out.print("Side=");
                    a = sc.nextInt();
                    area = a * a;
                    System.out.println("\nArea of Square= " + area);
                    break;

                case 3:
                    System.out.print("Radius");
                    r = sc.nextInt();
                    area = r * r * 22 / 7;
                    System.out.println("\nArea of Circle= " + area);
                    break;
                case 0:
                    System.exit(0);    

                default:
                    System.out.print("\nError");
                    sc.close();
            }
        }
    }
}