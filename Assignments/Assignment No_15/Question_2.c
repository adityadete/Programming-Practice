//      2. Accept N numbers from user and accept one another number as NO ,
//      return index of first occurrence of that NO.

#include<stdio.h>
#include<stdlib.h>

int Frequency( int arr[], int iLength, int ifind)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
   {
     if(arr[iCnt] == ifind)
     {
        break;
     }
   }

   if(iLength == iCnt)
   {
    return -1;
   }
   else
   {
    return iCnt;
   }

}

int main()
{

    int iSize = 0,iCnt = 0, iSearch = 0,iRet = 0;
    int *p = NULL;

    printf("Enter Number of elements: \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter Element to Find index Numbers: ");
    scanf("%d",&iSearch);
   
   printf("Enter %d elements: \n",iSize);

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
    scanf("%d",&p[iCnt]);
   }

    iRet = Frequency(p,iSize,iSearch);

    if(iRet < 0)
    {
        printf("Element is Not Present");
    }
    else
    {
        printf("Index number of that element is %d",iRet);

    }

    free(p);

    return 0;
}