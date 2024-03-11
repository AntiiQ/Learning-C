#include <stdio.h>

int main()
{
    float x = 3.1415926535897932384626433832795028841971693993751058;

    printf("1. %-8.1e\n", x);
    printf("2. %10.6e\n", x);
    printf("3. %-8.3f\n", x);
    printf("4. %6.0f\n", x);

    return 0;
    
}