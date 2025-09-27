#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0, iEven = 0;
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEven++;
        }
    }
    return iEven;
}

int main()
{
    int iLength = 0,iCnt = 0,iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    //step1: Allocate the memory
    ptr = (int*)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    //step2: Use the memory
    iRet = CountEven(ptr,iLength);
    printf("Number of even elements is : %d",iRet);
    //step3: free the memory
    free(ptr);

    return 0;
}