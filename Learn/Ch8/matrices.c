/*JK just multi dimensional arrays*/

#include <stdio.h>
#define N 5

int main(void)
{
    int m[5][9]; // a five by nine matrix, 5 rows 9 coloumns 

    double identity[N][N];
    int row, col;

    for (row = 0; row < N; row++){
        for (col = 0; col < N; col++){
            if (row == col)
                identity[row][col] = 1.0;
            else
                identity[row][col] = 0.0;
        }
    }

    printf("%lf", identity[0][0]);
    return 0;
    

}