/*How to find the length of a string?*/
#include <stdio.h>

int main(void)
{;
    int a[] = {1,2,3,4};
    int b = 0;

    //sizof() can return how large a variable is, in bits, be it a string or an array

    printf("a = %d bytes\nb = %d bytes\n", sizeof(a), sizeof(b));

    // all items in an array are of the same type
    // so:

    printf("number of items in a = %d", sizeof(a) / sizeof(a[0]));

    // though the type of the return of the sizeof function is an unsigned type called size_t
    // compraring types of diffrent signs can be a bit dangerous, so we should convert it to an int probably

    // though that makes the statement long, so instead we can use a macro,
    // but using macros could prevent this whole thing, so whats the advantage?

    // Ill see when ill learn to use macros that take parametres
}