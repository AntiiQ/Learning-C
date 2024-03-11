/*Looking into conversions*/

#include <stdio.h>

int main(void)
{
    short sh = 1;
    int i =1 ;
    long lo = 1;

    float flo = 1 ;
    double dou = 1;
    long double ld = 1;

    printf("Sum: %Lf\n", ld + dou + flo + lo + i + sh); /* should be 6*/

    // we can do this becaouse c does somthing called implicit conversions
    // in this sum it converts all of them to the same type as the most fancy one ( long double in this case)
    // this conversion to a larger type is called a promotion

    //conversion during assignmet

    //the value is converted to the type of the variable

    i = 8.45; /*i is now 8*/
    printf("%d\n",i);

    // dont try to assign a value to variable thats narrower

    i = 1e20;
    printf("%d\n",i);

    // without the f that we use after floats, the value will be represented as a double and then converted to float, L for long doubles

    // Casting
    // (type-name) expression
    
    float f, frac_part;

    f = 8.45f;

    frac_part = f - (int) f; // f is converted to int, dropping its fractional part, then converted back to float to be subtracted

    printf("%f\n", frac_part);

    // this is usefull when you want to document a cast

    i = (int) f;

    // or want the full division between ints

    printf("4/5 is: %f\n", ((float) 4/5)); // casts the 4 explicitly, making 5 into a float implicitly 

    //this could be used to prevent overflows

    printf("%lld\n", 100000*100000 ); // will not be printed as 10 MIL, as ints can only hold up to like 2 mil
    printf("%lld\n", (long long) 100000*100000);// but this works great


    return 0;
}