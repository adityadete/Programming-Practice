//      4. Accept N numbers from user and return frequency of 11 form it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[], int iLength)
{
    int iCnt = 0,iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(arr[iCnt] == 11)
        {
            iFreq++;
        }
    }
    return iFreq;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

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

    iRet = Frequency(p, iSize);

    printf("Frequency of 11 is %d",iRet);

    free(p);
    p = NULL;

    return 0;
}
