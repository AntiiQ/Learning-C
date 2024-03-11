/*Converts from 12 hour format to 24*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour, min;
    char state;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &min, &state);

    hour = hour == 12 ? 0 : hour;

    if (toupper(state) == 'P'){
        hour += 12;
    }

    printf("Equivalent 24-hour time: %.2d:%.2d", hour, min);

    return 0;
}