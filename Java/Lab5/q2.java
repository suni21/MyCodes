package Lab5;

public class q2 {
    public static void main(String[] args)
    {

        int num[]={23,65,22,76,11,24,9};

        System.out.println("enter number= ");
        System.out.println();
        for(int i=0;i<num.length;i++)
        {
            if (num[i]% 2 == 0) {
                System.out.println(num[i] + " is even");
            } else
                System.out.println(num[i] + " is odd");
        }
    }
}