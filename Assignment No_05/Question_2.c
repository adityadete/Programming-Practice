//      2.Write a program which accept number from user and print numbers till that
//      number.

#include <stdio.h>

void Display(int iNo)
{
    for(int i = 1; i <= iNo; i++)
    {
        printf("%d\t", i);
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