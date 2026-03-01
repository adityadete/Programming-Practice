#include<stdio.h>

int Fact(int iNo)
{
    int iCnt = 0,iFact = 1;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
        iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    if(iValue < 0)
    {
        printf("Invalid Input.");
        return 0;
    }

    iRet = Fact(iValue);

    printf("Odd Factorial is: %d",iRet);

    return 0;
}