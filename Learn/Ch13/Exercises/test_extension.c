/*tests the extesion of a file name*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool test_extension(const char *file_name, const char* extension){
    
    file_name = file_name + strlen(file_name);
    extension = extension + strlen(extension);

    for (;*file_name != '.';){
        if (toupper(*file_name) != toupper(*extension))
            return false;
        file_name--;
        extension--;

    }

    return true;
}

int main(void){
    printf("%d", test_extension("hey.txt", "txt"));

    return 0;
}