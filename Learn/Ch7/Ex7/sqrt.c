/*Calculates the square root using Newtons method*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double y = 0, x, average = 1; // avreage is just the new y


    // printf("Enter a positive number: ");
    // scanf(" %lf", &x);

    x = 75423548;

    while (fabs(average - y) >= 0.00001){
        y = average;
        average = (y + x/y)/ 2;

    }

    printf("Square root: %f", y);

    return 0;


}