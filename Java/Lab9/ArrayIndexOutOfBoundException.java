package Lab9;
   import java.util.*;
    class q1 {
       public static void main(String[] args) 
       {
   
               int arr[]={1,2,3,4,5};
               System.out.println("elements: ");
               for(int i=0;i<5;i++)
               {
                   System.out.println(arr[i]);
               }
               Scanner sc=new Scanner (System.in);
               System.out.println("\nEnter the index you want to print :");
               try
               {
                   int num=sc.nextInt();
                   System.out.println("number:" +arr[num]);
               }
               catch(ArrayIndexOutOfBoundsException e)
               {
                   System.out.println("Index you have entered is invalid please enter something between 0-4 \n");
               }
       }
   }  
