//      5. Accept N numbers from user and return product of all odd elements.

#include<stdio.h>
#include<stdlib.h>

int ProductOdd( int arr[], int iLength)
{
    int iCnt = 0,iProduct = 1;
    int iFlag = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        if(arr[iCnt] % 2 != 0)
        {
            iProduct = iProduct * arr[iCnt];
            iFlag = 1;
        }
   }

   if(iFlag == 0)
    {
        return 0;   // No odd numbers found
    }

   return iProduct;
}

int main()
{

    int iSize = 0,iCnt = 0,iRet = 0;
    int *p = NULL;

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

    iRet = ProductOdd(p,iSize);

    printf("Product of Odd Numbers are %d",iRet);

    free(p);

    return 0;
}