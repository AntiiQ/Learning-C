 /*Function to convert an arbitraty integers into the smallest number of 20, 10, 5, 1*/

#include <stdio.h>

 void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){
    *twenties = dollars / 20;
    dollars -= *twenties * 20;

    *tens = dollars / 10;
    dollars -= *tens * 20;

    *fives = dollars /5;
    dollars -= *fives  * 2;

    *ones = dollars;
 }

 int main(void)
 {
    int dollars;
    int twenties, tens, fives, ones;

    printf("Enter the number of dollars: $");
    scanf("%d", &dollars);

    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("You will be paid in:\n20$ - %d\n10$ - %d\n5$ - %d\n1$ - %d\n", twenties, tens, fives, ones);

    return 0;
 }