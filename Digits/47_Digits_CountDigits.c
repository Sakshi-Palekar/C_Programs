#include <stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
        iCnt++;
    }

}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);
    printf("number of digits are : %d",iRet);

    return 0;
}