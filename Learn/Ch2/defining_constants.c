// programs often include constants 
// eg 1024, which when divided by it gives the next order of the binary prefixes (?)
// such things may not be clear to those reading my code
// so instead we can define constants

#define NEXT_ORDER 1024.0f // this is called a 'macro definition'

// define is pre processing dirctive, so the compiler itself doesnt see it, thus no ; needed
// when compiling the preprocessor replaces each macro by their actual value

#include <stdio.h>

/*  Converting from Bytes to KibiBytes*/

int main(void)
{
    float bytes = 0;

    printf("Nuber of bytes: ");
    scanf("%f", &bytes);
    printf("Number of Kilobytes: %f\n", bytes / NEXT_ORDER );
    // the varaibles being floats is important, because C truncates divistions by integers 
    return 0;
}