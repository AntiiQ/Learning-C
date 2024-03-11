/*Determines the length of a message*/

#include <stdio.h>

int main(void)
{
    char msg;
    int len;

    printf("Enter a message: ");

    for (len = 0; ((msg = getchar()) != '\n'); len++) // includes ountuation but not the \n
        ;

    printf("Your messager was %d chatracter(s) long.\n\n", len);

    // do we even need msg?

    printf("Enter a new message: ");

    for (len = 0; (getchar() != '\n'); len++) // includes ountuation but not the \n
        ;

    printf("Your messager was %d chatracter(s) long.\n\n", len);

    return 0;    
}