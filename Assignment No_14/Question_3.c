//      3. Accept N numbers from user check whether that numbers contains 11 in
//      it or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check( int arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        if(arr[iCnt] == 11)
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

    int iSize = 0,iCnt = 0;
    bool bRet = false;
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

    bRet = Check(p,iSize);

    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }

    free(p);

    if(p==NULL)
    {
        printf("Memory has been be Deallocated Successfully");
    }

    return 0;
}