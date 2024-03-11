/*Calculates the number of digitss in a number*/

#include <stdio.h>

int main()
{
    int num, digits = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    do // do {statement} while (evaluation)
    {
        digits++;
        num /= 10;
    } while (num != 0);

    printf("That number has %d digit(s)\n", digits);

    return 0;
    

}