#include <stdio.h>

int main(void)
{
    int i, j;
    float x,y,z;

    i = 10;
    j = 20;
    x= 3.14151f;
    y=1123.41423000000f;
    z= 0.00000123456778;

    printf("%d %d\n\n", i); // first replacement is done corectlly, second will be meaningless

    printf("%f %d\n\n", i, x); // wrong type just doesnt work, and gives 0

    printf("%4d\n", i); // the value has to occupy at least 4 characters, can be more
    printf("%-4d|\n", i); // works in reverse
    printf("%4f\n\n", x); // if the value is bigger than the spceifed characters, it just takes more

    printf("%.5d\n\n", j); //works with ints, just adds 0s before

    // %e

    printf("%e\n", y); // prints floats in exponential notation
    printf("%0.0e\n\n", y); // .0 tells how many deciam palces it should use

    // %g

    printf("%g\n", z); // prints in the most appropitate way ignoring trailing 0s
    printf("%.5g\n\n", y); // .p would signify the numebr of sig figs, not dp

    return 0;

}