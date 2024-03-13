#include <stdio.h>

int main(void)
{
    float feet;

    printf("Enter the height of the tree in feet: ");
    scanf("%f", &feet);
    printf("The height of the tree int metres is: %0.1fm", 0.3048 * feet);

    return 0;
}