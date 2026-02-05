//      1.Write a program which accept number from user and print that number of $ & *
//      on screen.

#include <stdio.h>

void Pattern(int iNo)
{
    for(int i = 0; i < iNo; i++)
    {
        printf("$ * \t");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}