/*Calculates the scrable value of a word*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char letter;
    int value = 0;

    printf("Enter a word: ");

    while((letter = toupper(getchar())) != '\n'){
        switch (letter){
            case 'Q': 
            case 'Z': value += 2; 

            case 'J':
            case 'X': value += 3;  

            case 'K': ++value;

            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y': ++value;

            case 'B':
            case 'C':
            case 'M':
            case 'P': ++value;

            case 'D':
            case 'G': ++value;
            
            case 'A':
            case 'E':
            case 'I':
            case 'L':
            case 'N':
            case 'O':
            case 'R':
            case 'S':
            case 'T':
            case 'U': ++value;
        }
    }
    printf("Scrabble value: %d\n", value);
    return 0;
}