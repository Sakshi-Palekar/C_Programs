#include <stdio.h>
#include <stdbool.h>

bool CheckEven(int iNo)
{
    bool bResult = false;

    if((iNo % 2) == 0)
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

    printf("Enter the number to check whether the number is even or odd : ");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);
    if(bRet == true)
    {
        printf("%d is an Even number",iValue);
    }
    else
    {
        printf("%d is an odd number",iValue);
    }

    return 0;
  
}