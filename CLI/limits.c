/*Shows the limits of the data types*/

#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("The number of bots in a byte is: %d\n\n", CHAR_BIT);

    printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
    printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
    printf("The maximum value of UNSIGNED CHAR = %d\n\n", UCHAR_MAX);

    printf("The minimum value of CHAR = %d\n", CHAR_MIN);
    printf("The maximum value of CHAR = %d\n\n", CHAR_MAX);

    printf("The minimum value of SHORT INT = %hd\n", SHRT_MIN);
    printf("The maximum value of SHORT INT = %hd\n", SHRT_MAX);
    printf("The maximum value of UNSIGNED SHORT INT = %hu\n\n", USHRT_MAX);

    printf("The minimum value of INT = %d\n", INT_MIN);
    printf("The maximum value of INT = %d\n", INT_MAX);
    printf("The maximum value of UNSIGNED INT = %u\n\n", UINT_MAX);

    printf("The minimum value of LONG INT = %ld\n", LONG_MIN);
    printf("The maximum value of LONG INT = %ld\n", LONG_MAX);
    printf("The maximum value of UNSIGNED LONG INT = %lu\n\n", ULONG_MAX);

    printf("The minimum value of LONG LONG INT = %lld\n", LONG_LONG_MIN);
    printf("The maximum value of LONG LONG INT = %lld\n", LONG_LONG_MAX);
    printf("The maximum value of UNSIGNED LONG LONG INT = %llu\n", ULONG_LONG_MAX);

    return 0;
}