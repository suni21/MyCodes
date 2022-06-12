package Lab6;

import java.util.Scanner;

public class Number 
    {
        int num[];
        int n;
        void read() 
        {
            Scanner s = new Scanner(System.in);
            n = s.nextInt();
            num = new int[n];
            for (int i = 0; i < n; i++) {
                num[i] = s.nextInt();
            }
        }
        void swap() {
            int min = 0;
            int max = 0;
            for (int i = 0; i < n; i++) {
                if (num[i] > num[max])
                    max = i;
                if (num[i] < num[min])
                    min = i;
            }
            int temp = num[max];
            num[max] = num[min];
            num[min] = temp;
        }
        void display() {
            for (int i = 0; i < n; i++) {
                System.out.print(num[i] + " ");
                System.out.println();
            }
        }
        class Num
        {
            public static void main(String[] arg)
            {
                Number n= new Number();
                n.read();
                n.swap();
                n.display();
            }
        }
        
    }
    
