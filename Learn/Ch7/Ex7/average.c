/*Calculates average word lenght*/

#include <stdio.h>

int main(void)
{
    int chars = 0, words = 1;
    char symbol;

    printf("Enter a sentence: ");

    while((symbol = getchar()) != '\n'){
        symbol != ' ' ? chars++ : words++;

    }

    printf("Average word lenght: %.1f\n", (float) chars / words);

    return 0;

}