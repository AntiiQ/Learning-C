/*Checks if a message is a palindrome*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define LEN 100 // lenght of the array

bool palindorme(const char *message, char *last){
    const char *first = message;

    while (first < last){
        if (*first != *last)
            return false;
        first++;
        last--;
    }
    
    return true;
}

int main(void)
{
    char message[LEN], *p = message;

    printf("Enter a message: ");

    while (p < message + LEN && (*p = tolower(getchar()) != '\n')) // so that capitals dont affect it
        if (isalpha(*p)) p++; // ignoring everything thats not a letter

    if (*p == '\n') p--;

    if (palindorme(message, p)) printf("Plaindrome.\n");
    else printf("Not a Palindrome.\n");

    return 0;

}