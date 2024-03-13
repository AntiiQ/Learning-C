/*Learing the basics of pointers*/

#include <stdio.h>

int main(void)
{
    int /*the asterisk (indirection operator) denotes the pointer ->*/ *p; // pointer p points at nothing yet
    
    // you can declare pointers in the same statement as other variables;
    int a, b[2], *c;

    // The pointer can only point to its perticular type

    /*Adress operator: &*/
    p = &a; // p points to a

    // you can combine the declarations of all of these, as long as the thing the pointer points to is declared first

    char d, *x = &b;


}