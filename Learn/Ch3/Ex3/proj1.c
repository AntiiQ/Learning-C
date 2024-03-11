/* Input a date and prints it in reverse  */

#include <stdio.h>

int main(void)
{
    int months, days, years;

    printf("Enter the date(dd/mm/yyyy): ");
    scanf("%d/%d/%d", &days, &months, &years);

    printf("\nYou entered the date %0.4d%0.2d%0.2d", years, months, days );

    return 0;
}
