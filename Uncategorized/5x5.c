/*Gets a 5x5 matrix like array and calculates the sum of each row and column*/

#include <stdio.h>

int main(void)
{
    int array[5][5] = {0};

    for (int i = 0; i < 5; i++){

        printf("Enter row %d:", i+1);
        for (int x = 0; x<5; x++)
            scanf("%d", &array[i][x]);
    }

    // row totals

    int rows[5] = {0};

    for (int i = 0; i < 5; i++){
        for (int x = 0; x < 5; x++){
            rows[i] += array[i][x];
        }
    }

    // coloumn totals

    int coloumns[5] = {0};

    for (int i = 0; i < 5; i++){
        for (int x = 0; x < 5; x++){
            coloumns[i] += array[x][i];     
        }
    }


    printf("\nRow totals:\t");
    for (int i = 0; i < 5; i++){
        printf("%d ", rows[i]);
    }

    printf("\nColoumn totals:\t");
    for (int i = 0; i < 5; i++){
        printf("%d ", coloumns[i]);

    }

    return 0;

}