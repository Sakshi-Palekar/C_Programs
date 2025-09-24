#include <stdio.h>

int SumDigits(int iNo)
{
    int iCnt = 0, iDigit = 0, iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
        iSum = iSum + iDigit;
    }

}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);
    printf("Additon of digits is : %d",iRet);

    return 0;
}