//      3.Write a program to find Even factorial of given number.

#include<stdio.h>

int Factorial(int iNo)
{ 

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int Fact = 1;

    for(int iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt %2==0)
        {
            Fact = Fact * iCnt;
        }
    }
    return Fact;
}

int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Even Factorial of given Number is %d",iRet);

    return 0;
}