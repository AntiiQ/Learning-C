/*Checks if two words are anagrams*/

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    // arays to store the number of each occuences of all letters
    int first[26] = {0}; 
    int second[26] = {0};
    
    char c;

    printf("Enter the first word: ");

    while ((c = getchar()) != '\n'){
        if (isalpha(c))
            first[tolower(c) - 'a']++;
    }

    printf("Enter the second word: ");

    while ((c = getchar()) != '\n'){
        if (isalpha(c))
            first[tolower(c) - 'a']--;
    }

    for (int i = 0; i < 26; i++){
        if (first[i] != 0){
            printf("The words are not anagrams");
            return 0;
        }
    }
    printf("The words are anagrams");
    return 0;
}