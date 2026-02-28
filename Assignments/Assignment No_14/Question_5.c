//      5. Accept N numbers from user and accept one another number as NO ,
//      return frequency of NO form it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[], int iLength, int iNo)
{
    int iCnt = 0,iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iFreq++;
        }
    }
    return iFreq;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0,iNo = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter number to calculate frequency: ");
    scanf("%d",&iNo);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize, iNo);

    printf("Frequency of %d is %d",iNo,iRet);

    free(p);
    p = NULL;

    return 0;
}
