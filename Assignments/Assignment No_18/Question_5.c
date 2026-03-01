#include<stdio.h>

int Fact(int iNo)
{
    int iCnt = 0,iFact1 = 1,iFact2 = 1, iDiff = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
        else
        {
            iFact2 = iFact2 * iCnt;
        }
    }

    iDiff = iFact1 - iFact2;

    if(iDiff < 0)
    {
        iDiff = -iDiff;
    }

    return iDiff;
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

    printf("Difference between odd and even Factorial is: %d",iRet);

    return 0;
}