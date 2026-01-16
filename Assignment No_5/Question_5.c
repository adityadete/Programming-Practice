//      5. Write a program which accept N and print first 5 multiples of N.
#include <stdio.h>

void MultipleDisplay(int iNo)
{
    for(int i = 1; i <= 5; i++)
    {
        printf("%d ", iNo * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}