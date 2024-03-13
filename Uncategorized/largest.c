#include <stdio.h>

int *findLargest(int n, int a[n]);

int main(void)
{
    int a[5] = {12,4,45,3,9};
    printf("the largest is %d", *findLargest(5, a));
    return 0;
}


int *findLargest(int n, int a[n])
{
    int *largest = &a[0];
    for (int i = 1; i < n; i++)
        largest = a[i] > *largest? &a[i]: largest;
    
    return largest;
}