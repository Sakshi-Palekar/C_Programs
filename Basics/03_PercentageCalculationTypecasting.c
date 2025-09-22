///////////////////////////////////////////////
//
//  File name : 4_PercertageCalculationTypecsting.c
//  Description : Used to calculate percentage
//  Author : Sakshi Pradip Palekar
//  Dare : 28/04/2025
//  
///////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int Total = 400;
    int Obtained = 323;
    float Percentage = 0.0f;

    Percentage = ((float)Obtained / (float)Total) * 100;

    printf("Percentage is : %.2f%%\n",Percentage);


    return 0;
}
