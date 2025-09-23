#include <stdio.h>
#include <stdbool.h>

bool CheckEven(int iNo)
{
    bool bResult = false;

    if((iNo % 5) == 0)
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

    printf("Enter the number to check whether the number is divisible by 5 : ");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);
    if(bRet == true)
    {
        printf("%d is divisible by 5",iValue);
    }
    else
    {
        printf("%d is not divisible by 5",iValue);
    }

    return 0;
  
}