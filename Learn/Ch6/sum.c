/*Sums up a single line of integers*/

#include <stdio.h>

int main(void)
{
    int num = 1, total = 0;

    printf("This program calculates the sum of a series of integers\n");
    printf("Enter integers, 0 to terminate: ");
    while (num != 0){
        scanf("%d", &num);
        total += num;
    }

    printf("The sum is: %5d\n", total);

    return 0;
}