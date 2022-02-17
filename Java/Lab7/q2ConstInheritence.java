package Lab7;

import java.util.Scanner;

class plate
{
    int length, width;
    plate() 
    {
        System.out.println("Constructor Called");
    }
}

class Box extends plate 
{
    int height;
    Box() 
    {
        System.out.println("Parent Constructor Called");
    }
}

class woodBox extends Box 
{
    int thick;
    woodBox() 
    {
        System.out.println("Child Constructor Called");
    }
}

class BoxInherit 
{
    public static void main(String[] args) 
    {
        Scanner s = new Scanner(System.in);
        woodBox obj = new woodBox();
        s.close();
    }
}
