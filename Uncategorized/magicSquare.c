/*Makes magic squares*/

#include <stdio.h>
#include <time.h>


int main(void)
{
    int n; // size of square
    
    printf("This program creates a magic square of specifed size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter the size of the magic square:");
    scanf("%d", &n);

    if ((n % 2) == 0){
        printf("Number MUST be odd");
        return 0;
    }

    clock_t start = clock();

    int square[n][n];


    // initializing
    for (int q = 0; q < n; q++){
        for (int r = 0;r < n; r++)
            square[q][r] = 0;
    }

    for (int i = 1, x = (n/2), y = 0, tempx, tempy; i <= n*n; i++, x++, y--){ // [y][x]

        tempx = x;
        tempy = y;

        if (tempx == n) tempx = 0;
        if (tempy == -1) tempy = n-1;

        if (square[tempy][tempx] != 0) {
            y+=2;
            x--;

            if (x == n) x = 0;
            if (y == -1) y = n-1;
            square[y][x] = i;
            continue;
        } // reverse the incrementaion from the for loop and move one row up

        x = tempx;
        y = tempy;
        square[y][x] = i;
    }

    for (int q = 0; q < n; q++){
        for (int r = 0;r < n; r++)
            printf("%2d ", square[q][r]);
        printf("\n");
    }
    clock_t end = clock();
    double elapsed_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Elapsed time: %.2f seconds", elapsed_time);

    return 0;
}