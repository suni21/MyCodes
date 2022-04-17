package Lab10;

import java.util.Scanner;
public class q2String 
{
    //Case Conversion
    public static String CaseReverse(String s) 
    {
		String case_rev= "";
		int l = s.length();

		for (int i = 0; i < l; i++)
        {
			char c = s.charAt(i);
			if (c >= 97 && c <= 122) //for small letters
            {
				case_rev += (char)(c - 32);
			} 
            else if (c >= 65 && c <= 90) //for capital letters
            {
			case_rev += (char)(c + 32);
			} 
            else 
            {
				case_rev += (char)c;
			}
		}
		return case_rev;
	}

    //String Reverse
	public static String Reverse(String s)
     {
		String string_rev = "";
		int l = s.length();
		for (int i = 0; i < l; i++) 
        {
			string_rev = s.charAt(i) + string_rev;
		}
		return string_rev;
	}

    //String Comparision
	public static String Compare(String s1, String s2) 
    {
		String string_com = (s1.compareTo(s2) > 0) ? s2 : s1;
		return string_com;
    }

    //String Insertion 
	static String Insert(String s1, String s2, int i) 
    {
		String ans = s1.substring(0, i) + s2 + s1.substring(i, s1.length());
		return ans;
	}

	public static void main(String args[])
    {
		Scanner in = new Scanner(System.in);
		System.out.print("Enter a string: ");
		String s = in.nextLine();

		String changed = CaseReverse(s);
		System.out.println("Changed Case String: " + changed);

		String case_rev = Reverse(s);
		System.out.println("case_rev String: " + case_rev);

		System.out.print("Enter one more String to compare: ");
		String s1 = in.nextLine();

		String greater = Compare(s, s1);
		System.out.println("Greater String= " + greater);

		System.out.print("Enter the index where you want to enter 2nd string in the first: ");
		int i = in.nextInt();
		String inserted = Insert(s, s1, i);
		System.out.println("Inserted String at " + i + " = " + inserted);
        in.close();

	}

}

