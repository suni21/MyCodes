package Lab6;

class q3Overload
{
    void area(float x)
    {
        System.out.println("Square= "+Math.pow(x, 2)+" sq units");
    }
    void area(float x, float y)
    {
        System.out.println("Rectangle= "+x*y+" sq units");
    }
    void area(double x)
    {
        double z = 3.14 * x * x;
        System.out.println("Triangle= "+z+" sq units");
    }
}
class Overload 
{
     public static void main(String args[]) 
	{
    System.out.println("\nArea:\n");
	   q3Overload ob = new q3Overload();
	   ob.area(2.5);
	   ob.area(10,12);
       ob.area(22);
        }
}