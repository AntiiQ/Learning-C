/* Simplify fractions*/

#include <stdio.h>

int reduce(int numerator, int denomenator, int* reduced_numerator, int* reduced_denomenator){
    int m, n, r;

    n = denomenator;
    m = numerator;

    while (n != 0){
        r = m % n;
        m = n;
        n = r;
    }

    *reduced_numerator = numerator / m;
    *reduced_denomenator = denomenator /m;
}

int main(void)
{
    int  num, den; // den- denominator, num - numerator

    printf("Enter the fraction (a/b): ");
    scanf("%d/%d", &num, &den);

    reduce(num, den, &num, &den);

    if (num % den)
        printf("The answer in lowest terms is: %d/%d", num, den);
    else 
        printf("The answer in lowest terms is: %d", num / den);

    return 0;
}