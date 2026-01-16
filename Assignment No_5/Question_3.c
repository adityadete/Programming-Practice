//      3. Write a program which accept number from user and print its numbers line.

#include <stdio.h>

void PrintNumberLine(int iNo)
{
    for(int i = -iNo; i <= iNo; i++)
    {
        printf("%d ", i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    PrintNumberLine(iValue);

    return 0;
}