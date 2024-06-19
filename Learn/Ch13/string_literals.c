/*Looking at string literals in more depth*/

#include <stdio.h>

int main(void)
{
    printf("WOW you can break string literals \
between lines using the \\ thingie.\n"); // the \ lets you use escape sequences but by itself it represents a continutation to the next line (splicing)

    printf("YOu can also just"
            "End the literal and start a new one on a new line\n");

    // string literals are stored in n+1 bytes, where n is the number of characters, it is that way as the
    // extra character is a null character that represents the end of the sring '\0'

    char *p; //
    p = "abc"; // c stores string literals as char * arrays, so we can make p point to it, i dunno where it sores it but it does i guess....

    printf("%c ", *p); // now you can 

}

