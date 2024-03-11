/*  Determines the smallest number of billss needed to pay for somethin  */

#include <stdio.h>

int main(void)
{
    int twenties, tens, fives, ones, price;

    printf("What is the price? ");
    scanf("%d", &price);

    twenties = price / 20;
    printf("$20 bills: %d\n", twenties);

    tens = (price- 20*twenties) / 10;
    printf("$10 bills: %d\n", tens);

    fives = (price - 20*twenties - 10*tens) / 5;
    printf(" $5 bills: %d\n", fives);

    ones = (price - 20*twenties - 10*tens - 5*fives);
    printf(" $5 bills: %d\n", ones);

    return 0;

    // order of opperations still works
}