/*Simple walk thingie but in a loop*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define size 10

int main(void)
{
    char board[size][size];
    int position[2] = {0, 0}; //-y, x , as moving down increases 
    int move;
    int done; // for the while loop

    // starting up the rng
    srand((unsigned) time(NULL));

    
    for (int recursion = 0; recursion < 50; recursion++){
        
        // initializing everything to '.'

        for (int i = 0; i < size; i++)
            for (int x = 0; x < size; x++)
                board[i][x] = '.';



        // movement

        for (char symbol = 'A'; symbol <= 'Z'; symbol++){ // main loop of the sim

            board[position[0]][position[1]] = symbol;
            done = 0;

            while (!done){
                move = rand() % 4;

                //Checking in case it gets stuck

                if (
                    ((position[1] + 1 >= size) || (board[position[0]][position[1] + 1] != '.')) &&
                    ((position[1] - 1 < 0) || (board[position[0]][position[1] - 1] != '.')) &&
                    ((position[0] + 1 >= size) || (board[position[0] + 1][position[1]] != '.')) &&
                    ((position[0] - 1 < 0) || (board[position[0] - 1][position[1]] != '.')))
                    {
                                printf("\nStuck\n");
                                goto output; //  
                            }

                // 0 = up, 1 = down, 2 = left, 3 = right 

                switch (move){
                    case 0: if (((position[0] - 1) < 0) || ((board[position[0]-1][position[1]]) != '.')){
                            break;
                            }
                            position[0]--;
                            done = 1;
                            break;

                    case 1: if (((position[0] + 1) >= size) || ((board[position[0]+1][position[1]]) != '.')){
                            break;
                            }
                            position[0]++;
                            done = 1;
                            break;

                    case 2: if (((position[1] - 1) < 0) || ((board[position[0]][position[1]-1]) != '.')){
                            break;
                            }
                            position[1]--;
                            done = 1;
                            break;
                    
                    case 3: if (((position[1] + 1) >= size) || ((board[position[0]][position[1]+1]) != '.')){   
                            break;
                            }
                            position[1]++;
                            done = 1;
                            break;

                }


            }
        }

        // outputs the board
        output: 
        printf("\nLoop %d:\n", recursion+1);

        for (int i = 0; i < size; i++){
            for (int x = 0; x < size; x++){
                printf(" %c ", board[i][x]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;

}