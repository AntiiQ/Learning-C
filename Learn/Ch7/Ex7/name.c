/*Reverse order of name*/

#include <stdio.h>

int main()
{
    char last_name, c = '\0';

    printf("Enter firts and last name: ");
    scanf(" %c", &last_name);

    while (getchar() != ' ')
    ;

    while ((c = getchar()) == ' ')
    ;

    do {
        putchar(c);
    } while ((c = getchar()) != ' ' && c != '\n');

    printf(", %c.", last_name);

    return 0;
}