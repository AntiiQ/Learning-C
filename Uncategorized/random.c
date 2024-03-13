#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void)
{
    //srand((unsigned) time(NULL));

    srand((unsigned) 1010 ); 

    for (int i = 0; i < 100; i++)
        printf("%d\n", rand());

    return 0;
}