//      3. Write a program which accept distance in kilometre and convert it into meter. (1
//      kilometre = 1000 Meter)

#include <stdio.h>

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance in kilometers: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("The distance in meters is %d\n", iRet);

    return 0;
}