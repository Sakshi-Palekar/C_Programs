#include <stdio.h>
# define ERR_INVALID_AGE -1

int TicketCalculator(int iage)
{
    int iPrice = 0;

    if(iage < 0)
    {
        return ERR_INVALID_AGE;
    }

    if(iage >= 0 && iage <= 5)
    {
        iPrice = 0;
    }
    else if(iage > 5 && iage <= 18)
    {   
        iPrice = 700;
    }
    else if(iage > 18 && iage <= 50)
    {
        iPrice = 999;
    }
    else if(iage > 50 )
    {
        iPrice = 500;
    }

    return iPrice;
}

int main()
{
    int iAge = 0;
    printf("Enter your Age: ");
    scanf("%d",&iAge);

    int price = 0;
    price = TicketCalculator(iAge);

    if(price == ERR_INVALID_AGE)
    {
        printf("Unable to calculate the price as age is invalid!");
    }
    else
    {
        printf("Ticket price is : %d",price);
    }
    
}