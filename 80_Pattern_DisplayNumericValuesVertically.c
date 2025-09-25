/*Input : 4
Output : 
        4    
        3   
        2   
        1   
        0
*/

/*
    Start
        Iterate from 1 to that frequency
            display 4 - 1 on screen vertically
        continue
    Stop
*/


#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //updater
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo;iCnt >= 0; iCnt--)
    {
        printf("%d\n",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Frequency : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

//Time Complexity : O(N)
//where N >= 0 and N <= Infinity