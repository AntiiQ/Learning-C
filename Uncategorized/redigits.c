/*Detects repeated digits*/
/*Limited to 64 bit numbers*/

#include <stdio.h>

int main(void)
{
    long long input;
    int seen[10] = {0};

    while (1){

        for (int i= 0; i < 10; i++)
            seen[i] = 0;

        printf("\n\nEnter a number: ");
        scanf("%lld", &input);
        
        if (input <= 0)
            return 0;
        
        while (input > 0){
            seen[input % 10] += 1;

            input /= 10;
        }

        printf("Digit:\t\t");
        for (int i= 0; i < 10; i++)
            printf("%d ", i);
        
        printf("\nOccurences:\t");

        for (int i= 0; i < 10; i++)
            printf("%d ", seen[i]);
    }
}