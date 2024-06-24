/*Returns a sentecne backwards*/

#include <stdio.h>

int main(void)
{
    char sentence[100] = {0};
    char c ='0';
    char *i, *j;

    for (i = sentence; (c= getchar()) != '.' && c !='?' && c != '!'; i++ ){ // i becomes length kinda
            *i = c;
    }

    for (--i; i >= sentence; i--){
        if (*i == ' ' || i == sentence){ // detects spaces, and end of array
            for (j= i == sentence? i : i+1; *j != ' ' && *j != '\0'; j++){ // iterates thought the array after space till the next space
                printf("%c", *j);
            }
            printf(" ");
        }
    }
    printf("\b%c", c);

    return 0;
}