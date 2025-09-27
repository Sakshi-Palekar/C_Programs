#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iLength = 0,iCnt = 0;
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

    printf("Elements of the array are : \n");
    
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }

    //step2: Use the memory
    //use 

    //step3: free the memory
    free(ptr);

    return 0;
}