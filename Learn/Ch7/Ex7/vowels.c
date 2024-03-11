/*Counts the vowels in a sentance */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char test;
    int vowels = 0;

    printf("Enter a sentence: ");

    while((test = getchar()) != '\n'){
        switch(toupper(test)){
            case 'A':   
            case 'E':   
            case 'I':   
            case 'O':   
            case 'U':   vowels++;
                        break;
            
            default:    break;
        }
    }
    printf("Your sentence contains %d vowels.", vowels);

    return 0;
}