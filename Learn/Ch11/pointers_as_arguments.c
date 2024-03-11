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