package Lab11;
import java.io.*;
import java.util.Scanner;
  
public class CopyFromFile {
    
    public static void copyContent(File a, File b)
        throws Exception
    {
        FileInputStream in = new FileInputStream(a);
        FileOutputStream out = new FileOutputStream(b);
  
        try {
            int n;
            while ((n = in.read()) != -1) 
            {
                out.write(n);
            }
        }
        finally {
            if (in != null) {

                in.close();
            }
           
            if (out != null) {
                out.close();
            }
        }
        System.out.println("File Copied");
    }
  
    public static void main(String[] args) throws Exception
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the source filename to copy from: ");
        String a = sc.nextLine();

        File x = new File(a);
  
        System.out.println("Enter the destination filename to copy:");
        String b = sc.nextLine();

        File y = new File(b);
        copyContent(x, y);
        sc.close();
    }
}