//      2. Write a program which accept width & height of rectangle from user and calculate
//      its area. (Area = Width * Height)

#include <stdio.h>

double RectangleArea(float fWidth, float fHeight)
{
    return fWidth * fHeight;
}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectangleArea(fValue1, fValue2);

    printf("The area of the rectangle is %.2f\n", dRet);

    return 0;
}