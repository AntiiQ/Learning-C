/*determines the largerst number entered by the user*/

#include <stdio.h>

int main(void)
{
    float num , big = .0f;
    printf("Enter a series of numbers, when done enter a number below or equal to 0\n");
    do{
        printf("Enter a number: ");
        scanf("%f", &num);
        if (num > big){
            big = num;
        }

    }while (num > 0);
    
    printf("\nlargest number entred was %f", big);

    return 0;

}