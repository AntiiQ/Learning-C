/*input a messeage and then reverse it?*/

#include <stdio.h>

#define LEN 100

int main(void)
{
    char message[LEN], *p = message;

    printf("Enter a message: ");

    while (p < message + LEN && (*p = getchar()) != '\n') p++;

    if (*p == '\n') p--;

    printf("Reversal is: ");
    for (p; p >= message; p--) printf("%c", *p);

    return 0;

}