// package Lab6;

// import java.util.Scanner;

// class Number 
// {
//     int num[];
//     int n;

//     void read()
//      {
//         Scanner s = new Scanner(System.in);
//         System.out.print("Enter size: \n");
//         n = s.nextInt();
//         num = new int[n];
//         System.out.print("Enter elements: \n");
//         for (int i = 0; i < n; i++) 
//         {
//             num[i] = s.nextInt();
//         }
//         System.out.print("\n");
//     }

//     void swap()
//      {
//         int min=1000 ,max=0;
//         int min_i = 0;
//         int max_i = 0;
//         for (int i = 0; i < n; i++) 
//         {
//             if (num[i] > max) 
//             {
//                 max = num[i];
//                 max_i = i;
//             }
//             if (num[i] < min) 
//             {
//                 min = num[i];
//                 min_i = i;
//             }
//         }
//         int temp = num[max_i];
//         num[max_i] = num[min_i];
//         num[min_i] = temp;
//     }

//     void display() 
//     {
//         System.out.println("Elements after interchanging: \n");
//         for (int i = 0; i < n; i++) 
//         {
            
//             System.out.print(num[i]);
//             System.out.println();
//         }
//     }
// }

// class Num 
// {
//     public static void main(String[] arg) 
//     {
//         Number n = new Number();
//         n.read();
//         n.swap();
        
//         n.display();
//     }
// }
