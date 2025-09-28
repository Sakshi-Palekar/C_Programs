#include <stdio.h>
#include <stdlib.h>

void MaximumMinimum(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0,iMax = 0, iMin = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid input");
        return;
    }

    iMin = Arr[0];
    iMax = Arr[0];
     
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {   
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    printf("\nMaximum number is : %d\n",iMax);
    printf("Minimum number is : %d\n",iMin);
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0,iCnt = 0;
    int iRet = 0;

    printf("\nEnter number of elements : ");
    scanf("%d",&iLength);

    iPtr = (int*)malloc(iLength * sizeof(int));
    if(NULL == iPtr)        
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    
    printf("\nEnter the elements :- \n");
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        printf("\nEnter the number %d : ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }


    MaximumMinimum(iPtr, iLength);

    free(iPtr);

    return 0;
}
//Time complexity = O(N)