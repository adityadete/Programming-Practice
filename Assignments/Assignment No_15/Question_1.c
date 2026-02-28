//      1. Accept N numbers from user and accept one another number as NO ,
//      check whether NO is present or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Frequency( int arr[], int iLength, int ifind)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
   {
     if(arr[iCnt] == ifind)
     {
        break;
     }
   }

    if(iCnt == iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{

    int iSize = 0,iCnt = 0, iSearch = 0;
    int *p = NULL;
    bool bRet = false ;

    printf("Enter Number of elements: \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter Element to Search: ");
    scanf("%d",&iSearch);
   
   printf("Enter %d elements: \n",iSize);

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
    scanf("%d",&p[iCnt]);
   }

    bRet = Frequency(p,iSize,iSearch);

    if(bRet == true)
    {
        printf("Element %d is Present ",iSearch);
    }
    else
    {
        printf("Element %d is not Present",iSearch);
    }

    free(p);

    return 0;
}