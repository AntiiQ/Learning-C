/*Prints a GREAT pun as much as you want*/

#include <stdio.h>

void pun(void)
{
    printf("To C or not to C; that is the question\n");
}

int main(void)
{
    pun();
    pun();
    pun();
    pun();
    pun();

    int num;
    num = printf("Did you know you can save how many characters were printed?\n");

    printf("%d", num);

    return 0;
}