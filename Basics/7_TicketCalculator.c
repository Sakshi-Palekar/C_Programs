
#include <stdio.h>

int TicketCalculator(int age)
{
    if(age >= 0 && age <= 5)
    {
        return 0;
    }
    else if(age > 6 && age <= 18)
    {
        return 700;
    }
    else if(age > 18 && age <= 50)
    {
        return 999;
    }
    else if(age > 50 )
    {
        return 500;
    }
}

int main()
{
    int iAge = 0;
    printf("Enter your Age: ");
    scanf("%d",&iAge);

    int price = 0;
    price = TicketCalculator(iAge);
    printf("Ticket price is : %d",price);
}