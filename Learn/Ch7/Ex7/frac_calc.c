/* Simplify and calculate fractions*/

#include <stdio.h>

int main(void)
{
    int den1, num1, den2, num2, den, num, m, n, r ; // den- denominator, num - numerator, m,n,r are for GCD
    char operator;

    printf("Enter the fractions and operation (a/b+c/d): ");
    scanf("%d/%d %c%d/%d", &num1, &den1, &operator, &num2, &den2);


    switch (operator){
        case '+':   den = den1 * den2;
                    num = num1 * den2 + num2 * den1;
                    break;

        case '-':   den = den1 * den2;
                    num = num1 * den2 - num2 * den1;
                    break;
        
        case '*':   den = den1 * den2;
                    num = num1 * num2;
                    break;

        case '/':   den = den1 * num2;
                    num = num1 * den2;
                    break;

        default:    printf("ILLEGAL");
                    break;
    }
    

    n = den, m = num;

    while (n != 0){ // greatest common divisor of the fraction
        r = m % n;
        m = n;
        n = r;
    }

    if (num % den)
        printf("The answer in lowest terms is: %d/%d\n", num / m, den / m);
    else 
        printf("The answer in lowest terms is: %d\n", num / den);

    return 0;
}