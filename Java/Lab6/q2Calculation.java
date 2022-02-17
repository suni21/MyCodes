package Lab6;

public class q2Calculation {
   void sum(int a, int b) //overloding
   { 
     int s = a + b; 
     System.out.println("Sum= " +s); 
   } 

   void sum(int a, int b, int c) 
   { 
     int t = a + b + c; 
     System.out.println("Sum= " +t); 
   } 
public static void main(String[] args) 
{ 
   q2Calculation a = new q2Calculation(); 
    a.sum(10, 14); 
    a.sum(50, 24, 20);
  }  
}
