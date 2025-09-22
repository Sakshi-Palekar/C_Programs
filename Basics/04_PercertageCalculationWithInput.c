///////////////////////////////////////////////
//
//  File name : 4_PercertageCalculationWithInput.c
//  Description : Used to calculate percentage
//  Author : Sakshi Pradip Palekar
//  Dare : 28/04/2025
//  
///////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int Total = 0;
    int Obtained = 0;
    float Percentage = 0.0f;

    printf("Enter your total marks : \n");
    scanf("%d",&Total);

    printf("Enter your obtained marks : \n");
    scanf("%d",&Obtained);

    Percentage = ((float)Obtained / (float)Total) * 100;

    printf("Percentage is : %.2f%%\n",Percentage);


    return 0;
}
