#include <stdio.h>
#include <stdlib.h>

int CountOdd(int Arr[], int iSize)
{
    int iCnt = 0, iOdd = 0;
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iOdd++;
        }
    }
    return iOdd;
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
    iRet = CountOdd(ptr,iLength);
    printf("Number of odd elements is : %d",iRet);
    //step3: free the memory
    free(ptr);

    return 0;
}