//      4.Write a program which accept number from user and return multiplication of all
//      digits.

#include<stdio.h>
 
int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo>0)
    {
        iDigit = iNo%10;
        iMul = iMul * iDigit;
        iNo = iNo/10;
    }
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
   
    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}