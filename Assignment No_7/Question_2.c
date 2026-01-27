//      2. Accept amount in US dollar and return its corresponding value in Indian currency.
//      Consider 1$ as 70 rupees.
 
#include <stdio.h>
 
int Display(int iValue)
{
    return iValue * 70;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a amount US dollar ($): ");
    scanf("%d", &iValue);

    iRet = Display(iValue);

    printf("Amount in rupees: %d",iRet);

    return 0;
}