package Lab9;
 class superclass {
    void exp() throws RuntimeException
    {
        System.out.println("Superclass\n");
    }
}
class subclass extends superclass{
    void exp() throws ArithmeticException
    {
        System.out.println("Subclass\n");
    }

}
public class q2
{
    public static void main(String args[]){
        superclass s=new subclass();
        s.exp();
    }

}
