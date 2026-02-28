//      2. Accept N numbers from user and return difference between frequency of
//      even number and odd numbers.

#include<stdio.h>
#include<stdlib.h>

int Difference( int arr[], int iLength)
{
    int iDiff = 0, iCnt = 0,iCount1 = 0, iCount2 = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        if(arr[iCnt] % 2 == 0)
        {
            iCount1++;
        }
        else
        {
            iCount2++;
        }
   }

    iDiff = iCount1 - iCount2;

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

    printf("Difference between even and odd frequency is %d",iRet);

    free(p);

    return 0;
}