//      3.Write a program to find factorial of given number.

#include<stdio.h>

int Factorial(int iNo)
{ 
    int Fact = 1;

    for(int iCnt = iNo; iCnt >= 1; iCnt--)
    {
        Fact = Fact * iCnt;
    }
    return Fact;
}

int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of given Number is %d",iRet);

    return 0;
}