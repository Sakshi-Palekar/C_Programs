/*
    Start
        accept percentage from user
            if percentage is less than 0 or greater than 100
                display as invalid
            if percentage is greater than 0 and less than 35
                display as fail
            if percentage is greater than 35 and less than 50
                display as pass class
            if percentage is greater thna 50 and less than 60
                display as second class
            if percentage is greater thna 60 and less than 70
                display as first class
            if percentage is greater thna 70 and less than 100
                display as first class with distinction
      End  
*/

#include <stdio.h>

void DisplayClass(float fPerc)
{
    if((fPerc < 0.0f) || (fPerc > 100.0f))
    {
        printf("Enable to proceed as input is invalid\n");
        return;
    }
    
    if((fPerc >= 0.0f) && (fPerc < 35.0f))
    {
        printf("You are Fail!!!\n");
    }    
    else if((fPerc >= 35.0f) && (fPerc < 50.0f))
    {
        printf("Pass class");
    }
    else if((fPerc >= 50.0f) && (fPerc < 60.0f))
    {
        printf("second class");
    }
    else if((fPerc >= 60.0f) && (fPerc < 70.0f))
    {
        printf("first class");
    }
    else if((fPerc >= 70.0f) && (fPerc < 100.0f))
    {
        printf("first class with distiction");
    }
}

int main()
{
    float fValue = 0.0f;

    printf("Please enter your percentage : \n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}