/*Ceaser cipher*/

#include <stdio.h>

int main(void)
{
    int shift;
    char c;

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
    while (getchar() != '\n');
    printf("Enter messagage to be encrypted: ");

    for (int i = 0; (c = getchar()) != '\n'; i++){
        if (c <= 'z' && c >= 'a'){
            c = ((c - 'a') + shift) % 26 + 'a';

        }else if (c <= 'Z' && c >= 'A'){
            c = ((c - 'Z') + shift) % 26 + 'Z';
        }

        printf("%c", c);
    }
    return 0;
}