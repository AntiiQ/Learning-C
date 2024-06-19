/*Just some strcat*/

#include <string.h>
#include <stdio.h>

void build_index_url(const char *domain, char* index_url){
    strcpy(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}

int main(void)
{
    char url[99];
    build_index_url("ihateyou.com", url);
    printf("%s", url);

    return 0;
}