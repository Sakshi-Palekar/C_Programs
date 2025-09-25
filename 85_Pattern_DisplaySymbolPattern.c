/*
Input : 4 #
Output :#   #   #   #
*/

/*
    Start
        Iterate from 1 to that frequency
            display # # # # on screen
        continue
    Stop
*/

#include <stdio.h>

void Display(int iNo,char ch)
{
    int iCnt = 0;
    //updater
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;iCnt <= iNo ; iCnt++)       
    {
        printf("%c\t",ch);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;
    char cValue = '\0';

    printf("Enter Frequency : \n");
    scanf("%d",&iValue);

    printf("Enter Symbol : \n");
    scanf(" %c",&cValue);
    
    printf("Accepted character is %c \n",cValue);
    Display(iValue, cValue);

    return 0;
}

//Time Complexity : O(N)
//where N >= 0 and N <= Infinity