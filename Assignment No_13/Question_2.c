//      2. Accept N numbers from user and display all such elements which are
//      divisible by 5.

#include<stdio.h>
#include<stdlib.h>

void Display( int arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        if(arr[iCnt] % 5 == 0)
        {
            printf("%d is Divisible by 5 \n",arr[iCnt]); 
        }
  }

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

    Display(p,iSize);

    free(p);

    if(p==NULL)
    {
        printf("Memory has been be Deallocated Successfully");
    }

    return 0;
}