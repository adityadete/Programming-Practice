//      4. Write a program which accepts N from user and print all odd numbers up to N.

#include <stdio.h>

void OddDisplay(int iNo)
{
    for(int i = 1; i <= iNo; i=i+2)
    {
        printf("%d ", i);
    }
}
 
int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}