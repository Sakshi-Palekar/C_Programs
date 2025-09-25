/*
Input : 
Output :*   *   *
        *   *   *
        *   *   *
*/

/*
    Start
        Iterate from 1 to that frequency
            display * on screen
        continue
    Stop
*/

#include <stdio.h>

void Display()
{
    int i = 0, j = 0;

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j<=3 ; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}


int main()
{
    Display();

    return 0;
}

//Time Complexity : O(N)
//where N >= 0 and N <= Infinity