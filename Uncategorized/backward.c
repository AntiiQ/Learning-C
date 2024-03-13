/*Returns a sentecne backwards*/

#include <stdio.h>

int main(void)
{
    char sentence[100] = {0};
    char c ='0';
    int i, j;

    for (i = 0; (c= getchar()) != '.' && c !='?' && c != '!'; i++ ){ // i becomes length
            sentence[i] = c;
    }

    for (i = i - 1; i >= 0; i--){
        if (sentence[i] == ' ' || sentence[i] == '\000' || i == 0){
            for (j= i == 0? i : i+1; sentence[j] != ' ' && sentence[j] != '\000'; j++){
                printf("%c", sentence[j]);
            }
            printf(" ");
        }
    }
    printf("\b%c", c);

    return 0;
}