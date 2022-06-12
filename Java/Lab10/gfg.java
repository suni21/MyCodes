public class gfg {
    
}
import java.util.Scanner;
interface salary
{	 
	 void earnings(float basic);
     void deductions(float basic);
	 void bonus(float basic);
}
abstract class manager implements salary
{
    
	public void earnings(float basic)
	{	
	    float DA=basic*80/100;
        float HRA=basic*15/100;
		System.out.println("earnings="+(basic+DA+HRA));
	}
	public void deductions(float basic)
	{
		float PF=basic*12/100;	
		System.out.println("Deduction="+PF);
	}
	public abstract void bonus(float basic);
}
class substaff extends manager
{
	public void bonus(float basic)
	{
		System.out.println("Bonus="+basic/2);
	}
}
class interfacem{
	public static void main(String[] args)
	{
		salary A=new substaff();
	    Scanner sc= new Scanner(System.in);
	    System.out.println("Enter basic salary:");
	    float a = sc.nextFloat();

		A.earnings(a);
		A.deductions(a);
		A.bonus(a);
        sc.close();
	}
}









