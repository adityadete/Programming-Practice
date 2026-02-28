//      1.Write a program which accept number from user and display below pattern.

#include <stdio.h>
   
void Display(int iValue)
{
 
    if(iValue < 0)
    {
        iValue = -iValue;
    }

    for(int iCnt = 0; iCnt<=iValue; iCnt++)
    {
        printf("* ");
    }
    for(int iCnt = 0; iCnt<=iValue; iCnt++)
    {
        printf("# ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}