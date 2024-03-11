/* displays the inputed telephone number in a diffrent format */

#include <stdio.h>

int main()
{
    int st, nd, rd;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &st, &nd, &rd);

    printf("You entred %d.%d.%d", st, nd, rd);

    return 0;
}