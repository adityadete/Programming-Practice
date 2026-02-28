//      2. Accept N numbers from user and return the smallest number.

#include<stdio.h>
#include<stdlib.h>

int Smallest(int *arr,int size)
{
    int iCnt = 0,iSmall = 0;
    iSmall = arr[0];

    for(iCnt = 1; iCnt<size; iCnt++)
    {
        if(iSmall > arr[iCnt])
        {
            iSmall = arr[iCnt];
        }
    }

    return iSmall;
}

int main()
{
    int iSize = 0,iCnt = 0,iRet = 0;
    int *pArr;

    printf("How many number you want to enter: ");
    scanf("%d",&iSize);

    pArr = (int*)malloc(iSize * sizeof(int));

    if(pArr==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter Values: \n");
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&pArr[iCnt]);
    }

    iRet = Smallest(pArr,iSize);

    printf("Smallest element is %d",iRet);
    return 0;
}