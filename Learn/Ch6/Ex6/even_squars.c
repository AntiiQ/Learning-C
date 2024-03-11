/*Prints all the even squars between 1 and n*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i=1; i*i <= n; i++){
        if (!(i*i % 2))
            printf("%4d\n", i*i);
    }
    return 0;
}
