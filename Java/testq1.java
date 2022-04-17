class A
{
        public void f1()
        {
            System.out.println("Hello");
        }
      
}

class B extends A
{
    public void f1()
    {
        System.out.println("Bye");
    }
}

public class testq1
{
    public static void main(String z[]) {
        A a=new B();
        System.out.println();
        a.f1();
    }
}