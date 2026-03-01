import java.util.Scanner;

/*
Pattern Name: Right-Aligned Number Pyramid

Example (n = 5):

    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5

*/

class Patterns 
{
    public void printPattern(int n) 
    {
        for(int i = 1; i <= n; i++) 
        {
            // Print spaces
            for(int j = 1; j <= n - i; j++) 
            {
                System.out.print(" ");
            }

            // Print numbers
            for(int j = 1; j <= i; j++) 
            {
                System.out.print(i + " ");
            }

            System.out.println();
        }
    }
}

public class NumPyramid  
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