/*Sums up a single line of integers*/

#include <stdio.h>

int main(void)
{
    long long num = 1, total = 0;

    printf("This program calculates the sum of a series of integers \n");
    printf("Enter integers, 0 to terminate: ");
    while (num != 0){
        scanf("%lld", &num);
        total += num;
    }

    printf("The sum is: %5lld\n", total);

    return 0;
}