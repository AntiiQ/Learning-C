/*Simple little program that showcases pointer arithmetic*/

#include <stdio.h>

#define N 3

int main(void)
{
    int a[N], *p;

    printf("Enter %d numbers: ", N);
    for (p = a; p < a + N; p++) scanf("%d", p);

    for (p = a + N - 1; p >= a; p--) printf("%d ", *p);

    return 0;
}