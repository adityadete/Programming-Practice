//      5.Write a program which accept number from user and return difference between
//      summation of all its factors and non factors.

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum = 0,iSum1 = 0,iDiff = 0;
    
   for(iCnt = 1;iCnt<iNo;iCnt++)
   {
    if(iNo % iCnt == 0)
    {
        iSum  = iSum + iCnt;    
    }
    else
    {
        iSum1  = iSum1 + iCnt;
    }
   }

   iDiff = iSum - iSum1;

   return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference between Summation of Factors and NonFactor is: %d", iRet);

    return 0;
}