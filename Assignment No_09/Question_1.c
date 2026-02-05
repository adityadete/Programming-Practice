//      1.Write a program which accept radius of circle from user and calculate its area.
//      Consider value of PI as 3.14. (Area = PI * Radius * Radius)

#include <stdio.h>
    
double CircleArea(float fRadius)
{
    float PI = 3.14;
    return PI * fRadius * fRadius;
}
 
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter a Radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %.2f",dRet);

    return 0;
}