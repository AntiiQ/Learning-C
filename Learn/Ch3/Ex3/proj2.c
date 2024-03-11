#include <stdio.h>

int main(void)
{
    int number, day, month, year;
    float price;


    printf("Enter item number: ");
    scanf("%d", &number);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter the purchase date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%-1d\t\t$%7.2f\t%.2d/%.2d/%.4d", number, price, day, month, year);

    return 0;

}
