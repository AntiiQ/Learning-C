/*aproximated e to n*/

//e = 1 + 1/1! + 1/2! ...

#include <stdio.h>

int main(void)
{
    int n; 
    float e=1, y;

    printf("Enter n: ");
    scanf("%d", &n);


    for(int i = 1, x; i <= n; i++) // i is incrementing, x and y is for factorials
    {
        x = i;
        y = 1.0f;
        

        while (x > 0){
            y *= x;
            x--;
        }

        e += 1/y;
    }

    printf("e to the %d is: %f", n, e);

    return 0;
}