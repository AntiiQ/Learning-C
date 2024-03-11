/* Calcualtes the brokers commission + Competitor*/

#include <stdio.h>

int main(void)
{
    float transaction, commission1, commission2, share, price_ps; // price per share

    printf("Enter number of shares: $");
    scanf("%f", &share);

    printf("Enter price of one share: ");
    scanf("%f", &price_ps);

    transaction = share * price_ps;

    if (transaction < 2500.00f) 
        commission1 = 30.00f + 0.017f * transaction;
    
    else if (transaction < 6250.00f)
        commission1 = 56.00f + 0.0066f * transaction;
    else if (transaction < 20000.00f) 
        commission1 = 76.00f + 0.0034f * transaction;
    else if (transaction < 50000.00f) 
        commission1 = 100.00f + 0.0022f * transaction;
    else if (transaction < 500000.00f)
        commission1 = 155.00f + 0.0011f * transaction;
    else 
        commission1 = 255.00f + 0.0009f * transaction;

    if (commission1 < 39) commission1 = 39;
    
    printf("Commission for broker A: $%.2f\n", commission1);

    if (share < 2000)
        commission2 = 33 + .03 * share;
    else 
        commission2 = 33 + .02 * share;

    printf("Commission for broker B: $%.2f\n", commission2);    
    

    return 0;
}