//      1. Accept N numbers from user and return frequency of even numbers.


#include<stdio.h>
#include<stdlib.h>

int CountEven( int arr[], int iLength)
{
    int iDiff = 0, iCnt = 0,iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        if(arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
   }

    return iCount;
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

    iRet = CountEven(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}