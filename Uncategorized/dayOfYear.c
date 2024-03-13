/*Calculates the day of year*/

#include <stdio.h>

int day_of_year(int day, int month, int year);

int main(void)
{
    int day, month, year;

    printf("Enter the date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Day of year: %d", day_of_year(day, month, year));

    return 0;
}

int day_of_year(int day, int month, int year)
{
    int leap(int year)
    {
        if (year % 4 == 0){
            if((year % 100) != 0 || (year % 400) == 0)
                return 1;
        }else {
            return 0;
        }
    }

    int numDays = 0;
    for (int count = 1; count < month; count++){
        switch (count){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:   numDays += 31; break;
            case 4: case 6: case 9: case 11:                            numDays += 30; break;
            case 2: numDays += leap(year)? 29: 28; break;
            default: break;
        }
    }
    numDays += day;
    return numDays;
}

