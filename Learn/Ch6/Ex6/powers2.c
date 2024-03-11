/*prints the powers of 2*/

#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 128; i *= 2)
        printf("%3d\n",i);
    
    return 0;
}