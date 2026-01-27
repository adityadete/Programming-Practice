//      5. Write a program which returns difference between Even factorial and odd factorial
//      of given number.

#include <stdio.h>
 
int EvenFactorial(int iNo)
{
    int fact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i = 1; i <= iNo; i++)
    {
        if(i % 2 == 0)
        {
            fact = fact * i;
        }
    }
    return fact;
}

int OddFactorial(int iNo)
{
    int fact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i = 1; i <= iNo; i++)
    {
        if(i % 2 != 0)
        {
            fact = fact * i;
        }
    }
    return fact;
}

int main()
{
    int iValue = 0, iEvenFact = 0, iOddFact = 0, iDiff = 0;

    printf("Enter Your Number: ");
    scanf("%d", &iValue);

    iEvenFact = EvenFactorial(iValue);
    iOddFact  = OddFactorial(iValue);

    iDiff = iEvenFact - iOddFact;

    printf("Difference between Even and Odd Factorial is %d\n", iDiff);

    return 0;
}
