/* Outputs some area codes*/

#include <stdio.h>

int main()
{
    int area_code;

    printf("Enter the Area code: ");
    scanf("%d", &area_code);

    printf("Area code: ");

    switch (area_code)
    {
        case 229:   printf("Albany"); break;
        case 404:   printf("Atlanta"); break;
        case 470:   printf("Atlana"); break;
        case 478:   printf("Macon"); break;
        case 678:   printf("Atlana"); break;
        case 706:   printf("Columbus"); break;
        case 762:   printf("Columbus"); break;
        case 770:   printf("Atlana"); break;
        case 912:   printf("Savannah"); break;
        default:    printf("Not recognized");

        return 0;
    }
}