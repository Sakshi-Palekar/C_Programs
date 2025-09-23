#include <stdio.h>
#include <stdbool.h>

bool CheckPerfect(iNo)
{
    int iCnt = 0;
    int iSum = 0;
    bool bResult = false;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo/2 ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
             iSum = iSum + iCnt;
        }
    }

    if(iSum == iNo)
    {
        bResult = true;
    }
    else    
    {
         bResult = false;
    }

    return bResult;
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter the number to check whether the number is perfect or not : ");
    scanf("%d",iValue);

    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("%d is perfect number");
    }
    else
    {
        printf("%d is not a perfect number");
    }
    
    return 0;
}