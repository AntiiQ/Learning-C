/*gets an array of items and find the max and min, assigning them back into main using pointers*/

#include <stdio.h>

void max_min(int a[], int n, int* max, int* min){
    for (int i = 0; i < n; i++){
        if (a[i] > *max) *max = a[i];
        if (a[i] < *min) *min = a[i];
    }
}

int main(void)
{
    unsigned int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n], max=-1000, min = 1000;
    printf("Enter the integers: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    max_min(a, n, &max, &min);
    printf("max: %d\nmin: %d", max, min);

    return 0;
}