#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iLength = 0;
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

    //step2: Use the memory
    //use 

    //step3: free the memory
    free(ptr);


    return 0;
}