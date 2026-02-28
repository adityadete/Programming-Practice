import java.util.Scanner;

/*
Pattern Name: Butterfly Pattern

Example (n = 4):

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/

class Patterns 
{

    public void printPattern(int n) 
    {

        // Upper half
        for(int i = 1; i <= n; i++) 
        {

            for(int j = 1; j <= i; j++) 
            {
                System.out.print("*");
            }

            for(int j = 1; j <= 2*(n-i); j++) 
            {
                System.out.print(" ");
            }

            for(int j = 1; j <= i; j++) 
            {
                System.out.print("*");
            }

            System.out.println();
        }

        // Lower half
        for(int i = n; i >= 1; i--) {

            for(int j = 1; j <= i; j++) 
            {
                System.out.print("*");
            }

            for(int j = 1; j <= 2*(n-i); j++) 
            {
                System.out.print(" ");
            }

            for(int j = 1; j <= i; j++) 
            {
                System.out.print("*");
            }

            System.out.println();
        }
    }
}

public class ButterflyPattern  
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter value of n: ");
        int n = sc.nextInt();

        Patterns obj = new Patterns();
        obj.printPattern(n);
    }
}