// when assigning a value to a varaible of a diffrent type, it automatlicly casts it
// some operatoes modify the operands, these operators have whats called 'side effects'
#include <stdio.h>

int main(void)
{
    int i;
    float f;

    //assignment is an opperator
    // several assignements can happen at once

    f = i = 1; //assignment  is right associative -> f =(i = i) SO
    f = i = 1.5f; // i will become 1, so f would become 1.0, not 1.5

    // compound assignments 
    
    // these 2
    i = i+1;
    i += 1;
    // do the same thing
    
    // -= += /= %=
    // however the are some cases where this doesn't work right

    i = 3;
    i += 5*3; // order of operands still works i guesss
    printf("%d",i);

    // YOU can be even more mean

    f += i += 10; // this would be f += (j+= 10)

    return 0;
    
}