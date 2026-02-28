//      4.Write a program which accept number from user and count frequency of 4 in it.

#include<stdio.h>
 
int CountFour(int iNo)
{
    int iDigit = 0;
    int iTarget = 4;
    int iCount = 0;

    while(iNo>0)
    {
        iDigit = iNo%10;
        if(iTarget == iDigit)
        {
            iCount++;
        }
        iNo = iNo/10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
   
    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("Frequency of four is: %d",iRet);

    return 0;
}