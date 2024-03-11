/* displayes a 24 hour time in the 12 hour format*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int hour, min; 
    bool pm; // am pm

    printf("Enter a 24-hour time(xx:yy): ");
    scanf("%d:%d", &hour, &min);

    if (hour >= 12) {
        if (hour >12) hour -= 12;
        pm = true;
    }

    printf("Equivalent 12-hour time: %.2d:%.2d %s", hour, min, (pm ? "PM" : "AM"));

    return 0;
}