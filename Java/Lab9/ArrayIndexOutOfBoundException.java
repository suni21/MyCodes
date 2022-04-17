package Lab9;

public class ArrayIndexOutOfBoundException 
{
        public static void main(String args[]) {
         try {
            int arr[] = new int[5];
            arr[10] = 10;
         } catch (Exception e) {
            System.out.println("Exception Caught ArrayIndexOutOfBoundsException");
         }
      }
   }
   