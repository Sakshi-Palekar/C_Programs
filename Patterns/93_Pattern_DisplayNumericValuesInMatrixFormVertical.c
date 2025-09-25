/*
Input : 4    4
Output :1   2   3   4
        1   2   3   4
        1   2   3   4
        1   2   3   4

/*
    Start
        Iterate from 1 to that frequency
            display 
                1   2   3   4
                1   2   3   4
                1   2   3   4
                1   2   3   4
            on screen
        continue
    Stop
*/

#include <stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j<=iCol; j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of columns : ");
    scanf("%d",&iValue2);
    
    Display(iValue1, iValue2);

    return 0;
}

//Time Complexity : O(N)
//where N >= 0 and N <= Infinity