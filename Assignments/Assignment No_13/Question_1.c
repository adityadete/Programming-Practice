//      1. Accept N numbers from user and return difference between summation
//      of even elements and summation of odd elements.

#include<stdio.h>
#include<stdlib.h>

int Difference( int arr[], int iLength)
{
    int iDiff = 0, iCnt = 0,iSum = 0, iSum1 = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        if(arr[iCnt] % 2 == 0)
        {
            iSum = iSum + arr[iCnt]; 
        }
        else
        {
            iSum1 = iSum1 + arr[iCnt];
        }
   }

    iDiff = iSum - iSum1;

    if(iDiff < 0)
    {
        iDiff = -iDiff;
    }

     return iDiff;
}

int main()
{

    int iSize = 0,iCnt = 0, iRet = 0;
    int *p = 0;

    printf("Enter Number of elements: \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
   
   printf("Enter %d elements: \n",iSize);

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
    scanf("%d",&p[iCnt]);
   }

    iRet = Difference(p,iSize);

    printf("Difference between even and odd is %d",iRet);

    free(p);

    return 0;
}