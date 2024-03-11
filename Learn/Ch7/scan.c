/*Testing something with scanf*/

//Previouslly i tried to use scanf to detect a \n 
// that didnt seem to work for some reason so im tryin again


#include <stdio.h>

int main(void)
{
    char c;
    int b, a;

    printf("Enter int, char, int: ");

    scanf("%d", &b);

    while (c != '\n'){
        scanf("%c", &c);
        scanf("%d", &a);

        printf("%d", b += a);

    }

    printf("Test: ");
    scanf("%c", &c);
    printf("%c", c);

    return 0;

    //Im so goddamn dumb!!!!!!
    //IT WASNT STOPPING RANDOMLY, IT WAS JUST TRYING TO GET ME TO TYPE SOMETHING IN!!!!!!!!!!!!!!!!!!
}