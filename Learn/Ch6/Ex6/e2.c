/*aproximated e until 1/n is smaller than c*/

//e = 1 + 1/1! + 1/2! ...

#include <stdio.h>

int main(void)
{
    float e=1, y =100, c;

    printf("Enter c: ");
    scanf("%f", &c);


    for(int i = 1, x; 1/y >= c; i++) // i is incrementing, x and y is for factorials
    {
        x = i;
        y = 1.0f;
        

        while (x > 0){
            y *= x;
            x--;
        }

        e += 1/y;
    }

    printf("e to the specidied conditionsis: %f", e);

    return 0;
}