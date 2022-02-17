package Lab6;

public class q4Rectangle 
{
    double length; 
    double breath;
    void Area()
    {
         double ar;
         ar = this.length * this.breath; 
         System.out.println("Area of rectangle= "+ ar);
    }
    void Perimeter()
    {
         double p_meter;
         p_meter = 2 * (this.length + this.breath);
         System.out.println("Perimeterof rectangle= "+ p_meter);
    }
} 
class Use_Rectangle 
{
    public static void main(String args[])
    { 
        q4Rectangle r = new q4Rectangle();
        r.length = 45.7;
        r.breath = 20.5;
        System.out.println("\nLength = " + r.length); 
        System.out.println("breath = " + r.breath);
        r.Area();
        r.Perimeter();
        System.out.println("\n");
    }
}