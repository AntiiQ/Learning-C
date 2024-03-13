// function to swap two variables.

#include <stdio.h>

void swap(int *i, int *j);

int main(void)
{
    int a = 1, b = 2;
    swap(&a, &b);

    printf("a - %d, b - %d", a, b);

    return 0;

}

void swap(int *i, int *j)
{
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}