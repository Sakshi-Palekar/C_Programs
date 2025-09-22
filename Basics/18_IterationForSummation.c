#include <stdio.h>

//Iteration
int  Calculate(int iNumber)
{
    int iCnt = 0, iSum;
    for(iCnt = iNumber; iCnt >= 1; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iNum = 0, iRet = 0;
    printf("Enter the Frequency :");
    scanf("%d",&iNum);

    iRet = Calculate(iNum);
    printf("Addition is : %d ", iNum);

    return 0;
}