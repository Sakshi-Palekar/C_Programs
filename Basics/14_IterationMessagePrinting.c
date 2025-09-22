#include <stdio.h>

//Iteration
void Display(int iNumber)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNumber; iCnt++)
    {
        printf("hello \n");
    }
}

int main()
{
    int iNum = 0;
    printf("Enter the Frequency :");
    scanf("%d",&iNum);

    Display(iNum);


    return 0;
}