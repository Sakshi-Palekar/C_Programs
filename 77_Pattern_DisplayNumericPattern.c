//Input : 4
//Output : 1    2   3   4

/*
    Start
        Iterate from 1 to that frequency
            display 1 - 4 on screen
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
    
    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
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