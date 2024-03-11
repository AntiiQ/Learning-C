/*seletion sort alorithm*/

#include <stdio.h>

void selectionSort(int n, int list[n]);

int main(void)
{
    int n;
    printf("How many numbers do you want to sort? ");
    scanf("%d", &n);

    int list[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &list[i]);

    selectionSort(n, list);

    printf("Sorted list: ");
    for (int i = 0; i < n; i++) 
        printf("%d ", list[i]);
}

void selectionSort(int n, int list[n])
{
    if (n <= 1) return;

    int largest = list[0], largestPos = 0,
        temp;
    

    for (int i = 0; i < n; i++) // finding largest item
        if (list[i] > largest){
            largest = list[i];
            largestPos = i;
        }
    
    temp = list[largestPos]; // swiching largest to the end
    list[largestPos] = list[n-1];
    list[n-1] = temp;

    selectionSort(n-1, list);
}