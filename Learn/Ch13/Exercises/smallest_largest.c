/*finds the largest and smallest in a series of words*/
// no words is more than 20 letters long;
// first 4 letter word will end the sequence;

#include <stdio.h>
#include <string.h>


void compare(char* str, char* smallest, char* largest){
    if (*smallest == '\0') strcpy(smallest, str);
    if (strcmp(str ,smallest) < 0) strcpy(smallest, str);
    if (strcmp(str, largest) > 0) strcpy(largest, str);
}

int main(void){
    char str[20] = {"hello"}, smallest[20] = {'\0'}, largest[20] = {'\0'};
    while (strlen(str) != 4) {

        printf("Enter a word: ");
        scanf("%s", str);
        compare(str, smallest, largest);
    }
    printf("Smallest word: %s\nLargest word: %s", smallest, largest);
    
    return 0;
}