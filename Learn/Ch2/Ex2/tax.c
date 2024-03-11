/* Price after 5% Tax*/

#include <stdio.h>

int main(void)
{
    float price;

    printf("How much does it cost? $");
    scanf("%f", &price);

    printf("\nThe price after tax will be: $%.2f", price * 1.05);

    return 0;
}