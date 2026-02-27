//      5. Accept N numbers from user and display summation of digits of each
//      number.

#include<stdio.h>
#include<stdlib.h>

void DigitSum(int arr[], int size)
{
    int iCnt = 0, iNum = 0, iDigit = 0, iSum = 0;

    for(iCnt = 0; iCnt < size; iCnt++)
    {
        iNum = abs(arr[iCnt]);   // Handle negative numbers
        iSum = 0;

        while(iNum != 0)
        {
            iDigit = iNum % 10;
            iSum = iSum + iDigit;
            iNum = iNum / 10;
        }

        printf("%d\t", iSum);
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *pArr = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    if(iSize <= 0)
    {
        printf("Invalid size\n");
        return -1;
    }

    pArr = (int*)malloc(iSize * sizeof(int));

    if(pArr == NULL)
    {
        printf("Memory allocation failed\n");
        return -1;
    }

    printf("Enter elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&pArr[iCnt]);
    }

    printf("Summation of digits:\n");
    DigitSum(pArr,iSize);

    free(pArr);

    return 0;
}