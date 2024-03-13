/*Converts messages to leet speak*/

#include <stdio.h>
#include <ctype.h>

#define lenght 100


int main(void)
{
    char message[lenght];
    char c;
    int index = 0;

    printf("Enter message: ");

    while ((c = toupper(getchar())) != '\n'){
        switch (c){
            case 'A':   c = '4';
                        break;
            case 'B':   c = '8';
                        break;
            case 'E':   c = '3';
                        break;
            case 'I':   c = '1';
                        break;
            case 'O':   c = '0';
                        break;
            case 'S':   c = '5';
                        break;
            default:    break;
        
        }       

        message[index] =  c;
        index++;
    }

    printf("\nIn 1337-speak: ");
    for (int i = 0; i<index; i++)
        printf("%c", message[i]);
    printf("!!!!!!!!!!!\n");

}