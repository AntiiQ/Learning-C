/*Outputs telephonw numbers*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char num;

    printf("Enter phone number: ");

    while((num = toupper(getchar())) != '\n'){
        switch (num){
            case 'A':
            case 'B':
            case 'C':   num = '2';
                        break;
            case 'D':
            case 'E':
            case 'F':   num = '3';
                        break;
            case 'G':   
            case 'H':
            case 'I':   num = '4';
                        break;
            case 'J':
            case 'K':
            case 'L':   num = '5';
                        break;
            case 'M':
            case 'N':
            case 'O':   num = '6';
                        break;
            case 'P':
            case 'R':
            case 'S':   num = '7';
                        break;
            case 'T':
            case 'U':
            case 'V':   num = '8';
                        break;
            case 'W':
            case 'X':
            case 'Y':   num = '9';
                        break;
        }
        putchar(num);
    }
    return 0;
}