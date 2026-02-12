//      4. Accept N numbers from user and accept Range, Display all elements from
//      that range

#include<stdio.h>
#include<stdlib.h>

void Range( int arr[], int iLength, int iNo1, int iNo2)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        if (arr[iCnt] >= iNo1 && arr[iCnt] <= iNo2) {
            printf("%d ", arr[iCnt]);
        }
   }
}

int main()
{

    int iSize = 0,iCnt = 0,iStart = 0, iEnd = 0;
    int *p = NULL;

    printf("Enter Number of elements: \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter Starting Range: \n");
    scanf("%d",&iStart);
    printf("Enter Stoping Range: \n");
    scanf("%d",&iEnd);
   
   printf("Enter %d elements: \n",iSize);

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
    scanf("%d",&p[iCnt]);
   }

    Range(p,iSize,iStart,iEnd);


    free(p);

    return 0;
}