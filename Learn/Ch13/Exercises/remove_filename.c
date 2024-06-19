/*removes the file name from an url*/

#include <stdio.h>
#include <string.h>

void remove_filename(char *url){
    url = url  + strlen(url);

    for (;*url != '/'; url--)
        *url = 0;
    *url = 0;
}

int main(void){
    char url[] = {"hello.com/hawhwhahsahdahkdlkasfjflfasjfk;kfhaha"};
    remove_filename(url);

    printf("%s", url);

    return 0;
}