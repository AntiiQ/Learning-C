/*Splits time into hours, minutes, and secodns*/

#include <stdio.h>

void time_split(int total_seconds, int *hours, int *minutes, int *seconds);

int main(void)
{
    int hours, minutes, seconds;

    time_split(1400, &hours, &minutes, &seconds);

    return 0;
}


void time_split(int total_seconds, int *hours, int *minutes, int *seconds)
{
    *hours = total_seconds / 3600;
    *minutes = total_seconds % 3600 / 60;
    *seconds = total_seconds % 3600 % 60;
}