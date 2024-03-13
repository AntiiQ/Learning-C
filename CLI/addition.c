/*adds little things*/

// cool knowhow; when printing an int or wothever you can doo %02d to pad the number with leading 0 accorinding to the 2nd number so 2 items in total-> 1 becomes 01

#include <stdio.h>

int main(void)
{
    long double a = 0.1, b = 0.2;

    printf("%.50Lf", a + b);
    return 0;
}