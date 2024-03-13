/*One of the key uses of pointers*/

#include <stdio.h>

void decompose(long double x, long *int_part, long double *frac_part)
{
    *int_part = (long) x;
    *frac_part = x - *int_part;

}

int main(void)
{
    long double pi = 3.14159265358979323;
    long int_part;
    long double frac_part;

    decompose(pi, &int_part, &frac_part);

    printf("%ld and %Lf", int_part, frac_part);

    return 0;
}

// if you do not want to change the data that the pointer points to you can use the cosnt keyword to specify

// int f(const int *p);

// this might be more efficent with extremly large values but, like, why?