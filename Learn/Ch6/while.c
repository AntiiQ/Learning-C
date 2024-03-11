/*Exploring the while loop*/

#include <stdio.h>

int main(void)
{
    // while (expression) statement

    /*smallest power of 2 that is greater or equal to n*/

    int i = 1, n, num = 0;

    printf("Enter n:");
    scanf("%d",&n);

    while (i < n) {
        printf("%3d. %10d\n", num++, i);
        i *= 2; // this is a single statement, so no curly brackets are required, to make it a compound statement
    
    }
    printf("\nThe smallest power of two that is equal or greater than %d, is 2^%d: %d\n", n, num, i);



    return 0;
}