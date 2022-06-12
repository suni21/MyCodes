package Lab10;

import java.util.Scanner;


public class q2String {

    public static void manualInsert(String s1, String s2, int i) {
        String total = s1.substring(0, i+1) + s2 + s1.substring(i+1);
        System.out.println("Total string after insertion of s2 into s1 at index i:- ");
        System.out.println(total);
    }


    public static void changeCase(String s1, String s2) {
        System.out.println("Uppercase S1 "+ s1.toUpperCase());
        System.out.println("Lowercase S1 "+ s1.toLowerCase());
        System.out.println("Uppercase S2 "+ s2.toUpperCase());
        System.out.println("Lowercase S2 "+ s2.toLowerCase());
    }


    public static void compare(String s1, String s2) {
        System.out.println("Comparing S1 with S2 :-");
        if(s1.equals(s2)) {
            System.out.println("S1 and S2 are equal");
        } else {
            System.out.println("S1 and S2 are unequal");
        }
    }


    public static void reverse(String s1, String s2) {
        String rev = "";
        System.out.println("Reversing String S1 :-");
        for (int i=0; i<s1.length(); i++) {
            char ch = s1.charAt(i);
            rev = ch + rev;
        }
        System.out.println("Reversed String S1: "+ rev);
        
        rev = "";
        System.out.println("Reversing String S2 :-");
        for (int i=0; i<s2.length(); i++) {
            char ch = s2.charAt(i);
            rev = ch + rev;
        }
        System.out.println("Reversed String S2: "+ rev);
    }


    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter 2 strings s1 & s2 :-");
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();
        
        System.out.print("Enter the insertion index: ");
        int i = sc.nextInt();

        changeCase(s1, s2);
        reverse(s1, s2);
        compare(s1, s2);
        manualInsert(s1, s2, i);
        sc.close();
    }


}