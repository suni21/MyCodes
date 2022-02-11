package Lab5;
public class q1Greater {
    public static void main(String arg[])
    {
        int n1= Integer.parseInt(arg[0]);
        int n2= Integer.parseInt(arg[1]);
        int n3= Integer.parseInt(arg[2]);

        if(n1 > n2 && n1>n3)
        {
            System.out.println(n1+"is grater");
        }
        else if (n2>n1 && n2>n3)
        {
            System.out.println(n2+"is grater");
        }
        else
        {
            System.out.println(n3+"is grater");
        }

    }

}
