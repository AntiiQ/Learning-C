/*Computes the value of a single polynomial*/
#include <stdio.h>

int polynomial(int x)
{
    return 3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - (x*x) + 7*(x) -6;
}

int main(void)
{
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("The evaluated polynomial for %d is: %d", x,polynomial(x));

    return 0;
}