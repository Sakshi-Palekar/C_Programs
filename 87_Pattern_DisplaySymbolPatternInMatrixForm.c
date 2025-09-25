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
    printf("*\t");
    printf("*\t");
    printf("*\t");

    printf("\n");

    printf("*\t");
    printf("*\t");
    printf("*\t");

    printf("\n");

    printf("*\t");
    printf("*\t");
    printf("*\t");

    printf("\n");
}


int main()
{
    Display();

    return 0;
}

//Time Complexity : O(N)
//where N >= 0 and N <= Infinity