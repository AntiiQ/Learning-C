/*Factorial*/
// max 20 wwww
#include <stdio.h>

unsigned long long factorial(long long int number)
{
    if (number == 0) return 1;

    return number * factorial(number-1);
}

int main(void)
{
    unsigned long long number;

    printf("Enter a number: ");
    scanf("%lld", &number);

    printf("%lld! = %lld", number, factorial(number));

    return 0;
}