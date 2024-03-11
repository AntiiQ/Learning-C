/*Asks the user for dates and returns the earliest one*/

#include <stdio.h> 

int main(void)
{
    int day, eday, month, emonth, year, eyear;

    printf("Enter a date (dd/mm/yy): ");
    scanf("%d/%d/%d", &eday, &emonth, &eyear);



    for (;;){
        printf("Enter a date (dd/mm/yy): ");
        scanf("%d/%d/%d", &day, &month, &year);

        if (day == 0 && month == 0 && year == 0){
            break;
        }

        if ((eyear > year) || (eyear == year && emonth >month) || (eyear == year && emonth == month && eday > day)){
            eyear = year;
            emonth = month;
            eday = day;
        }

    }

    printf("Earliest date: %d/%d/%.2d", eday,emonth,eyear);

    return 0;
}