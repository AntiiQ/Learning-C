/*Reverses a number of any length*/

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("The reverse of that is: ");
    do {
        printf("%d", num % 10);
        num /= 10;
    } while (num > 0);

    return 0;
}