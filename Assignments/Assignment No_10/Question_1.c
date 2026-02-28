//      1.Write a program which accept range from user and display all numbers in between
//      that range.

#include <stdio.h>
   
void RangeDisplay(int iStart,int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }
    
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
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

    RangeDisplay(iValue1,iValue2);

    return 0;
}