/*Function to find the two largest ints in an array*/

#include <stdio.h>

void two_largest(int n, int list[n], int *largest, int *second_largest)
{
    for (int i = 0; i < n; i++){
        if (list[i] > *largest)
            *largest = list[i];
        else if (list[i] > *second_largest)
            *second_largest = list[i];
    }
}

int main(void)
{
    int largest = 0, second_largest = 0;
    int n = 5, a[] = {1,3,4,23,4};   
    two_largest(n, a, &largest, &second_largest);

    printf("1st: %d, 2nd: %d", largest, second_largest);

    return 0;

}