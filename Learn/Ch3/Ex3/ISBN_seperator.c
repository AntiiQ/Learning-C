/* Seperates the groups in an ISBN book number*/

#include <stdio.h>

int main()
{
    int prefix, id, code, number, check;

    printf("Enter ISBN (978-0-383-97950-3): ");
    scanf("%d-%d-%d-%d-%d", &prefix, &id, &code, &number, &check);

    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifier: %d\n", id);
    printf("Publisher code: %d\n", code);
    printf("Item number: %d\n", number);
    printf("Check digit: %d\n", check);

    return 0;
}