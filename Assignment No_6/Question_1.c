//      1. Write a program which accept number from user and if number is less than 50
//      then print small , if it is greater than 50 and less than 100 then print medium, if it is
//      greater than 100 then print large.

#include <stdio.h>

void Number(int iValue)
{
    if (iValue < 50)
    {
        printf("Small\n");
    }
    else if (iValue >= 50 && iValue < 100)
    {
        printf("Medium\n");
    }
    else 
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}