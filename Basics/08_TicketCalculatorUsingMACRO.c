
#include <stdio.h>
# define ERR_INVALID_AGE -1

int TicketCalculator(int age)
{
    int iPrice = 0;

    if(age < 0)
    {
        return ERR_INVALID_AGE;
    }

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
    if(price == ERR_INVALID_AGE)
    {
        printf("Unable to calculate the price as age is invalid!");
    }
    else
    {
        printf("Ticket price is : %d",price);
    }
    
}
