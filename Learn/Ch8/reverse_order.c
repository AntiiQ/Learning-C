/*Reverses the order of 10 ints*/

#include <stdio.h>
#define lenght 2

int main(void)
{
    int list[lenght];

    printf("Enter %d numbers: ", lenght);

    for (int i = 0; i < lenght; i++){
        scanf("%d", &list[i]);
    }

    printf("In reverse order: ");
    for (int i = lenght -1; i >= 0; i--){
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
}