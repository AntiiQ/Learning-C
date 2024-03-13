/*Calculates num of digits in an int*/

#include <stdio.h>

int countDigits(int number);

int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The number %d has %d digits.", number, countDigits(number));

    return 0;
}

int countDigits(int number)
{
    int count = 0;
    while (number != 0){
        number /= 10;
        count++;
    }

    return count;
}