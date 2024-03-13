/*Functions that do suff :)*/


#include <stdio.h>

int largest(int n, int a[n]);
int average(int n, int a[n]);
int positive(int n, int a[n]);

int main(void)
{
    int a[] = {-1,5,7,6,-9,9,-1,4};
    int n = sizeof(a)/ sizeof(a[0]);

    printf("largest: %d\n", largest(n, a));
    printf("average: %d\n", average(n, a));
    printf("number of positive elements: %d\n", positive(n, a));

    return 0;
}

int largest(int n, int a[n])
{
    int largest = 0;

    for (n = n-1; n >= 0; n--)
        if (a[n] > largest)
            largest = a[n];
    return largest;
}

int average(int n, int a[n])
{
    int sum = 0;

    for (int m = 0; m < n; m++)
        sum += a[m];
    
    return sum / n;
}

int positive(int n, int a[n])
{
    int sum = 0;

    for (int m = 0; m < n; m++)
        if (a[m] >= 0)
            sum++;
    
    return sum;
}