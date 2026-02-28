//      3. Write a program which accept range from user and return addition of all numbers
//      in between that range. (Range should contains positive numbers only)

#include <stdio.h>
   
int RangeSum(int iStart,int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart <= 0 || iEnd <= 0)
    {
        printf("Invalid range");
        return 0;
    }

    if(iStart > iEnd)
    {
        printf("Invalid range");
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iCnt + iSum;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter a start value: ");
    scanf("%d",&iValue1);

    printf("Enter a end valuse: ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    if(iRet > 0)
    {
        printf("Sum of range is: %d",iRet);
    }
    return 0;
}