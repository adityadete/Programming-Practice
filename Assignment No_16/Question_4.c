//      4. Accept N numbers from user and display all such numbers which contains
//      3 digits in it.

#include<stdio.h>
#include<stdlib.h>

void Digits( int arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        if(arr[iCnt] > 99)
        {
            printf("%d\t",arr[iCnt]);
        }
    }

}

int main()
{
    int iSize = 0,iCnt = 0;
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

    Digits(pArr,iSize);
    return 0;
}