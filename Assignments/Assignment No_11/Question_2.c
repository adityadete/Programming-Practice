//      2.Write a program which accept number from user and check whether it contains 0
//      in it or not.

#include <stdio.h>
#include<stdbool.h>
   
bool ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo == 0)
    {
        return true;
    }

    while(iNo>0)
    {
        iDigit = iNo%10;
        if(iDigit == 0)
        {
            return true;
        } 
        iNo = iNo/10;
    }

    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;
   
    printf("Enter Number: ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It contains zero");
    }
    else    
    {
        printf("It is no zero");
    }

    return 0;
}