//      3. Accept N numbers from user and return the difference between largest
//      and smallest number.

#include<stdio.h>
#include<stdlib.h>

int Diff(int *arr,int size)
{
    int iCnt = 0,iDiff = 0,iLarge = 0,iSmall = 0;
    iLarge = arr[0];

    for(iCnt = 1; iCnt<size; iCnt++)
    {
        if(iLarge < arr[iCnt])
        {
            iLarge = arr[iCnt];
        }
        else
        {
            iSmall = arr[iCnt];
        }
    }

    iDiff = iLarge - iSmall;

    return iDiff;
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

    iRet = Diff(pArr,iSize);

    printf("Difference between largest and smallest element is %d",iRet);
    return 0;
}