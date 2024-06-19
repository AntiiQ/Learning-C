/*Test*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>




int check_seen(char chr, int seen[]){
    if (chr == '.') return 1;
   
    else if ( !seen[chr - '0']) {seen[chr - '0'] = 1; return 1;} // not seen before




    return 0; // seen before
}




bool isValidSudoku(char board[9][9]) {
    int seen1[9];
    int seen2[9];


    // Check rows
   
    for (int i = 0; i < 9; i++){
        for (int f=0; f<9; f++){
            seen1[f] = 0;
            seen2[f] = 0;
        }
        for (int j = 0; j < 9; j++){
            printf("%c", board[i][j]);
            if (!check_seen(board[i][j], seen1))
                return 0;
            if (!check_seen(board[j][i], seen2))
                return 0;
        }
    }


    for (int x = 0; x < 3; x++){
        for (int y = 0; y < 3; y++){
            for (int f=0; f<9; f++){
            seen1[f] = 0;
            }
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    if (!check_seen(board[i + x*3][j + y*3], seen1))
                        return 0;
                }
            }


        }
    }

    return 1;
}




int main(void){
    char board[9][9] = {{'8','.','.','.','7','.','.','.','.'},
                        {'6','.','.','1','9','5','.','.','.'},
                        {'.','9','8','.','.','.','.','6','.'},
                        {'8','.','.','.','6','.','.','.','3'},
                        {'4','.','.','8','.','3','.','.','1'},
                        {'7','.','.','.','2','.','.','.','6'},
                        {'.','6','.','.','.','.','2','8','.'},
                        {'.','.','.','4','1','9','.','.','5'},
                        {'.','.','.','.','8','.','.','7','9'}
};
    printf("\n%d", isValidSudoku(board));

    return 0;
}