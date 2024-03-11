/*Evaluates a chess board*/

#include <stdio.h>

int evaluate_position(char board[8][8]);

int main(void)
{
    /*
    char board[8][8] = {
    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
    };
    */
    char board[8][8] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', ' ', 'N', 'R'}  // Black has an extra knight
    };




    printf("Evaluation: %d", evaluate_position(board));

    return 0;
}

int evaluate_position(char board[8][8])
{
    int evaluation = 0;
    for (int i  = 0; i < 8; i++){
        for (int x = 0; x < 8; x++){
            switch (board[i][x]){
                case 'Q' : evaluation += 9; break;
                case 'q' : evaluation -= 9; break;
                case 'R' : evaluation += 5; break;
                case 'r' : evaluation -= 5; break;
                case 'B' : evaluation += 3; break;
                case 'b' : evaluation -= 3; break;
                case 'N' : evaluation += 3; break;
                case 'n' : evaluation -= 3; break;
                case 'P' : evaluation += 1; break;
                case 'p' : evaluation -= 1; break;

                default: break;
            }
        }
    }

    return evaluation;
}