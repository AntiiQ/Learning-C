#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {
    // getting the dimensions
    int rows1 = 0, rows2 = 0, coloumns1 = 0, coloumns2 = 0, rows = 0, coloumns = 0;

    printf("Enter the dimensions of the first matrix (axb): ");
    scanf("%dx%d", &rows1, &coloumns1);

    printf("Enter the dimensions of the second matrix (axb): ");
    scanf("%dx%d", &rows2, &coloumns2);

    if (coloumns1 != rows2) {
        printf("Invalid dimensions\n");
        return 0;
    }

    rows = rows1;
    coloumns = coloumns2;

    long long first[rows1][coloumns1];
    long long second[rows2][coloumns2];
    long long product[rows][coloumns];

    // Initialize the product matrix to 0
    for (int i = 0; i < rows; i++) {
        for (int x = 0; x < coloumns; x++) {
            product[i][x] = 0;
        }
    }


    printf("Enter the numbers in the first matrix (a b c d): ");
    for (int i = 0; i < rows1; i++) {
        for (int x = 0; x < coloumns1; x++) {
            scanf("%lld", &first[i][x]);
        }
    }


    printf("Enter the numbers in the second matrix (a b c d): ");
    for (int i = 0; i < rows2; i++) {
        for (int x = 0; x < coloumns2; x++) {
            scanf("%lld", &second[i][x]);
        }
    }

    // Multiplication
    for (int i = 0; i < rows; i++) {
        for (int x = 0; x < coloumns; x++) {
            for (int y = 0; y < rows2; y++) {
                product[i][x] += first[i][y] * second[y][x];
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int x = 0; x < coloumns; x++) {
            printf("%lld\t", product[i][x]);
        }
        printf("\n");
    }

    return 0;
}
