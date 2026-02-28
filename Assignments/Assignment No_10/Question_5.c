//      5.Write a program which accept accept range from user and display all numbers in
//      between that range in reverse order.

#include <stdio.h>
   
void RangeDisplayRev(int iStart,int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf(" %d ",iCnt);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter a start value: ");
    scanf("%d",&iValue1);

    printf("Enter a end valuse: ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}