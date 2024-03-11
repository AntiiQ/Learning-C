/* Seeks which date on the caledar comes earlier*/

#include <stdio.h>

int main()
{
    int day1, day2, month1, month2, year1, year2;

    printf("Enter first date (dd/mm/yy):");
    scanf("%d/%d/%d", &day1, &month1, &year1);

    printf("Enter second date (dd/mm/yy): ");
    scanf("%d/%d/%d", &day2, &month2, &year2);  

    if (year1>year2) 
        printf("%d/%d/%.2d is later that %d/%d/%.2d\n", day1, month1, year1, day2, month2, year2);
    else if (year1 == year2 && month1 >month2) 
        printf("%d/%d/%.2d is later that %d/%d/%.2d\n", day1, month1, year1, day2, month2, year2);
    else if (year1 == year2 && month1 == month2 && day1 > day2)
        printf("%d/%d/%.2d is later that %d/%d/%.2d\n", day1, month1, year1, day2, month2, year2);
    else 
        printf("%d/%d/%.2d is later that %d/%d/%.2d\n", day2, month2, year2, day1, month1, year1);

    return 0;
}