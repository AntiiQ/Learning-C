/*FUntion to get extension form a string*/

#include <stdio.h>
#include <string.h>


char* get_extension(const char *filename, char *extension){
    for (;*filename != '\0'; filename++){
        if (*filename == '.'){
            strcpy(extension, ++filename);
            break;
        }
    }
    if (*filename == 0) extension = '\0';
    return extension;
}

int main(void)
{
    char extension[10];

    printf("%s", get_extension("hello.fuckyou", extension));

    return 0;

}