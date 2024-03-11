/*Looking into sizeof operator*/

#include <stdio.h>

int main(void)
{
    // sizeof (type-name)

    // sizeof is of type size_t, which is unsigned long long, but not always, so we could convert it to something certain like unsigned long

    // printf is capable of displaing size of fully, but it needs the z after the %,



    printf("char    : %zu\n\n", sizeof(char));
    printf("int     : %zu\n", sizeof(int));
    printf("long    : %zu\n", sizeof(long));
    printf("llong   : %zu\n\n", sizeof(long long));
    printf("float   : %zu\n", sizeof(float));
    printf("double  : %zu\n", sizeof(double));
    printf("ldouble : %zu\n", sizeof(long double));


    return 0;
}