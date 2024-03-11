/*Prints one months calendar*/

#include <stdio.h>

int main(void)
{
    int days, pos=1;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter on which day the 1st falls on(1=MON, 7=SUN)");
    scanf("%d", &pos);

    for (int i = 1; i < pos; i++)
        printf("   ");

    for (int i = 1; i <= days; i++){
        printf("%2d ", i);
        pos++;
        if (pos == 8){
            printf("\n");
            pos = 1;
        }
    }

    return 0;
}