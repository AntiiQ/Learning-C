/*Exploring static,dynamic, and automatic variables*/

#include <stdio.h>

int aut_o(void);
int stati_c(void);
int dynamic(void);

int hi = 0; // hi is here:)

int main(void)
{
    for (int i = 0; i < 10; i++)
        printf("%d", hi);
}