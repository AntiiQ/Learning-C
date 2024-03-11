/* Find the balance on a loan after the 1st,2nd,3rd month */

#include <stdio.h>

int main(void)
{
    float loan, annual_rate, monthly_rate, payment;
    int payments;


    printf("Enter amount of loan:");
    scanf("%f", &loan);

    printf("Enter interest rate:");
    scanf("%f", &annual_rate);
    monthly_rate = 1 + (annual_rate / 100.0 / 12);


    printf("Enter monthly payment:");
    scanf("%f", &payment);

    printf("Enter number of monthly payments: ");
    scanf("%d", &payments);

    for (int i = 1; i<=payments; i++){
        loan = (loan - payment) * monthly_rate;
        printf("Balance after payment number %d: $%.2f\n", i, loan);
    }


    return 0;

}