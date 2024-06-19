/*capitalize*/

#include <ctype.h>
#include <stdio.h>

void capitalize(char *str){   
    char *c = str;

    while (*c != '\0') {
        // printf("%c, %d, %d", *c, isalpha(*c), isalpha(*c) != 0);
        if (isalpha(*c) != 0)
            *c = toupper(*c);
        
        c++;
    }
}

int main()
{
    char s[] = {"hello"};
    capitalize(s);

    printf("%s", s);

    return 0;
}