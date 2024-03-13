/*I have no idea*/

#include <stdio.h>

#define size 8

int main(void)
{
    char board[size][size];

    for (int i = 0; i< size; i++){
        for (int j = 0; j < size; j++){
            board[i][j] = ((i + j) % 2? 'R' : 'B');
        }
    }

    for (int i = 0; i< size; i++){
        for (int j = 0; j < size; j++){
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }

    return 0;   
}