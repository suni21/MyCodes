package Lab6;


import java.util.Scanner;
class VolumeOfBox 
{
      
   public static void main(String args[]) 
    {   
        System.out.println("Enter dimensions of Box: ");
        	Scanner s= new Scanner(System.in);
            double l=s.nextDouble();
            double b=s.nextDouble();
            double h=s.nextDouble();
            System.out.println("\n");
        System.out.println("length= "+l);
		System.out.println("breadth="+b );
		System.out.println("height= "+h);
         	
                
                 double  volume= l*b*h;

            System.out.println("\n");
             System.out.println("Volume Of box:" +volume+ " sq units");
             
          s.close();
   }
}

