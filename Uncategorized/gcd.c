/*title*/

#include <stdio.h>

int gcd(int, int);

int main(void)
{
    int x, y;
    printf("Enter two numbers(1 2): ");
    scanf("%d%d", &x, &y);

    printf("The GCD of those numbers is: %d", gcd(x, y));

    return 0;
}

int gcd(int x, int y)
{
    while (y != 0)
}