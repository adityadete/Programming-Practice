//      5. Write a program which accept number from user and display its table in reverse

#include <stdio.h>

void TableRev(int iNo)
{
    for (int i = 10; i >= 1; i--) 
    {
        printf("%d ", iNo * i); 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue); 

    TableRev(iValue); 

    return 0;
}