#include <stdio.h>

//Iteration
void Display(int iNumber)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\n",iNumber);
    }
}

int main()
{
    int iNum = 0;
    printf("Enter number :");
    scanf("%d",&iNum);

    Display(iNum);


    return 0;
}