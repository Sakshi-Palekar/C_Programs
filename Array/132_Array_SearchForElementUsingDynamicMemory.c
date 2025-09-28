#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Search(int Arr[], int iSize, int iValue)
{
    int iCnt = 0;
    bool bFlag = false;
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iValue)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int iLength = 0,iCnt = 0;
    bool bRet = false;
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
    bRet = Search(ptr,iLength,11);
    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present\n");
    }
    
    //step3: free the memory
    free(ptr);

    return 0;
}