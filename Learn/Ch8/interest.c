/*Compares diffrent interest rates*/

// takes in interest rate and number of years

#include <stdio.h>
#define size 5
#define multiple (1 + ((interest + x) / 100)) // interest in decimal form + 1

int main(void)
{
    float values[size] = {100, 100, 100, 100, 100};
    int years;
    float interest;

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter number of years: ");
    scanf("%d", &years);

    printf("\nYears\t %.1f%\t %.1f%\t %.1f%\t %.1f%\t %.1f%\n", interest, interest + 1, interest + 2, interest + 3, interest + 4);

    for (int i = 1; i <= years; i++){
        printf("  %d\t", i);
        for (int x = 0; x < size; x++){
            values[x] *= multiple;
            printf("%0.2f\t", values[x]); 
        }
        printf("\n");
    }

    return 0;
}