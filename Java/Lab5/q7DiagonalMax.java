package Lab5;

import java.util.Scanner;

public class q7DiagonalMax {
    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);

        int[][] mat = new int[3][3];

        System.out.println("Enter elements of the matrix (3*3):");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                mat[i][j] = sc.nextInt();
            }
        }

        System.out.println("elements of the matrix");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(mat[i][j] + "\t");
            }
            System.out.println("");
        }
        int sum=0;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                //to checks for diagonal
                if (i == j) {
                    sum = sum + mat[i][j];
                }
            }
        }

        System.out.printf("Sum od Diagonal elements of the matrix = " + sum);
        sc.close();
    }
}
