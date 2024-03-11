/* Simplify and add fractions*/

#include <stdio.h>

int main(void)
{
    int den1, num1, den2, num2, den, num, m, n, r ; // den- denominator, num - numerator

    printf("Enter the fractions (a/b+c/d): ");
    scanf("%d/%d+%d/%d", &num1, &den1, &num2, &den2);

    n = den = den1 * den2;
    m = num = num1 * den2 + num2 * den1;

    while (n != 0){
        r = m % n;
        m = n;
        n = r;
    }

    if (num % den)
        printf("The answer in lowest terms is: %d/%d", num / m, den / m);
    else 
        printf("The answer in lowest terms is: %d", num / den);
    return 0;
}