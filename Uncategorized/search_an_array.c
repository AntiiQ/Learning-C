#include <stdio.h>
#include <stdbool.h>

#define N 10

bool search(int a[], int n, int key);

int main(void)
{
    int a[N] = {1,5,3,45,9,6,78,0};

    printf("Does %d lie in the array? %d", 5, search(a, N, 5));

    return 0;
}

bool search(int a[], int n, int key)
{
    int *p;

    for (p = a; p < &a[n]; p++){
        if (*p == key) return true;
    }

    return false;
}