import java.util.Scanner;

/*
Pattern Name: Solid Rhombus

Example (n = 5):

        *****
       *****
      *****
     *****
    *****

Time Complexity: O(n^2)
*/

class Patterns
{
    public void printPattern(int n)
    {
        for(int i = 0; i<n; i++)
        {
            // Print leading spaces
            for(int j = 0; j<n-i; j++)
            {
                System.out.print(" ");
            }

            // Print stars
            for(int j = 0; j<n; j++)
            {
                System.out.print("*");
            }

            // Move to next line after each row
            System.out.println();
        }
    }     
}

public class SolidRhombus
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter value of n");
        int n = sc.nextInt();

        Patterns pobj = new Patterns();
        pobj.printPattern(n);
    }
}