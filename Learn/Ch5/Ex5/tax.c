/* calculate the tax on a specific income */

#include <stdio.h>

int main()
{
    float income, tax = 0;

    printf("Enter income: ");
    scanf("%f", &income);

    if (income > 7000)
        tax = (income - 7000) * 0.06 + 230.5;
    else if (income > 5250)
        tax = (income - 5250) * 0.05 + 142.5;
    else if (income > 3750)
        tax = (income - 3750) * 0.04 + 82.5;
    else if (income > 2250)
        tax = (income - 2250) * 0.03 + 37.5;
    else if (income > 750)
        tax = (income - 750) * 0.02 + 7.5;
    else 
        tax = income * 0.01;

    printf("Tax: %.2f", tax);

    return 0;
}