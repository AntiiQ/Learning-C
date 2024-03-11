/*Messing about with factorials*/


#include <stdio.h>

int main(void)
{
    int n;

    long double factorial = 1;

    printf("Enter a positive integer: "); // max is 20 sadly for long long // long doubles will go inefiently BUT it will only be an approximation, not the actual value
                                                                           // largest it will still be right on my achine is 26!
    scanf("%d", &n);

    while (n > 1){
        factorial *= n--;
    }

    printf("Factorial: %.Lf", factorial);

    return 0;
}