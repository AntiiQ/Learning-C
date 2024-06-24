/*Takes in a dd/mm/yyyy and outputs day month, year*/

#include <stdio.h>

int main(){
    char* months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int day, month, year;
    printf("Enter a date(dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("You entered the ");
    switch (day % 10){
        case 1: printf("%dst", day);
                break;
        case 2: printf("%dnd", day);
                break;
        case 3: printf("%drd", day);
                break;
        default: printf("%dth", day);
                break;
    }
    printf(" of %s, %d.\n", months[month-1], year);

    return 0;
}