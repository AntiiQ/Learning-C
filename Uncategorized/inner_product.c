/*IDK, like some function that will multiply two arrays, item by item and sum the product*/

#include <stdio.h>

#define N 5

double innerProduct(const double *a, const double *b, int n);

int main(void)
{
    double a[N] = {1.0, 2.2, 4.7, 5.6, 6.4},
           b[N] = {3.3, 4.4, 2.9, 5.4, 8.9};

    printf("The inner product is: %f\n", innerProduct(a, b, N));

    return 0;
}

double innerProduct(const double *a, const double *b, int n)
{
    double sum = 0;
    for (double *p = a, *d = b; p < a+n; p++, d++){
        sum += *p * *d;
    }

    return sum;
}