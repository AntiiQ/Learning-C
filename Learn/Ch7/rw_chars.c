/*getchar and putchar*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch; // could be char, could also be int, no real problem

    printf("GIMME CAHR: ");
    ch = getchar(); // takes user input

    putchar(ch); // displayes ch

    getchar(); // gets rif of the \n

    // actually its not needed


    printf("\nGIMME MOAR: ");
    
    while ((ch = getchar()) != '\n') // gets whats in the input buffer and compares it with \n
        printf("%c", ch);


    // idiom
    while ((ch = getchar()) == ' ') //  gets next from the input buffer, compares it to a blank, if true it getst the next,
                                    // if false ch will now contain the first non blank character
        ;

    return 0;
}