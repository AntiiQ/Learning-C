/*Function that returns the digits specified*/
#include <stdio.h>

int digit(int n, int k);

f(void);


int main(void)
{
    int num, place;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the place: ");
    scanf("%d", &place);

    printf("output: %d", digit(num, place));

    return 0;
}

int digit(int n, int k)
{
    for (k; k > 1; k--){
        n /= 10;
    }
    return n % 10;
}

f(void)
{
    return;
}