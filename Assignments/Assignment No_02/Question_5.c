//5. Accept number from user and check whether number is even or
//odd.

#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
    if(iNo%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
 
int main()
{
    int iValue = 0;
    bool bRet = true;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is odd");
    }

    return 0;
}