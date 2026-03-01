#include<stdio.h>

int DollertoINR(int iNo)
{
    return iNo*70;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number in USD : ");
    scanf("%d",&iValue);

    if(iValue < 0)
    {
        printf("Invalid Input.");
        return 0;
    }

    iRet = DollertoINR(iValue);

    printf("Value is: %d",iRet);

    return 0;
}