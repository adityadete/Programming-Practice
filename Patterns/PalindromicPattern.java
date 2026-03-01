import java.util.Scanner;

/*
Pattern Name: Palindromic Number Pyramid

Example (n = 4):

    1
   212
  32123
 4321234

*/

class Patterns 
{
    public void printPattern(int n) 
    {
        for(int i = 1; i <= n; i++)
        {
            // Print leading spaces
            for(int j = 1; j <= n - i; j++)
            {
                System.out.print(" ");
            }

            // Print descending numbers (i to 1)
            for(int j = i; j >= 1; j--)
            {
                System.out.print(j);
            }

            // Print ascending numbers (2 to i)
            for(int j = 2; j <= i; j++)
            {
                System.out.print(j);
            }

            System.out.println();
        }
    }
}

public class PalindromicPattern  
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter value of n: ");
        int n = sc.nextInt();

        Patterns obj = new Patterns();
        obj.printPattern(n);

        sc.close();
    }
}