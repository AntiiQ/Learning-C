/* Find the balance on a loan after the 1st,2nd,3rd month */

#include <stdio.h>

int main(void)
{
    float loan, annual_rate, monthly_rate, payment;

    printf("Enter amount of loan:");
    scanf("%f", &loan);

    printf("Enter interest rate:");
    scanf("%f", &annual_rate);
    monthly_rate = (annual_rate / 100.0 / 12);
    printf("%f", monthly_rate);

    printf("Enter monthly payment:");
    scanf("%f", &payment);

    printf("Balance after first payment: %.2f\n", (loan - payment) * (1 + monthly_rate));
    printf("Balance after second payment: %.2f\n", (loan - 2*payment) * (1 + monthly_rate));
    printf("Balance after third payment: %.2f\n", (loan - 3*payment) * (1 + monthly_rate));

    return 0;
    
    // HOLY SHIT, THE %.pf THING ROUNDS SHITE!!!!!!!!!!!! HELL YEAH! I THOUGHT IT WAS JUST TRUNCATING
}